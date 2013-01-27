#ifndef PENYINPARAMWND_H
#define PENYINPARAMWND_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
    class PenYinParamWnd;
}

class PenYinParamWnd : public MainWindow
{
    Q_OBJECT

public:
    explicit PenYinParamWnd(QWidget *parent = 0);
    ~PenYinParamWnd();

private:
    Ui::PenYinParamWnd *ui;
private slots:
    void UpdateUI(QByteArray& byeArray);
    void on_penyinbutton_clicked(QAbstractButton *button);
};

#endif // PENYINPARAMWND_H
