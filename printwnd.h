#ifndef PRINTWND_H
#define PRINTWND_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
    class PrintWnd;
}

class PrintWnd : public MainWindow
{
    Q_OBJECT

public:
    explicit PrintWnd(QWidget *parent = 0);
    ~PrintWnd();

private:
    Ui::PrintWnd *ui;
private slots:
    void UpdateUI(QByteArray& byeArray);
};

#endif // PRINTWND_H
