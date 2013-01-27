#include "printwnd.h"
#include "ui_printwnd.h"

PrintWnd::PrintWnd(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::PrintWnd)
{
    ui->setupUi(this);
    createActions();
    createMenus();
}

PrintWnd::~PrintWnd()
{
    delete ui;
}

void PrintWnd::UpdateUI(QByteArray& byeArray)
{
    QMessageBox::information(this, tr("Test Title"), tr("PrintWnd!"));
}
