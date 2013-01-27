#include "initcfgwnd.h"
#include "ui_initcfgwnd.h"
#include <stdio.h>
#include <stdlib.h>

InitCfgWnd::InitCfgWnd(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::InitCfgWnd)
{
    ui->setupUi(this);
    createActions();
    createMenus();
}

InitCfgWnd::~InitCfgWnd()
{
    delete ui;
}

void InitCfgWnd::UpdateUI(QByteArray& byeArray)
{
    QMessageBox::information(this, tr("Test Title"), tr("InitCfg!"));
}


void InitCfgWnd::on_initbutton_clicked(QAbstractButton *button)
{
    const char* msg="error msg.\n";
    int i = 0;
    i =  ui->comboBox_2->currentIndex();
    ui->labeltest->setText(msg);
    ui->comboBox_3->setCurrentIndex(i);
    ui->dateTimeEdit->currentSectionIndex();

    fprintf(stderr,"%d: %s.",i,ui->labeltest->text().toAscii().constData());
    fprintf(stderr,"4: %s.",ui->lineEdit_4->text().toAscii().constData());
    fprintf(stderr,"3: %s.",ui->lineEdit_3->text().toAscii().constData());
    fprintf(stderr,"2: %s.",ui->lineEdit_2->text().toAscii().constData());
    fprintf(stderr,"1: %s.",ui->lineEdit->text().toAscii().constData());
    fprintf(stderr,"5: %s.",ui->dateTimeEdit->text().toAscii().constData());

}

void InitCfgWnd::on_funbutton_clicked(QAbstractButton *button)
{
    ui->checkBox->setTristate();
    ui->checkBox_2->setTristate();
    ui->checkBox_3->setTristate();
    ui->checkBox_4->setTristate();
    ui->checkBox_5->setTristate();
    ui->checkBox_6->setTristate();

    fprintf(stderr,"1: %s.",ui->checkBox->text().toAscii().constData());

}

void InitCfgWnd::on_RS232button_clicked(QAbstractButton *button)
{
    int i = 0;
    i =  ui->comboBox->currentIndex();
    ui->comboBox_4->setCurrentIndex(i);

    ui->comboBox_5->currentIndex();
    ui->comboBox_6->currentIndex();
    ui->comboBox_7->currentIndex();

    fprintf(stderr,"1: %s.",ui->lineEdit_5->text().toAscii().constData());

}
