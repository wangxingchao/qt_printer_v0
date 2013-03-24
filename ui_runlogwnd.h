/********************************************************************************
** Form generated from reading UI file 'runlogwnd.ui'
**
** Created: Sun Mar 24 15:18:19 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNLOGWND_H
#define UI_RUNLOGWND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RunLogWnd
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QTableWidget *tableWidget_3;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RunLogWnd)
    {
        if (RunLogWnd->objectName().isEmpty())
            RunLogWnd->setObjectName(QString::fromUtf8("RunLogWnd"));
        RunLogWnd->resize(702, 600);
        centralwidget = new QWidget(RunLogWnd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 30, 621, 471));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableWidget_3 = new QTableWidget(tab_3);
        if (tableWidget_3->columnCount() < 9)
            tableWidget_3->setColumnCount(9);
        if (tableWidget_3->rowCount() < 13)
            tableWidget_3->setRowCount(13);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(50, 20, 521, 414));
        tableWidget_3->setShowGrid(true);
        tableWidget_3->setSortingEnabled(false);
        tableWidget_3->setWordWrap(true);
        tableWidget_3->setCornerButtonEnabled(true);
        tableWidget_3->setRowCount(13);
        tableWidget_3->setColumnCount(9);
        tableWidget_3->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_3->verticalHeader()->setVisible(false);
        tabWidget->addTab(tab_3, QString());
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 10, 91, 21));
        RunLogWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RunLogWnd);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 702, 23));
        RunLogWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(RunLogWnd);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RunLogWnd->setStatusBar(statusbar);

        retranslateUi(RunLogWnd);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RunLogWnd);
    } // setupUi

    void retranslateUi(QMainWindow *RunLogWnd)
    {
        RunLogWnd->setWindowTitle(QApplication::translate("RunLogWnd", "Runlog", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("RunLogWnd", "\346\225\205\351\232\234\350\277\220\350\241\214\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RunLogWnd", "Run Log", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RunLogWnd: public Ui_RunLogWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNLOGWND_H
