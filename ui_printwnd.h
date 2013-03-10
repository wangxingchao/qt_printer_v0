/********************************************************************************
** Form generated from reading UI file 'printwnd.ui'
**
** Created: Sat Feb 23 12:40:52 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTWND_H
#define UI_PRINTWND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrintWnd
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PrintWnd)
    {
        if (PrintWnd->objectName().isEmpty())
            PrintWnd->setObjectName(QString::fromUtf8("PrintWnd"));
        PrintWnd->resize(800, 600);
        centralwidget = new QWidget(PrintWnd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 160, 91, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 220, 101, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(410, 160, 113, 20));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(410, 220, 113, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 300, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 300, 75, 23));
        PrintWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PrintWnd);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        PrintWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(PrintWnd);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PrintWnd->setStatusBar(statusbar);

        retranslateUi(PrintWnd);

        QMetaObject::connectSlotsByName(PrintWnd);
    } // setupUi

    void retranslateUi(QMainWindow *PrintWnd)
    {
        PrintWnd->setWindowTitle(QApplication::translate("PrintWnd", "Rrint", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PrintWnd", "\345\226\267\345\244\264\345\217\267", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PrintWnd", "\345\226\267\345\215\260\344\277\241\346\201\257\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PrintWnd", "\345\220\257\345\212\250\345\226\267\345\215\260", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("PrintWnd", "\345\201\234\346\255\242\345\226\267\345\215\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PrintWnd: public Ui_PrintWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTWND_H
