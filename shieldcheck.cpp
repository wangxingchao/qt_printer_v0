#include "shieldcheck.h"
#include "ui_shieldcheck.h"

shieldcheck::shieldcheck(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::shieldcheck)
{
    ui->setupUi(this);
    createActions();
    createMenus();
}

shieldcheck::~shieldcheck()
{
    delete ui;
}

void shieldcheck::on_checkbutton_clicked(QAbstractButton *button)
{
    ui->comboBox_8->currentIndex();
    ui->comboBox_9->currentIndex();
}
