/********************************************************************************
** Form generated from reading UI file 'sysgenwnd.ui'
**
** Created: Sun Jan 27 15:40:01 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSGENWND_H
#define UI_SYSGENWND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SysGenWnd
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QDialogButtonBox *sysbutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SysGenWnd)
    {
        if (SysGenWnd->objectName().isEmpty())
            SysGenWnd->setObjectName(QString::fromUtf8("SysGenWnd"));
        SysGenWnd->resize(800, 600);
        centralwidget = new QWidget(SysGenWnd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 20, 91, 20));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(350, 20, 113, 21));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 60, 541, 431));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 70, 421, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 1, 1, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 2, 1, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 3, 1, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 4, 1, 1, 1);

        sysbutton = new QDialogButtonBox(centralwidget);
        sysbutton->setObjectName(QString::fromUtf8("sysbutton"));
        sysbutton->setGeometry(QRect(450, 510, 156, 23));
        sysbutton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        SysGenWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SysGenWnd);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        SysGenWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(SysGenWnd);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SysGenWnd->setStatusBar(statusbar);

        retranslateUi(SysGenWnd);

        QMetaObject::connectSlotsByName(SysGenWnd);
    } // setupUi

    void retranslateUi(QMainWindow *SysGenWnd)
    {
        SysGenWnd->setWindowTitle(QApplication::translate("SysGenWnd", "SysGeneral", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SysGenWnd", "\345\236\213\345\217\267\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SysGenWnd", "\350\275\257\347\241\254\344\273\266\347\211\210\346\234\254\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SysGenWnd", "CPU\347\211\210\346\234\254\345\217\267", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SysGenWnd", "\350\275\257\344\273\266\347\211\210\346\234\254\345\217\267", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SysGenWnd", "\347\225\214\351\235\242\347\211\210\346\234\254\345\217\267", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SysGenWnd", "\345\226\267\345\244\264\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SysGenWnd", "\345\226\267\347\240\201\346\234\272\345\272\217\345\210\227\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SysGenWnd: public Ui_SysGenWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSGENWND_H
