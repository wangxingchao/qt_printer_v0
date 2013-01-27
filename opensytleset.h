#ifndef OPENSYTLESET_H
#define OPENSYTLESET_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
    class openSytleSet;
}

class openSytleSet : public MainWindow
{
    Q_OBJECT

public:
    explicit openSytleSet(QWidget *parent = 0);
    ~openSytleSet();

private slots:
    void on_openbutton_clicked(QAbstractButton *button);

private:
    Ui::openSytleSet *ui;
};

#endif // OPENSYTLESET_H
