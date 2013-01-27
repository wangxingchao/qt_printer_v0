#ifndef SHIELDCHECK_H
#define SHIELDCHECK_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
    class shieldcheck;
}

class shieldcheck : public MainWindow
{
    Q_OBJECT

public:
    explicit shieldcheck(QWidget *parent = 0);
    ~shieldcheck();

private slots:
    void on_checkbutton_clicked(QAbstractButton *button);

private:
    Ui::shieldcheck *ui;
};

#endif // SHIELDCHECK_H
