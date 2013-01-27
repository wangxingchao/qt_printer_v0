#ifndef JETSTATUS_H
#define JETSTATUS_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
    class Jetstatus;
}

class Jetstatus : public MainWindow
{
    Q_OBJECT

public:
    explicit Jetstatus(QWidget *parent = 0);
    ~Jetstatus();

private slots:
    void on_jetbutton_clicked(QAbstractButton *button);

    void on_pushButton_clicked();
//    void update_timer();

private:
    Ui::Jetstatus *ui;
protected:
  //  void update_data(void);
};

#endif // JETSTATUS_H
