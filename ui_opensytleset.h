/********************************************************************************
** Form generated from reading UI file 'opensytleset.ui'
**
** Created: Sun Jan 27 15:40:01 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENSYTLESET_H
#define UI_OPENSYTLESET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_openSytleSet
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QDialogButtonBox *openbutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *openSytleSet)
    {
        if (openSytleSet->objectName().isEmpty())
            openSytleSet->setObjectName(QString::fromUtf8("openSytleSet"));
        openSytleSet->resize(220, 160);
        centralwidget = new QWidget(openSytleSet);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 10, 101, 22));
        openbutton = new QDialogButtonBox(centralwidget);
        openbutton->setObjectName(QString::fromUtf8("openbutton"));
        openbutton->setGeometry(QRect(50, 80, 156, 23));
        openbutton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        openSytleSet->setCentralWidget(centralwidget);
        menubar = new QMenuBar(openSytleSet);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 220, 23));
        openSytleSet->setMenuBar(menubar);
        statusbar = new QStatusBar(openSytleSet);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        openSytleSet->setStatusBar(statusbar);

        retranslateUi(openSytleSet);

        QMetaObject::connectSlotsByName(openSytleSet);
    } // setupUi

    void retranslateUi(QMainWindow *openSytleSet)
    {
        openSytleSet->setWindowTitle(QApplication::translate("openSytleSet", "MainWindow", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("openSytleSet", "\350\207\252\345\212\250\345\274\200\345\242\250\347\272\277", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("openSytleSet", "\346\211\213\345\212\250\345\274\200\345\242\250\347\272\277", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class openSytleSet: public Ui_openSytleSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENSYTLESET_H
