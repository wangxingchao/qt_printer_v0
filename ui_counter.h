/********************************************************************************
** Form generated from reading UI file 'counter.ui'
**
** Created: Sun Mar 10 15:34:42 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTER_H
#define UI_COUNTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_counter
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QDialogButtonBox *counterbutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *counter)
    {
        if (counter->objectName().isEmpty())
            counter->setObjectName(QString::fromUtf8("counter"));
        counter->resize(320, 240);
        centralwidget = new QWidget(counter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 81, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 71, 21));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 40, 113, 20));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(120, 100, 71, 16));
        counterbutton = new QDialogButtonBox(centralwidget);
        counterbutton->setObjectName(QString::fromUtf8("counterbutton"));
        counterbutton->setGeometry(QRect(140, 150, 156, 23));
        counterbutton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        counter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(counter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 23));
        counter->setMenuBar(menubar);
        statusbar = new QStatusBar(counter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        counter->setStatusBar(statusbar);

        retranslateUi(counter);

        QMetaObject::connectSlotsByName(counter);
    } // setupUi

    void retranslateUi(QMainWindow *counter)
    {
        counter->setWindowTitle(QApplication::translate("counter", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("counter", "\344\272\247\345\223\201\350\256\241\346\225\260\345\231\250\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("counter", "\345\244\215\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class counter: public Ui_counter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTER_H
