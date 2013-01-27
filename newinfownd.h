#ifndef NEWINFOWND_H
#define NEWINFOWND_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
    class NewInfoWnd;
}

class NewInfoWnd : public MainWindow
{
    Q_OBJECT

public:
    explicit NewInfoWnd(QWidget *parent = 0);
    ~NewInfoWnd();



private:
    Ui::NewInfoWnd *ui;
private slots:
    void UpdateUI(QByteArray& byeArray);
    void on_buttonBox_clicked(QAbstractButton *button);
    void on_comboBox_2_activated(const QString &arg1);
    void on_comboBox_2_currentIndexChanged(const QString &arg1);
};

#endif // NEWINFOWND_H
