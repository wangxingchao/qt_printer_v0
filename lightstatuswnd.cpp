#include "lightstatuswnd.h"
#include "ui_lightstatuswnd.h"

LightStatusWnd::LightStatusWnd(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::LightStatusWnd)
{
    ui->setupUi(this);
    createActions();
    createMenus();
}

LightStatusWnd::~LightStatusWnd()
{
    delete ui;
}

void LightStatusWnd::UpdateUI(QByteArray& byeArray)
{
    QMessageBox::information(this, tr("Test Title"), tr("LightStatus!"));
}
