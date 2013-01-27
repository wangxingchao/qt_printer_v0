#ifndef LIGHTSTATUSWND_H
#define LIGHTSTATUSWND_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
    class LightStatusWnd;
}

class LightStatusWnd : public MainWindow
{
    Q_OBJECT

public:
    explicit LightStatusWnd(QWidget *parent = 0);
    ~LightStatusWnd();

private:
    Ui::LightStatusWnd *ui;
private slots:
    void UpdateUI(QByteArray& byeArrayy);
};

#endif // LIGHTSTATUSWND_H
