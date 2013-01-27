#include "jetstatus.h"
#include "ui_jetstatus.h"
#include "qstring.h"
#include "qtimer.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <QtGui>

#if 0
#define FPGA_TEST 0x0
#define FPGA_READ_TEMP 0x1
#define FPGA_READ_PREESURE 0x2
#define FPGA_ADDR 0x10
#define FPGA_READ_DATA 0x12
#define FPGA_WRITE_DATA 0x13

char *devname = "/dev/s3c-fpga";

int fd;

int ret;
int buffer[3] = {0xaa55, 0xccbb, 0x1234};

int status;
int address=0;
int tmp_data;
QTimer *timer;

void Jetstatus:: update_data()
{
    QString str;
int j;
    printf("TEST: Read addr: %d data\n", address);
    ret  = ioctl(fd, FPGA_ADDR, &address);
    if (ret < 0)
          printf("ioctl error when setting FPGA_ADDR\n");
    ret = ioctl(fd, FPGA_READ_DATA, &tmp_data);
    printf("FPGA_READ_DATA: %d\n", tmp_data);
    address++;
    if (address > 255) 
        address = 0;
    
#if 1 
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
    ui->lineEdit->setText(str);
    printf("Please check Line edit text\n");
}

void Jetstatus::update_timer()
{
	QTime time = QTime::currentTime();
	QString text = time.toString("hh:mm");
    	ui->pressure0->setText(text);
	update_data();

}
#endif
Jetstatus::Jetstatus(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::Jetstatus)
{
    ui->setupUi(this);
    createActions();
    createMenus();
#if 0
timer = new QTimer(this);
connect(timer, SIGNAL(timeout()), this, SLOT(update_timer()));
    timer->start(1000);

    fd = open(devname, O_RDWR);
    if (fd < 0)
          printf("open error\n");
#endif
}

Jetstatus::~Jetstatus()
{
    delete ui;
}

void Jetstatus::on_jetbutton_clicked(QAbstractButton *button)
{
    int i = 0;
int ret;
int j;
    i = ui->comboBox->currentIndex();
    ui->comboBox_10->setCurrentIndex(i);


    fprintf(stderr,"1: %s.",ui->lineEdit_15->text().toAscii().constData());

    /* read pressure */
#if 0 
for (j=0; j<3; j++) {
    ret = ioctl(fd, j, &status);

    if (ret < 0)
       printf("ioctl error sending cmd %d\n", j); //print error message on screen
    }
#endif
     //printf("read data\n");
    //ret = read(fd, buffer, sizeof(int));

    //print buffer[0] data to screen pressure label.
   // buffer[0]
   // button->
}

void Jetstatus::on_pushButton_clicked()
{
    /* read tempture */
#if 0
    QString str;
int j;
#if 1 
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
    ui->lineEdit->setText(str);
    printf("Please check Line edit text\n");
#endif
	//update_data();
//    timer->start(1000);

}
