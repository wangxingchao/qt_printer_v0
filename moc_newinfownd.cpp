/****************************************************************************
** Meta object code from reading C++ file 'newinfownd.h'
**
** Created: Sun Mar 24 17:46:32 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "newinfownd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newinfownd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NewInfoWnd[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x08,
      50,   43,   11,   11, 0x08,
      94,   89,   11,   11, 0x08,
     127,   89,   11,   11, 0x08,
     170,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NewInfoWnd[] = {
    "NewInfoWnd\0\0byeArray\0UpdateUI(QByteArray&)\0"
    "button\0on_buttonBox_clicked(QAbstractButton*)\0"
    "arg1\0on_comboBox_2_activated(QString)\0"
    "on_comboBox_2_currentIndexChanged(QString)\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject NewInfoWnd::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_NewInfoWnd,
      qt_meta_data_NewInfoWnd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NewInfoWnd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NewInfoWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NewInfoWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewInfoWnd))
        return static_cast<void*>(const_cast< NewInfoWnd*>(this));
    return MainWindow::qt_metacast(_clname);
}

int NewInfoWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: UpdateUI((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: on_comboBox_2_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: on_comboBox_2_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
