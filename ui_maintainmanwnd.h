/********************************************************************************
** Form generated from reading UI file 'maintainmanwnd.ui'
**
** Created: Sun Mar 24 18:21:43 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINMANWND_H
#define UI_MAINTAINMANWND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainManWnd
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QTableWidget *tableWidget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MaintainManWnd)
    {
        if (MaintainManWnd->objectName().isEmpty())
            MaintainManWnd->setObjectName(QString::fromUtf8("MaintainManWnd"));
        MaintainManWnd->resize(800, 600);
        centralwidget = new QWidget(MaintainManWnd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 20, 650, 471));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableWidget_2 = new QTableWidget(tab_3);
        if (tableWidget_2->columnCount() < 9)
            tableWidget_2->setColumnCount(9);
        if (tableWidget_2->rowCount() < 13)
            tableWidget_2->setRowCount(13);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_2->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_2->setItem(0, 1, __qtablewidgetitem1);
        QFont font;
        font.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font);
        tableWidget_2->setItem(0, 2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_2->setItem(0, 3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_2->setItem(0, 4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_2->setItem(0, 5, __qtablewidgetitem5);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 0, 631, 441));
        tableWidget_2->setShowGrid(true);
        tableWidget_2->setSortingEnabled(false);
        tableWidget_2->setWordWrap(true);
        tableWidget_2->setCornerButtonEnabled(true);
        tableWidget_2->setRowCount(13);
        tableWidget_2->setColumnCount(9);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->verticalHeader()->setVisible(false);
        tabWidget->addTab(tab_3, QString());
        MaintainManWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MaintainManWnd);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MaintainManWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(MaintainManWnd);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MaintainManWnd->setStatusBar(statusbar);

        retranslateUi(MaintainManWnd);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MaintainManWnd);
    } // setupUi

    void retranslateUi(QMainWindow *MaintainManWnd)
    {
        MaintainManWnd->setWindowTitle(QApplication::translate("MaintainManWnd", "MaintainMan", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->item(0, 0);
        ___qtablewidgetitem->setText(QApplication::translate("MaintainManWnd", "\346\234\272\345\231\250\350\277\220\350\241\214\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->item(0, 1);
        ___qtablewidgetitem1->setText(QApplication::translate("MaintainManWnd", "\351\251\254\350\276\276\350\275\254\351\200\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->item(0, 2);
        ___qtablewidgetitem2->setText(QApplication::translate("MaintainManWnd", "\345\216\213\345\212\233", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->item(0, 3);
        ___qtablewidgetitem3->setText(QApplication::translate("MaintainManWnd", "\345\242\250\347\272\277\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->item(0, 4);
        ___qtablewidgetitem4->setText(QApplication::translate("MaintainManWnd", "\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->item(0, 5);
        ___qtablewidgetitem5->setText(QApplication::translate("MaintainManWnd", "\347\256\241\350\267\257\347\263\273\347\273\237\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        tableWidget_2->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MaintainManWnd", "\345\226\267\345\244\264\347\212\266\346\200\201\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainManWnd: public Ui_MaintainManWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINMANWND_H
