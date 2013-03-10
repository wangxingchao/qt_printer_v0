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

Jetstatus::Jetstatus(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::Jetstatus)
{
    ui->setupUi(this);
    createActions();
    createMenus();

    fd = open(devname, O_RDWR);
    if (fd < 0)
          printf("open error\n");

}

Jetstatus::~Jetstatus()
{
    delete ui;
}

/* Send Specific commands to FPGA *
* CMD 0: Close Ink
* CMD 1: Open Ink
* CMD 2: ...
* CMD N: ...
* Offset Addr: 0x03 <== Change Later
* Note: Maybe there's new map between CMD <==> Selection
*/
#define PENZUI_ON    0xE1
#define PENZUI_OFF     0xE2
/* Note: 
 * Enable INK Line, write 0x1 to 0xE1.
 * Disable INK Line, write 0x1 t0 0xE2.
 * */
void Jetstatus::on_jetbutton_clicked(QAbstractButton *button)
{
    int i = 0;
    int ret;
    i = ui->comboBox->currentIndex();
    /* TODO: Use Array to detect address */
    printf("Button Click: Combox selection number %d\n", i);
    if (i == 0x0)
	    write_data(PENZUI_OFF, 1);
    else if (i == 0x1)
	    write_data(PENZUI_ON, 1);
    else
	    printf("Need More options here\n");
}

void Jetstatus::on_pushButton_clicked()
{
    /* read tempture */
}
