/********************************************************************************
** Form generated from reading UI file 'shieldcheck.ui'
**
** Created: Sun Mar 10 15:34:42 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIELDCHECK_H
#define UI_SHIELDCHECK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shieldcheck
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_5;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_36;
    QLabel *label_37;
    QComboBox *comboBox_8;
    QComboBox *comboBox_9;
    QDialogButtonBox *checkbutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *shieldcheck)
    {
        if (shieldcheck->objectName().isEmpty())
            shieldcheck->setObjectName(QString::fromUtf8("shieldcheck"));
        shieldcheck->resize(447, 329);
        centralwidget = new QWidget(shieldcheck);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 10, 321, 191));
        gridLayoutWidget_4 = new QWidget(groupBox_5);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(30, 40, 263, 111));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_36 = new QLabel(gridLayoutWidget_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_4->addWidget(label_36, 0, 0, 1, 1);

        label_37 = new QLabel(gridLayoutWidget_4);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout_4->addWidget(label_37, 1, 0, 1, 1);

        comboBox_8 = new QComboBox(gridLayoutWidget_4);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout_4->addWidget(comboBox_8, 0, 1, 1, 1);

        comboBox_9 = new QComboBox(gridLayoutWidget_4);
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));

        gridLayout_4->addWidget(comboBox_9, 1, 1, 1, 1);

        checkbutton = new QDialogButtonBox(centralwidget);
        checkbutton->setObjectName(QString::fromUtf8("checkbutton"));
        checkbutton->setGeometry(QRect(180, 230, 156, 23));
        checkbutton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        shieldcheck->setCentralWidget(centralwidget);
        menubar = new QMenuBar(shieldcheck);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 447, 23));
        shieldcheck->setMenuBar(menubar);
        statusbar = new QStatusBar(shieldcheck);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        shieldcheck->setStatusBar(statusbar);

        retranslateUi(shieldcheck);

        QMetaObject::connectSlotsByName(shieldcheck);
    } // setupUi

    void retranslateUi(QMainWindow *shieldcheck)
    {
        shieldcheck->setWindowTitle(QApplication::translate("shieldcheck", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("shieldcheck", "\345\261\217\350\224\275\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("shieldcheck", "\345\226\267\345\244\264\347\233\226\346\243\200\346\265\213              ", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("shieldcheck", "\345\233\236\346\224\266\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("shieldcheck", "\345\274\200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("shieldcheck", "\345\205\263", 0, QApplication::UnicodeUTF8)
        );
        comboBox_9->clear();
        comboBox_9->insertItems(0, QStringList()
         << QApplication::translate("shieldcheck", "\345\274\200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("shieldcheck", "\345\205\263", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class shieldcheck: public Ui_shieldcheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIELDCHECK_H
