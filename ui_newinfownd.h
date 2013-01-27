/********************************************************************************
** Form generated from reading UI file 'newinfownd.ui'
**
** Created: Sun Jan 27 15:40:01 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWINFOWND_H
#define UI_NEWINFOWND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewInfoWnd
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox_2;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewInfoWnd)
    {
        if (NewInfoWnd->objectName().isEmpty())
            NewInfoWnd->setObjectName(QString::fromUtf8("NewInfoWnd"));
        NewInfoWnd->resize(800, 600);
        centralwidget = new QWidget(NewInfoWnd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 310, 131, 41));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 320, 330, 20));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(210, 10, 69, 22));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 70, 531, 221));
        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(250, 360, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(210, 40, 69, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(91, 11, 71, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 40, 71, 16));
        NewInfoWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NewInfoWnd);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        NewInfoWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(NewInfoWnd);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NewInfoWnd->setStatusBar(statusbar);

        retranslateUi(NewInfoWnd);

        QMetaObject::connectSlotsByName(NewInfoWnd);
    } // setupUi

    void retranslateUi(QMainWindow *NewInfoWnd)
    {
        NewInfoWnd->setWindowTitle(QApplication::translate("NewInfoWnd", "NewInfo", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewInfoWnd", "\344\277\241\346\201\257\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("NewInfoWnd", "hello", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("NewInfoWnd", "5*7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "7*9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "9*11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "12*16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "16*16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "24*24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "32*32", 0, QApplication::UnicodeUTF8)
        );
        lineEdit->setText(QApplication::translate("NewInfoWnd", "aBFASD132^&*FEFffda", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("NewInfoWnd", "A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "C", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "D", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "ABCD1234", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "()", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "*", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "/", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", ">", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", "@", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewInfoWnd", ":", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("NewInfoWnd", "\345\255\227\345\275\242\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewInfoWnd", "\345\233\276\345\275\242\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewInfoWnd: public Ui_NewInfoWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWINFOWND_H
