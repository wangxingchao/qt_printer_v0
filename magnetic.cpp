#include "magnetic.h"
#include "ui_magnetic.h"
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
#include <QtGui>

QTimer *timer;


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

// timer->start(1000);
//item 4
#if 0
    if (ui->comboBox_11->currentText() == tr("enable")) {
        printf("Item 4 setting ENABLE\n");
        enabled = 1;
    } else {
        printf("Item 4 setting DISABLE\n");
        enabled = 0;
    }
    write_data(0x44, enabled);

	//item 5
   if (ui->comboBox_12->currentText() == tr("enable")) {
        printf("Item 5 setting ENABLE\n");
        enabled = 1;
    } else {
        printf("Item 5 setting DISABLE\n");
        enabled = 0;
    }
	 write_data(0x45, enabled);

	//item 6
   if (ui->comboBox_6->currentText() == tr("enable")) {
        printf("Item 6 setting ENABLE\n");
        enabled = 1;
    } else {
        printf("Item 6 setting DISABLE\n");
        enabled = 0;
    }
	 write_data(0x46, enabled);
	
    //item 7
   if (ui->comboBox_10->currentText() == tr("enable")) {
        printf("Item 7 setting ENABLE\n");
        enabled = 1;
    } else {
        printf("Item 7 setting DISABLE\n");
        enabled = 0;
    }
	 write_data(0x43, enabled);

     //item 14
    if (ui->comboBox_7->currentText() == tr("enable")) {
         printf("Item 14 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 14 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x4B, enabled);
   
     //item 15
    if (ui->comboBox_4->currentText() == tr("enable")) {
         printf("Item 15 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 15 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x47, enabled);

     //item 19
    if (ui->comboBox_5->currentText() == tr("enable")) {
         printf("Item 19 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 19 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x48, enabled);

     //item 20
    if (ui->comboBox_8->currentText() == tr("enable")) {
         printf("Item 20 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 20 setting DISABLE\n");
         enabled = 0;
     }
         write_data(0x49, enabled);

     //item 21
    if (ui->comboBox_9->currentText() == tr("enable")) {
         printf("Item 21 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 21 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x4A, enabled);

     //item 22
    if (ui->comboBox_2->currentText() == tr("enable")) {
         printf("Item 22 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 22 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x41, enabled);

     //item 23
    if (ui->comboBox_13->currentText() == tr("enable")) {
         printf("Item 23 setting ENABLE\n");
         enabled = 1;
     } else {
         printf("Item 23 setting DISABLE\n");
         enabled = 0;
     }
      write_data(0x42, enabled);
#endif
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
}
