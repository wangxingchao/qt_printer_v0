/****************************************************************************
** Meta object code from reading C++ file 'shieldcheck.h'
**
** Created: Sun Mar 24 16:20:22 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "shieldcheck.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shieldcheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_shieldcheck[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   13,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_shieldcheck[] = {
    "shieldcheck\0\0button\0"
    "on_checkbutton_clicked(QAbstractButton*)\0"
};

const QMetaObject shieldcheck::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_shieldcheck,
      qt_meta_data_shieldcheck, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &shieldcheck::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *shieldcheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *shieldcheck::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_shieldcheck))
        return static_cast<void*>(const_cast< shieldcheck*>(this));
    return MainWindow::qt_metacast(_clname);
}

int shieldcheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_checkbutton_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
