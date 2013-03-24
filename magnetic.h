#ifndef MAGNETIC_H
#define MAGNETIC_H

#include <QMainWindow>
#include "mainwindow.h"



namespace Ui {
    class magnetic;
}

class magnetic : public MainWindow
{
    Q_OBJECT

public:
    explicit magnetic(QWidget *parent = 0);
    ~magnetic();

private slots:
    void on_magneticbutton_clicked(QAbstractButton *button);
   void update_timer();

   void on_comboBox_10_activated(const QString &arg1);

   void on_comboBox_11_activated(const QString &arg1);

   void on_comboBox_12_activated(const QString &arg1);

   void on_comboBox_8_activated(const QString &arg1);

   void on_comboBox_2_activated(const QString &arg1);

   void on_comboBox_13_activated(const QString &arg1);

  void on_comboBox_3_activated(const QString &arg1);

  void on_comboBox_4_activated(const QString &arg1);

  void on_comboBox_5_activated(const QString &arg1);

  void on_comboBox_6_activated(const QString &arg1);

  void on_comboBox_7_activated(const QString &arg1);

  void on_buttonBox_clicked(QAbstractButton *button);


private:
    Ui::magnetic *ui;
protected:
    void update_data(void);

};

#endif // MAGNETIC_H
