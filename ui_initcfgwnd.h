/********************************************************************************
** Form generated from reading UI file 'initcfgwnd.ui'
**
** Created: Sun Mar 24 18:21:43 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITCFGWND_H
#define UI_INITCFGWND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitCfgWnd
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QDialogButtonBox *initbutton;
    QLabel *labeltest;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QDialogButtonBox *funbutton;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_11;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QComboBox *comboBox;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QLineEdit *lineEdit_5;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_8;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QDialogButtonBox *RS232button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InitCfgWnd)
    {
        if (InitCfgWnd->objectName().isEmpty())
            InitCfgWnd->setObjectName(QString::fromUtf8("InitCfgWnd"));
        InitCfgWnd->resize(734, 600);
        centralwidget = new QWidget(InitCfgWnd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 10, 681, 511));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 20, 621, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(16);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(gridLayoutWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout->addWidget(dateTimeEdit, 1, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        comboBox_3 = new QComboBox(gridLayoutWidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 2, 1, 1, 1);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 190, 621, 121));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 291, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(340, 20, 271, 91));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 330, 621, 111));
        verticalLayoutWidget_3 = new QWidget(groupBox_2);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 30, 291, 71));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        verticalLayoutWidget_4 = new QWidget(groupBox_2);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(340, 29, 271, 71));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_4->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_4->addWidget(lineEdit_4);

        initbutton = new QDialogButtonBox(tab);
        initbutton->setObjectName(QString::fromUtf8("initbutton"));
        initbutton->setGeometry(QRect(450, 450, 156, 23));
        initbutton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        labeltest = new QLabel(tab);
        labeltest->setObjectName(QString::fromUtf8("labeltest"));
        labeltest->setGeometry(QRect(130, 450, 71, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayoutWidget_5 = new QWidget(tab_2);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(60, 20, 461, 401));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        checkBox_2 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_5->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_5->addWidget(checkBox_3);

        checkBox = new QCheckBox(verticalLayoutWidget_5);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_5->addWidget(checkBox);

        checkBox_4 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout_5->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout_5->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout_5->addWidget(checkBox_6);

        funbutton = new QDialogButtonBox(verticalLayoutWidget_5);
        funbutton->setObjectName(QString::fromUtf8("funbutton"));
        funbutton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_5->addWidget(funbutton);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayoutWidget_6 = new QWidget(tab_3);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(60, 60, 181, 381));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_6->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_6->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_6->addWidget(label_10);

        label_12 = new QLabel(verticalLayoutWidget_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_6->addWidget(label_12);

        label_13 = new QLabel(verticalLayoutWidget_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_6->addWidget(label_13);

        label_14 = new QLabel(verticalLayoutWidget_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_6->addWidget(label_14);

        label_11 = new QLabel(verticalLayoutWidget_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_6->addWidget(label_11);

        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 40, 135, 251));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_7->addWidget(comboBox);

        comboBox_4 = new QComboBox(layoutWidget);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        verticalLayout_7->addWidget(comboBox_4);

        comboBox_5 = new QComboBox(layoutWidget);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        verticalLayout_7->addWidget(comboBox_5);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_7->addWidget(lineEdit_5);

        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 330, 141, 111));
        verticalLayout_8 = new QVBoxLayout(layoutWidget1);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        comboBox_6 = new QComboBox(layoutWidget1);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        verticalLayout_8->addWidget(comboBox_6);

        comboBox_7 = new QComboBox(layoutWidget1);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        verticalLayout_8->addWidget(comboBox_7);

        RS232button = new QDialogButtonBox(tab_3);
        RS232button->setObjectName(QString::fromUtf8("RS232button"));
        RS232button->setGeometry(QRect(490, 420, 156, 23));
        RS232button->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget->addTab(tab_3, QString());
        InitCfgWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InitCfgWnd);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 734, 23));
        InitCfgWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(InitCfgWnd);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InitCfgWnd->setStatusBar(statusbar);

        retranslateUi(InitCfgWnd);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(InitCfgWnd);
    } // setupUi

    void retranslateUi(QMainWindow *InitCfgWnd)
    {
        InitCfgWnd->setWindowTitle(QApplication::translate("InitCfgWnd", "InitCfg", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("InitCfgWnd", "\345\267\245\344\275\234\350\257\255\350\250\200: ", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("InitCfgWnd", "Chinese", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InitCfgWnd", "Korean", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InitCfgWnd", "English", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("InitCfgWnd", "\346\227\266\351\222\237", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("InitCfgWnd", "\345\226\267\345\244\264\344\270\216\347\211\251\351\227\264\350\267\235", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("InitCfgWnd", "10mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InitCfgWnd", "5mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InitCfgWnd", "15mm", 0, QApplication::UnicodeUTF8)
        );
        groupBox->setTitle(QApplication::translate("InitCfgWnd", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("InitCfgWnd", "\351\224\256\347\233\230\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("InitCfgWnd", "\345\256\211\345\205\250\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        lineEdit->setInputMask(QString());
        groupBox_2->setTitle(QApplication::translate("InitCfgWnd", "\347\275\221\345\217\243\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("InitCfgWnd", "IP", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("InitCfgWnd", "\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        labeltest->setText(QApplication::translate("InitCfgWnd", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("InitCfgWnd", "\345\210\235\345\247\213\345\214\226\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("InitCfgWnd", "\344\277\241\346\201\257\351\200\222\345\242\236\345\226\267\345\215\260", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("InitCfgWnd", "\345\261\217\350\224\275\345\226\267\345\215\260\351\200\237\345\272\246\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("InitCfgWnd", "\347\224\265\347\274\206\345\226\267\345\215\260\345\212\237\350\203\275", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("InitCfgWnd", "\345\204\222\347\225\245\345\216\206\346\263\225\345\274\217\346\234\252\346\235\245\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("InitCfgWnd", "\346\257\217\346\254\241\350\247\246\345\217\221\345\226\267\345\215\260\344\270\200\346\254\241", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("InitCfgWnd", "\345\242\250\347\202\271\351\243\236\350\241\214\350\241\245\345\201\277", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("InitCfgWnd", "\345\217\257\351\200\211\345\212\237\350\203\275", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("InitCfgWnd", "\346\263\242\347\211\271\347\216\207", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("InitCfgWnd", "\345\245\207\345\201\266\346\240\241\351\252\214\344\275\215", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("InitCfgWnd", "\347\273\223\346\235\237\344\275\215", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("InitCfgWnd", "\347\234\213\351\227\250\347\213\227", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("InitCfgWnd", "8\344\275\215\345\255\227\351\225\277\346\240\274\345\274\217", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("InitCfgWnd", "RS232\351\200\232\350\256\257", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("InitCfgWnd", "\347\211\271\345\256\232\351\200\232\350\256\257\346\226\271\345\274\217", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("InitCfgWnd", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InitCfgWnd", "51200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InitCfgWnd", "38400", 0, QApplication::UnicodeUTF8)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("InitCfgWnd", "none", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InitCfgWnd", "odd", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InitCfgWnd", "even", 0, QApplication::UnicodeUTF8)
        );
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("InitCfgWnd", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InitCfgWnd", "2", 0, QApplication::UnicodeUTF8)
        );
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("InitCfgWnd", "Direct", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InitCfgWnd", "Standard", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InitCfgWnd", "Test", 0, QApplication::UnicodeUTF8)
        );
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("InitCfgWnd", "none", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("InitCfgWnd", "\344\270\262\345\217\243\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InitCfgWnd: public Ui_InitCfgWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITCFGWND_H
