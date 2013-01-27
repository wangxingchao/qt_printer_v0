#include "maintainmanwnd.h"
#include "ui_maintainmanwnd.h"

MaintainManWnd::MaintainManWnd(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::MaintainManWnd)
{
    ui->setupUi(this);
    createActions();
    createMenus();
}

MaintainManWnd::~MaintainManWnd()
{
    delete ui;
}

void MaintainManWnd::UpdateUI(QByteArray& byeArrayy)
{
    QMessageBox::information(this, tr("Test Title"), tr("MainTainWnd!"));
}
