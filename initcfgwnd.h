#ifndef INITCFGWND_H
#define INITCFGWND_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
    class InitCfgWnd;
}

class InitCfgWnd : public MainWindow
{
    Q_OBJECT

public:
    explicit InitCfgWnd(QWidget *parent = 0);
    ~InitCfgWnd();

private:
    Ui::InitCfgWnd *ui;
private slots:
    void UpdateUI(QByteArray& byeArray);
    void on_initbutton_clicked(QAbstractButton *button);
    void on_funbutton_clicked(QAbstractButton *button);
    void on_RS232button_clicked(QAbstractButton *button);
};

#endif // INITCFGWND_H
