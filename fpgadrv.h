#ifndef FPGADRV_H
#define FPGADRV_H
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

char *devname = "/dev/s3c-fpga";
int fd;
int ret;
int buffer[3] = {0xaa55, 0xccbb, 0x1234};

int status;
int address=0;
int tmp_data;
int enable;

int get_data(int address)
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


int write_data(int address, int value)
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
