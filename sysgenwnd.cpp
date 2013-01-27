#include "sysgenwnd.h"
#include "ui_sysgenwnd.h"
#include <stdio.h>
#include <stdlib.h>

SysGenWnd::SysGenWnd(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::SysGenWnd)
{
    ui->setupUi(this);
    createActions();
    createMenus();
}

SysGenWnd::~SysGenWnd()
{
    delete ui;
}

void SysGenWnd::UpdateUI(QByteArray& byeArray)
{
    QMessageBox::information(this, tr("Test Title"), tr("SysGen!"));
}

void SysGenWnd::on_sysbutton_clicked(QAbstractButton *button)
{
    ui->lineEdit->cursorPosition();
    ui->lineEdit_2->cursorPosition();
    ui->lineEdit_3->cursorPosition();
    ui->lineEdit_4->cursorPosition();
    ui->lineEdit_5->cursorPosition();
    ui->lineEdit_6->cursorPosition();

    fprintf(stderr,"1: %s.",ui->lineEdit->text().toAscii().constData());
    fprintf(stderr,"2: %s.",ui->lineEdit->text().toAscii().constData());
    fprintf(stderr,"3: %s.",ui->lineEdit->text().toAscii().constData());
    fprintf(stderr,"4: %s.",ui->lineEdit->text().toAscii().constData());
    fprintf(stderr,"5: %s.",ui->lineEdit->text().toAscii().constData());
    fprintf(stderr,"6: %s.",ui->lineEdit->text().toAscii().constData());
}
