/****************************************************************************
** Meta object code from reading C++ file 'opensytleSet.h'
**
** Created: Sat Feb 23 16:39:15 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "opensytleSet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opensytleSet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_openSytleSet[] = {

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
      21,   14,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_openSytleSet[] = {
    "openSytleSet\0\0button\0"
    "on_openbutton_clicked(QAbstractButton*)\0"
};

const QMetaObject openSytleSet::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_openSytleSet,
      qt_meta_data_openSytleSet, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &openSytleSet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *openSytleSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *openSytleSet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_openSytleSet))
        return static_cast<void*>(const_cast< openSytleSet*>(this));
    return MainWindow::qt_metacast(_clname);
}

int openSytleSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_openbutton_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
