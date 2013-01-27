#include "penyinparamwnd.h"
#include "ui_penyinparamwnd.h"
#include <stdio.h>
#include <stdlib.h>

PenYinParamWnd::PenYinParamWnd(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::PenYinParamWnd)
{
    ui->setupUi(this);
    createActions();
    createMenus();
}

PenYinParamWnd::~PenYinParamWnd()
{
    delete ui;
}

void PenYinParamWnd::UpdateUI(QByteArray& byeArray)
{
    QMessageBox::information(this, tr("Test Title"), tr("PenYinParam!"));
}

void PenYinParamWnd::on_penyinbutton_clicked(QAbstractButton *button)
{
    int i = 0;
    i =  ui->comboBox->currentIndex();
    ui->comboBox_2->setCurrentIndex(i);
    ui->comboBox_5->currentIndex();
    ui->comboBox_6->currentIndex();
    ui->comboBox_11->currentIndex();
    ui->comboBox_10->currentIndex();

    fprintf(stderr,"1: %s.",ui->lineEdit->text().toAscii().constData());
    fprintf(stderr,"2: %s.",ui->lineEdit_2->text().toAscii().constData());
    fprintf(stderr,"3: %s.",ui->lineEdit_3->text().toAscii().constData());
    fprintf(stderr,"4: %s.",ui->lineEdit_4->text().toAscii().constData());
    fprintf(stderr,"5: %s.",ui->lineEdit_5->text().toAscii().constData());
    fprintf(stderr,"6: %s.",ui->lineEdit_6->text().toAscii().constData());
}
