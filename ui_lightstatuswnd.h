/********************************************************************************
** Form generated from reading UI file 'lightstatuswnd.ui'
**
** Created: Sat Feb 23 12:40:52 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTSTATUSWND_H
#define UI_LIGHTSTATUSWND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LightStatusWnd
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LightStatusWnd)
    {
        if (LightStatusWnd->objectName().isEmpty())
            LightStatusWnd->setObjectName(QString::fromUtf8("LightStatusWnd"));
        LightStatusWnd->resize(800, 600);
        centralwidget = new QWidget(LightStatusWnd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 90, 561, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        comboBox_3 = new QComboBox(gridLayoutWidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboBox_4 = new QComboBox(gridLayoutWidget);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 3, 1, 1, 1);

        LightStatusWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LightStatusWnd);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        LightStatusWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(LightStatusWnd);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LightStatusWnd->setStatusBar(statusbar);

        retranslateUi(LightStatusWnd);

        QMetaObject::connectSlotsByName(LightStatusWnd);
    } // setupUi

    void retranslateUi(QMainWindow *LightStatusWnd)
    {
        LightStatusWnd->setWindowTitle(QApplication::translate("LightStatusWnd", "LightStatus", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LightStatusWnd", "\345\226\267\347\240\201\346\234\272\347\224\265\346\272\220\346\214\207\347\244\272\347\201\257", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("LightStatusWnd", "on", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LightStatusWnd", "off", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("LightStatusWnd", "\346\225\205\351\232\234\346\214\207\347\244\272\347\201\257", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("LightStatusWnd", "YES", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LightStatusWnd", "NO", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("LightStatusWnd", "\346\262\271\345\242\250\346\266\262\344\275\215\346\214\207\347\244\272\347\201\257", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("LightStatusWnd", "light", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LightStatusWnd", "bicker", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LightStatusWnd", "wink", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("LightStatusWnd", "\346\267\273\345\212\240\345\211\202\346\266\262\344\275\215\346\214\207\347\244\272\347\201\257", 0, QApplication::UnicodeUTF8));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("LightStatusWnd", "light", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LightStatusWnd", "wink", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class LightStatusWnd: public Ui_LightStatusWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTSTATUSWND_H
