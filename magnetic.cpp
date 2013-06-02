#include "magnetic.h"
#include "ui_magnetic.h"
#include "qstring.h"
#include "qtimer.h"

#include <unistd.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <QtGui>
#include <qtextcodec.h>
#include <QByteArray>

#define FPGA_TEST 0x0
#define FPGA_READ_TEMP 0x1
#define FPGA_READ_PREESURE 0x2
#define FPGA_ADDR 0x10
#define FPGA_READ_DATA 0x12
#define FPGA_WRITE_DATA 0x13

static char *devname = "/dev/s3c-fpga";
static int fd;
static int ret;
static int buffer[3] = {0xaa55, 0xccbb, 0x1234};

static int status;
static int address=0;
static int tmp_data;
static int enable;

static int get_data(int address)
{
   int ret;
    ret  = ioctl(fd, FPGA_ADDR, &address);
    if (ret < 0)
	  printf("ioctl error when setting FPGA_ADDR\n");
   ret = ioctl(fd, FPGA_READ_DATA, &tmp_data);
  //  printf("FPGA_READ_DATA: addr 0x%x --> value 0x%x\n",address, tmp_data);  
    if (ret < 0)
      printf("ioctl error\n"); //print error message on screen
 //   printf("IOCTL Ok: Status = %x\n", status);
    return tmp_data;
}


static int write_data(int address, int value)
{
	int ret;
    ret  = ioctl(fd, FPGA_ADDR, &address);
    if (ret < 0)
	  printf("ioctl error when setting FPGA_ADDR\n");
   ret = ioctl(fd, FPGA_WRITE_DATA, &value);
    //printf("FPGA_READ_DATA: %d\n", tmp_data);  
    if (ret < 0)
       printf("ioctl error\n"); //print error message on screen
//    printf("IOCTL Ok: Status = %x\n", status);
// printf("FPGA_WRITE_DATA: write value %d to addr %d\n", value, address); 
return ret;
}

//Register definition for M25p32 flash
//diagram:
//   M25p32 flash ---> FPGA ---> CPU
//   1. cpu calculate size and data buffer
//   2. cpu tell fpga the target address of flash chip
//   3. cpu tell the data length in transfer
//   4. cpu write data to 0x85 repeately
//   5. cpu tell fpga to sync data to flash chip
//
#define WADDR_MSB	0x81
#define WOP_CMD_MASK	0xFF0000
#define WADDR_MASK	0xFF

#define WADDR_LSB	0x82

#define WDATA_LEN_MSB	0x83
#define WDATA_LEN_LSB	0x84
#define WADDR_REPEAT	0x85

#define RADDR_MSB	0x87
#define ROP_CMD_MASK	0xFF00
#define RADDR_MASK	0xFF

#define RADDR_LSB	0x88
#define RDATA_LEN_MSB	0x89
#define RDATA_LEN_LSB	0x8A
#define RADDR_REPEAT	0x8B

#define WR_SYNC		0x8C //0x8006 for Write sync; 0x8004 for Read sync
#define DATA_TYPE	0x8F

#define WRITE_TYPE	0x2
#define READ_TYPE	0x03//	0x9F
//5*7: 0 
//12 * 10: 1
//16*16 :2
//18*18: 3
//
//
//read data from addreess into buffer,  
static int read_buffer(int address, char *buffer, int size)
{
	char h_addr, opcmd;
	int pos = 0, len = size;
	short value;
	//set write address
	write_data(RADDR_LSB, address&0xFFFF);
	
	h_addr = (address>>16) & 0xFF;
	opcmd = READ_TYPE;
	write_data(RADDR_MSB, (opcmd << 8) | h_addr);

	write_data(RDATA_LEN_MSB, size >> 16);
	write_data(RDATA_LEN_LSB, size & 0xFFFF);

	//flush the data
	write_data(WR_SYNC, 0x8004);

	usleep(size);

	while (len > 0) {
		value = get_data(RADDR_REPEAT);
		buffer[pos+1] = value & 0xFF;
		buffer[pos] = value >> 8;
		pos += 2;
		len -= 2;
		if (len == 1) {
			//write last byte manually
			value = get_data(RADDR_REPEAT);
			buffer[pos] = value & 0xFF;
			len = 0;
		}
	}
	
	return 0;
}

//This API would write size data from offset to the address
//len should be less than 256 bytes
static int write_buffer(int address, char *buffer, int size)
{
	char h_addr, opcmd;
	int pos = 0, len = size;
	short value;
	//set write address
	write_data(WADDR_LSB, address&0xFFFF);
	
	h_addr = (address>>16) & 0xFF;
	opcmd = WRITE_TYPE;
	write_data(WADDR_MSB, (opcmd << 8) | h_addr);

	write_data(WDATA_LEN_MSB, size >> 16);
	write_data(WDATA_LEN_LSB, size & 0xFFFF);

	while (len > 0) {
		value = buffer[pos] | (buffer[pos+1] << 8);
		write_data(WADDR_REPEAT, value);
		pos += 2;
		len -= 2;
		if (len == 1) {
			//write last byte manually
			write_data(WADDR_REPEAT, buffer[pos]);
			len = 0;
		}
	}
	
	//flush the data
	write_data(WR_SYNC, 0xc006);
	return 0;
}

void spi_erase(int address)
{
	//erash the flash chip before write(For test)
	char h_addr;
	
	write_data(WADDR_LSB, address & 0xFFFF);
	
	h_addr = (address >> 16) & 0xFF;
	write_data(WADDR_MSB, (0xd8 << 8) | h_addr);

	write_data(WR_SYNC, 0xc006);

	usleep(2000000);
}

void download_lib(void)
{
	struct stat st;
	int ziku_fd;
	unsigned long size, pos;
	char *path = "/sdcard/HZK16";
	char read_buf[256];
	char read_back[256];
	int flash_addr;
	int err;
	int rounds, i,j, chunk, left;
	int erase_rounds;
	static int error_count;
    int op_step;

	stat(path, &st);
	size = st.st_size;

	printf("Ziku %s size %lu\n", path, size);
	erase_rounds = size/0x10000;
	printf("erase %d rounds\n", erase_rounds);

    if (ui->comboBox_9->currentText() == tr("Step0")) {
         printf("Start Step 0\n");
         op_step = 0;
     } else if (ui->comboBox_9->currentText() == tr("Step1")) {
         printf("Start Step 1\n");
         op_step = 1;
     } else if (ui->comboBox_9->currentText() == tr("Step2")) {
        printf("Start Step 2\n");
        op_step = 2;
     } else
        op_step = 3;

     printf("FPGA TEST: Step %d\n", op_step);

	for (i = 0; i < erase_rounds+1; i++) {
//		spi_erase(flash_addr + i*0x10000);
	}

	//for test only, write one buffer 
    	ziku_fd = open(path, O_RDWR);

#if 1 
	spi_erase(flash_addr);	
	printf("erase flash\n");
	for (i = 0; i < sizeof(read_buf); i++)
		read_buf[i] = i;
//	memset(read_buf, 0x5a, sizeof(read_buf));	
	flash_addr = 0x10000; //write from set0

	err = write_buffer(flash_addr, read_buf, 256);
	if (err < 0)
		printf("write error\n");

	usleep(10000);

	err = read_buffer(flash_addr, read_back, 256);
	if (err < 0)
		printf("write error\n");

	for (i=0; i<256; i++) {
		if (read_buf[i] != read_back[i])
			printf("No Match at 0x%x [0x%x]--[0x%x]\n",i, read_buf[i], read_back[i]);
	}
#endif

	//spi_erase(flash_addr);	
	//printf("erase flash\n");
#if 0 
	pos = 0;
	flash_addr = 0x10000;
	chunk = sizeof(read_buf);
	rounds = size / chunk;
	memset(read_buf, 0, sizeof(read_buf));
	memset(read_back, 0, sizeof(read_back));

	for (j=0; j<rounds; j++) {
		err = read(ziku_fd, read_buf, sizeof(read_buf));
		if (err < 0)
			printf("read ziku file error\n");

		err = write_buffer(flash_addr + pos, read_buf, chunk);
		if (err < 0)
			printf("write flash error\n");
    
        	usleep(10000);
        
        	err = read_buffer(flash_addr + pos, read_back, 256);
        	if (err < 0)
        		printf("write error\n");
        
        	for (i=0; i<256; i++) {
        		if (read_buf[i] != read_back[i])
				error_count++;
        			//printf("No Match at %d [%d]--[%d]\n",i, read_buf[i], read_back[i]);
            	}
		pos += chunk;
		lseek(ziku_fd, pos, SEEK_SET);
	}

	left = size - rounds * chunk;
	//write left bytes
	if (left > 0) { 
		printf("write left bytes %d\n", left);
		err = read(ziku_fd, read_buf, left);
		if (err < 0)
			printf("read ziku file error\n");
		err = write_buffer(flash_addr + pos, read_buf, chunk);
		if (err < 0)
			printf("write flash error\n");
	}
#endif
       printf("error count %d\n", error_count);
}

QTimer *timer;

QTextCodec* gbk_codec;
//QPainter* qp = new QPainter();
QString ChineseAndEnglish(const char*ChineseString)
{
	gbk_codec = QTextCodec::codecForName("UTF-8");
	return gbk_codec->toUnicode(ChineseString); 
}

QString ChineseAndEnglish(const char*ChineseString,const char* _codeName)
{
        gbk_codec = QTextCodec::codecForName(_codeName);
        return gbk_codec->toUnicode(ChineseString);
}
QByteArray ChineseAndEnglish2(QString unicodeString,const char* _codeName)
{        
	gbk_codec = QTextCodec::codecForName(_codeName);
	return gbk_codec->fromUnicode(unicodeString);
}

int get_decode(const char *chinese)
{
	QString txt1;
	QByteArray txt2;
	uint value;
	bool ok;

	txt1 = ChineseAndEnglish(chinese);
	txt2 = ChineseAndEnglish2(txt1, "GB2312");

	    char* name;
	    name = txt2.data();
	    value = txt1.toUInt(&ok, 10);
	    //printf("%s%s %x\n",chinese,"The chinese word", value);
 	    printf("%s%s",chinese,"的区位码是：");
	    int i=strlen(name);
            int j=0;
	    int l=0,r=0;
	   for(j=0; j<i-1; j+=2)
	      {
	          r=(int)name[j];
	          l=(int)name[j+1];
	          if(r<0){
	             r=256+r-160;
	          }else{
	             r=r-160;
	         }
	        if(l<0){
	          l=256+l-160;
	         }else{
	           l=l-160;
	         }
	        if(j==0){
	         printf("%02d%02d",abs(r),abs(l));
	       }else{
	        printf(",%02d%02d",abs(r),abs(l));
	     }
	}
	      return 1;
}


void magnetic:: update_data()
{
    QString str;
    int j;
    int enabled;
#if 0
    printf("TEST: Read addr: %d data\n", address);
    ret  = ioctl(fd, FPGA_ADDR, &address);
    if (ret < 0)
          printf("ioctl error when setting FPGA_ADDR\n");
    ret = ioctl(fd, FPGA_READ_DATA, &tmp_data);
    printf("FPGA_READ_DATA: %d\n", get_data(address));
    address++;
    if (address > 255) 
        address = 0;
#endif
    
#if 0 
    ret = ioctl(fd, FPGA_READ_TEMP, &status);

    if (ret < 0)
       printf("ioctl error\n"); //print error message on screen
    printf("IOCTL Ok: Status = %x\n", status);
#endif

#if 0
for (j=0; j<3; j++) {
	printf("buffer[%d]: 0x%x\n",j,buffer[j]);

   
}
#endif
#if 0
    ret = read(fd, buffer, sizeof(int));
    printf("read temp data from driver %x\n", buffer[0]&0xff);
    str = QString::number(buffer[0]&0xff);
    //ui->pressure0->setText(str);
    ui->lineEdit_3->setText(str); //tempreture
    ret = ioctl(fd, FPGA_READ_PREESURE, &status);
    if (ret < 0)
       printf("ioctl error when read pressure data\n"); //print error message on screen
    ret = ioctl(fd, 0x4, &status);
    ret = read(fd, buffer, sizeof(int));
    printf("read pressure data from driver %x\n", buffer[0]&0xff);
    str = QString::number(buffer[0]&0xff);
    ui->lineEdit_15->setText(str);
    printf("Please check Line edit text\n");
#endif


// Add reading out values to QT panels
  int value;
 //pressure
    value = get_data(0x92);
    str = QString::number((value>>4)&0xff);
    ui->lineEdit_15->setText(str);


 //pressure voltage?
    value = get_data(0x91);
    str = QString::number((value>>4)&0xff);
    ui->lineEdit_16->setText(str);

//item 3, ink Low liquid-level
    value = get_data(0x97);
    str = QString::number(value&0xff);
    ui->lineEdit_14->setText(str);

//item 9, viscosity
    value = get_data(0x98);
    str = QString::number(value&0xff);
    ui->lineEdit_17->setText(str);

//item 10, viscometer high level
    value = get_data(0x95);
    str = QString::number(value&0xff);
    ui->lineEdit_12->setText(str);

//item 11, viscometer low liquid-level
    value = get_data(0x96);
    str = QString::number(value&0xff);
    ui->lineEdit_13->setText(str);

//item 12, cover detection
    value = get_data(0x44);
    str = QString::number(value&0xff);
    ui->lineEdit_20->setText(str);

//item 13, recover detection
    value = get_data(0x45);
    str = QString::number(value&0xff);
    ui->lineEdit_19->setText(str);

//item 17, pipeline temperature
    value = get_data(0x93);
    str = QString::number((value>>4)&0xff);
    ui->lineEdit_4->setText(str);

//item 18, charge detection
    value = get_data(0x99);
    str = QString::number(value&0xff);
    ui->lineEdit_18->setText(str);

//item 7 LED, only for test combobox
#if 0
   if (ui->comboBox_10->currentText() == tr("enable")) {
        printf("Item 7 setting ENABLE\n");
        enabled = 1;
    } else {
        printf("Item 7 setting DISABLE\n");
        enabled = 0;
    }
	 write_data(0x43, enabled);
#endif
}

void magnetic::update_timer()
{
	QTime time = QTime::currentTime();
	QString text = time.toString("hh:mm");
  //  	ui->pressure0->setText(text);
	update_data();
}

magnetic::magnetic(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::magnetic)
{
    ui->setupUi(this);
    createActions();
    createMenus();
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update_timer()));
    fd = open(devname, O_RDWR);
    if (fd < 0)
          printf("open error\n");

    //timer->start(5000);
    printf("##################\n");
    get_decode("下");
    printf("##################\n");
}

magnetic::~magnetic()
{
    delete ui;
}

void magnetic::on_magneticbutton_clicked(QAbstractButton *button)
{
    int i = 0;
int value;
    int enabled;
    i =  ui->comboBox_2->currentIndex();

    fprintf(stderr,"1: %s.",ui->lineEdit_3->text().toAscii().constData());
    fprintf(stderr,"2: %s.",ui->lineEdit_4->text().toAscii().constData());
    fprintf(stderr,"3: %s.",ui->lineEdit_15->text().toAscii().constData());
    fprintf(stderr,"4: %s.",ui->lineEdit_12->text().toAscii().constData());
    fprintf(stderr,"5: %s.",ui->lineEdit_13->text().toAscii().constData());
    fprintf(stderr,"6: %s.",ui->lineEdit_14->text().toAscii().constData());

//item 8 test, for pressure
    value = ui->lineEdit_21->text().toInt();
       printf("Item 8 setting value 0x%d\n", value);
     if (value > 50 || value < 5000)
	     write_data(0x51, value);

//item 24 test, for pressure
    value = ui->lineEdit_22->text().toInt();
       printf("Item 24 setting value 0x%d\n", value);
     if (value > 50 || value < 5000)
     write_data(0x52, value);
}


void magnetic::on_comboBox_10_activated(const QString &arg1)
{
    int enabled;
    if (ui->comboBox_10->currentText() == tr("enable")) {

        printf("Item 7 setting ENABLE\n");
        enabled = 1;
    } else {
        printf("Item 7 setting DISABLE\n");
        enabled = 0;
    }
        write_data(0x43, enabled);
}

void magnetic::on_comboBox_11_activated(const QString &arg1)
{
    int enabled;
    if (ui->comboBox_11->currentText() == tr("enable")) {
        printf("Item 4 setting ENABLE\n");
        enabled = 1;
    } else {
        printf("Item 4 setting DISABLE\n");
        enabled = 0;
    }
    write_data(0x44, enabled);
}

void magnetic::on_comboBox_12_activated(const QString &arg1)
{
    int enabled;
    if (ui->comboBox_12->currentText() == tr("enable")) {
         printf("Item 5 setting ENABLE\n");
         enabled = 1;
    } else {
         printf("Item 5 setting DISABLE\n");
         enabled = 0;
    }
     write_data(0x45, enabled);
}


void magnetic::on_comboBox_8_activated(const QString &arg1)
{
    int enabled;
    if (ui->comboBox_8->currentText() == tr("enable")) {
         printf("Item 20 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 20 setting DISABLE\n");
         enabled = 0;
     }
         write_data(0x49, enabled);
}


void magnetic::on_comboBox_2_activated(const QString &arg1)
{
    int enabled;
    if (ui->comboBox_2->currentText() == tr("enable")) {
         printf("Item 22 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 22 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x41, enabled);
}

void magnetic::on_comboBox_13_activated(const QString &arg1)
{
    int enabled;
    if (ui->comboBox_13->currentText() == tr("enable")) {
         printf("Item 23 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 23 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x42, enabled);
}

void magnetic::on_comboBox_3_activated(const QString &arg1)
{
    int enabled;
    if (ui->comboBox_3->currentText() == tr("enable")) {
         printf("Item 6 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 6 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x46, enabled);
}

void magnetic::on_comboBox_4_activated(const QString &arg1)
{
    int enabled;
    if (ui->comboBox_4->currentText() == tr("enable")) {
         printf("Item 14 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 14 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x4B, enabled);
}

void magnetic::on_comboBox_5_activated(const QString &arg1)
{
    int enabled;
    if (ui->comboBox_5->currentText() == tr("enable")) {
         printf("Item 15 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 15 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x47, enabled);
}

void magnetic::on_comboBox_6_activated(const QString &arg1)
{
    int enabled;
    if (ui->comboBox_6->currentText() == tr("enable")) {
         printf("Item 19 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 19 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x48, enabled);
}

void magnetic::on_comboBox_7_activated(const QString &arg1)
{
    int enabled;
    if (ui->comboBox_7->currentText() == tr("enable")) {
         printf("Item 21 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 21 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x4A, enabled);
}


void magnetic::on_buttonBox_clicked(QAbstractButton *button)
{
    //item 25 test, for pressure
    int value;
        value = ui->lineEdit_23->text().toInt();
           printf("Item 25 setting value 0x%d\n", value);
       if (value > 22 || value < 100)
           write_data(0x51, value);

       //download character library for test
       download_lib();
}
