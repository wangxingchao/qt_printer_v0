/********************************************************************************
** Form generated from reading UI file 'mainwnd.ui'
**
** Created: Sun Mar 10 15:34:42 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWND_H
#define UI_MAINWND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QTimeEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWnd
{
public:
    QWidget *centralwidget;
    QLabel *label_wel;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QTreeWidget *treeWidget_2;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWnd)
    {
        if (MainWnd->objectName().isEmpty())
            MainWnd->setObjectName(QString::fromUtf8("MainWnd"));
        MainWnd->resize(757, 504);
        QIcon icon;
        icon.addFile(QString::fromUtf8("myappico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWnd->setWindowIcon(icon);
        centralwidget = new QWidget(MainWnd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_wel = new QLabel(centralwidget);
        label_wel->setObjectName(QString::fromUtf8("label_wel"));
        label_wel->setGeometry(QRect(20, 70, 471, 71));
        QFont font;
        font.setPointSize(40);
        label_wel->setFont(font);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 401, 61));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(490, 10, 241, 61));
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(610, 40, 121, 22));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(610, 20, 121, 22));
        treeWidget_2 = new QTreeWidget(centralwidget);
        treeWidget_2->setObjectName(QString::fromUtf8("treeWidget_2"));
        treeWidget_2->setGeometry(QRect(540, 100, 191, 231));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(610, 160, 118, 23));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(610, 260, 118, 23));
        progressBar_2->setValue(24);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(550, 160, 61, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(550, 260, 61, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 20, 91, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 20, 91, 41));
        label_4->setMargin(0);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 20, 51, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../bin/debug/\347\273\277\347\201\257.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(64, 64));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 20, 51, 51));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../bin/debug/\347\272\242\347\201\257.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(64, 64));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(80, 380, 41, 41));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../bin/debug/\347\263\273\347\273\237.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon3);
        pushButton_7->setIconSize(QSize(64, 64));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(330, 380, 41, 41));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../bin/debug/\347\224\250\346\210\267.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon4);
        pushButton_8->setIconSize(QSize(64, 64));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(630, 380, 41, 41));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../bin/on.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon5);
        pushButton_9->setIconSize(QSize(64, 64));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(10, 140, 491, 192));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 140, 81, 31));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../bin/debug/\346\226\207\346\241\243.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon6);
        pushButton_10->setIconSize(QSize(24, 24));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(90, 140, 81, 31));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../bin/debug/\347\274\226\350\276\221.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon7);
        pushButton_11->setIconSize(QSize(24, 24));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(170, 140, 81, 31));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../bin/debug/\345\267\245\345\205\267.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon8);
        pushButton_12->setIconSize(QSize(24, 24));
        MainWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWnd);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 757, 23));
        MainWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWnd);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWnd->setStatusBar(statusbar);

        retranslateUi(MainWnd);

        QMetaObject::connectSlotsByName(MainWnd);
    } // setupUi

    void retranslateUi(QMainWindow *MainWnd)
    {
        MainWnd->setWindowTitle(QApplication::translate("MainWnd", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_wel->setText(QApplication::translate("MainWnd", "Welcom to use PMJ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_2->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWnd", "\346\266\262\344\275\215\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWnd", "Ink", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWnd", "Additive", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWnd", "\345\242\250\347\272\277\347\212\266\346\200\201\346\214\207\347\244\272\347\201\257", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWnd", "\346\225\205\351\232\234\347\212\266\346\200\201\346\214\207\347\244\272\347\201\257", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QApplication::translate("MainWnd", "\346\226\260\345\273\272\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("MainWnd", "\347\274\226\350\276\221\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWnd", "\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWnd: public Ui_MainWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWND_H
