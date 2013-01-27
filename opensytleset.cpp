#include "opensytleset.h"
#include "ui_opensytleset.h"
#include <stdio.h>
#include <stdlib.h>

openSytleSet::openSytleSet(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::openSytleSet)
{
    ui->setupUi(this);
    createActions();
    createMenus();
}

openSytleSet::~openSytleSet()
{
    delete ui;
}

void openSytleSet::on_openbutton_clicked(QAbstractButton *button)
{
    ui->comboBox->currentIndex();


}
