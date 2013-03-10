/****************************************************************************
** Meta object code from reading C++ file 'magnetic.h'
**
** Created: Sat Feb 23 16:39:13 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "magnetic.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magnetic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_magnetic[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   10,    9,    9, 0x08,
      61,    9,    9,    9, 0x08,
      81,   76,    9,    9, 0x08,
     115,   76,    9,    9, 0x08,
     149,   76,    9,    9, 0x08,
     183,   76,    9,    9, 0x08,
     216,   76,    9,    9, 0x08,
     249,   76,    9,    9, 0x08,
     283,   76,    9,    9, 0x08,
     316,   76,    9,    9, 0x08,
     349,   76,    9,    9, 0x08,
     382,   76,    9,    9, 0x08,
     415,   76,    9,    9, 0x08,
     448,   10,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_magnetic[] = {
    "magnetic\0\0button\0"
    "on_magneticbutton_clicked(QAbstractButton*)\0"
    "update_timer()\0arg1\0"
    "on_comboBox_10_activated(QString)\0"
    "on_comboBox_11_activated(QString)\0"
    "on_comboBox_12_activated(QString)\0"
    "on_comboBox_8_activated(QString)\0"
    "on_comboBox_2_activated(QString)\0"
    "on_comboBox_13_activated(QString)\0"
    "on_comboBox_3_activated(QString)\0"
    "on_comboBox_4_activated(QString)\0"
    "on_comboBox_5_activated(QString)\0"
    "on_comboBox_6_activated(QString)\0"
    "on_comboBox_7_activated(QString)\0"
    "on_buttonBox_clicked(QAbstractButton*)\0"
};

const QMetaObject magnetic::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_magnetic,
      qt_meta_data_magnetic, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &magnetic::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *magnetic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *magnetic::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_magnetic))
        return static_cast<void*>(const_cast< magnetic*>(this));
    return MainWindow::qt_metacast(_clname);
}

int magnetic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_magneticbutton_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: update_timer(); break;
        case 2: on_comboBox_10_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: on_comboBox_11_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: on_comboBox_12_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: on_comboBox_8_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: on_comboBox_2_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: on_comboBox_13_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: on_comboBox_3_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: on_comboBox_4_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: on_comboBox_5_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: on_comboBox_6_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: on_comboBox_7_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
