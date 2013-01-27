#ifndef RUNLOGWND_H
#define RUNLOGWND_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
    class RunLogWnd;
}

class RunLogWnd : public MainWindow
{
    Q_OBJECT

public:
    explicit RunLogWnd(QWidget *parent = 0);
    ~RunLogWnd();

protected:
     //void contextMenuEvent(QContextMenuEvent *event);

private:
    Ui::RunLogWnd *ui;
private slots:
    void UpdateUI(QByteArray& byeArray);
};

#endif // RUNLOGWND_H
