#ifndef COUNTER_H
#define COUNTER_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
    class counter;
}

class counter : public MainWindow
{
    Q_OBJECT

public:
    explicit counter(QWidget *parent = 0);
    ~counter();

private slots:
    void on_counterbutton_clicked(QAbstractButton *button);

private:
    Ui::counter *ui;
};

#endif // COUNTER_H
