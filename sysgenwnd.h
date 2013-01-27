#ifndef SYSGENWND_H
#define SYSGENWND_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
    class SysGenWnd;
}

class SysGenWnd : public MainWindow
{
    Q_OBJECT

public:
    explicit SysGenWnd(QWidget *parent = 0);
    ~SysGenWnd();

private:
    Ui::SysGenWnd *ui;
private slots:
    void UpdateUI(QByteArray& byeArray);
    void on_sysbutton_clicked(QAbstractButton *button);
};

#endif // SYSGENWND_H
