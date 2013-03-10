#include "newinfownd.h"
#include "ui_newinfownd.h"

#include <QTextEdit>


#include <stdio.h>
#include <stdlib.h>
#include "qstring.h"
#include "qtimer.h"

#include <unistd.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

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
    printf("FPGA_READ_DATA: addr 0x%x --> value 0x%x\n",address, tmp_data);  
    if (ret < 0)
      printf("ioctl error\n"); //print error message on screen
//    printf("IOCTL Ok: Status = %x\n", status);
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
 printf("FPGA_WRITE_DATA: write value %d to addr %d\n", value, address); 
return ret;
}

NewInfoWnd::NewInfoWnd(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::NewInfoWnd)
{
    QString text;
    ui->setupUi(this);
    createActions();
    createMenus();
    fd = open(devname, O_RDWR);
    if (fd < 0)
          printf("open error\n");
}

NewInfoWnd::~NewInfoWnd()
{
    delete ui;
}


void NewInfoWnd::UpdateUI(QByteArray& byeArray)
{
    QMessageBox::information(this, tr("Test Title"), tr("NewInfo!"));
}

void NewInfoWnd::on_buttonBox_clicked(QAbstractButton *button)
{
    int rec;
    const char *ascii;
    int length, i, type, ascii_val, write_val;
    rec = ui->comboBox->currentIndex();
    printf("current rec selection %d\n", rec);

    if (ui->comboBox->currentText() == tr("5*7")) {
         printf("selection 5*7\n");
         type = 0;
     } else if (ui->comboBox->currentText() == tr("7*9")){
         printf("selection 7*9\n");
         type = 1;
    } else if (ui->comboBox->currentText() == tr("12*16")){
        printf("selection 12*16\n");
        type = 2;
    } else if (ui->comboBox->currentText() == tr("24*24")){
        printf("selection 24*24\n");
        type = 3;
     } else {
           printf("OTHER selection\n");
    }
    ascii = ui->textEdit->toPlainText().toAscii().constData();
    length = ui->textEdit->toPlainText().length();
    printf("current Ascii number %s, length %d\n", ascii, length);
    for (i=0; i < length; i++) {
        printf("Ascii[%d-->%c] = %d\n", i, ascii[i], ascii[i]);
        write_val = type << 8 | ascii[i]; 
	printf("FPGA: Write ASCII numbers %d to 0x8F address\n", write_val);
        write_data(0x8f, (write_val & 0xFFFF));
    }

}

void NewInfoWnd::on_comboBox_2_activated(const QString &arg1)
{
    QString text;
    printf("slot activated\n");
    text = ui->comboBox_2->currentText();
     //printf("current combox2 number %s\n", text);
    ui->lineEdit_2->setText(text);

}

void NewInfoWnd::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
    QString combox, lineedit;
     printf("slot index changed\n");
     combox = ui->comboBox_2->currentText();
     lineedit = ui->textEdit->toPlainText();
     lineedit.append(combox);
     ui->textEdit->setText(lineedit);
}

void NewInfoWnd::on_pushButton_clicked()
{
    ui->textEdit->setText(" ");
}
