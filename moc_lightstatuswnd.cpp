/****************************************************************************
** Meta object code from reading C++ file 'lightstatuswnd.h'
**
** Created: Sun Mar 24 17:46:30 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lightstatuswnd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightstatuswnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LightStatusWnd[] = {

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
      26,   16,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LightStatusWnd[] = {
    "LightStatusWnd\0\0byeArrayy\0"
    "UpdateUI(QByteArray&)\0"
};

const QMetaObject LightStatusWnd::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_LightStatusWnd,
      qt_meta_data_LightStatusWnd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LightStatusWnd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LightStatusWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LightStatusWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LightStatusWnd))
        return static_cast<void*>(const_cast< LightStatusWnd*>(this));
    return MainWindow::qt_metacast(_clname);
}

int LightStatusWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: UpdateUI((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
