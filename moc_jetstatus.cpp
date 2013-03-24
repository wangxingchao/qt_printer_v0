/****************************************************************************
** Meta object code from reading C++ file 'jetstatus.h'
**
** Created: Sun Mar 24 17:46:30 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "jetstatus.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jetstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Jetstatus[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   11,   10,   10, 0x08,
      57,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Jetstatus[] = {
    "Jetstatus\0\0button\0"
    "on_jetbutton_clicked(QAbstractButton*)\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject Jetstatus::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_Jetstatus,
      qt_meta_data_Jetstatus, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Jetstatus::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Jetstatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Jetstatus::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Jetstatus))
        return static_cast<void*>(const_cast< Jetstatus*>(this));
    return MainWindow::qt_metacast(_clname);
}

int Jetstatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_jetbutton_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
