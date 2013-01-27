#include "counter.h"
#include "ui_counter.h"
#include <stdio.h>
#include <stdlib.h>

counter::counter(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::counter)
{
    ui->setupUi(this);
    createActions();
    createMenus();
}

counter::~counter()
{
    delete ui;
}

void counter::on_counterbutton_clicked(QAbstractButton *button)
{

    ui->checkBox->setTristate();
    ui->lineEdit->cursorPosition();

    fprintf(stderr,"1: %s.",ui->checkBox->text().toAscii().constData());
    fprintf(stderr,"2: %s.",ui->lineEdit->text().toAscii().constData());
}
