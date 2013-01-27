#ifndef MAINTAINMANWND_H
#define MAINTAINMANWND_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
    class MaintainManWnd;
}

class MaintainManWnd : public MainWindow
{
    Q_OBJECT

public:
    explicit MaintainManWnd(QWidget *parent = 0);
    ~MaintainManWnd();

private:
    Ui::MaintainManWnd *ui;
private slots:
    void UpdateUI(QByteArray& byeArray);
};

#endif // MAINTAINMANWND_H
