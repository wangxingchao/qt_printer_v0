/****************************************************************************
** Meta object code from reading C++ file 'printwnd.h'
**
** Created: Sun Jan 27 15:40:25 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "printwnd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printwnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrintWnd[] = {

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
      19,   10,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PrintWnd[] = {
    "PrintWnd\0\0byeArray\0UpdateUI(QByteArray&)\0"
};

const QMetaObject PrintWnd::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_PrintWnd,
      qt_meta_data_PrintWnd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrintWnd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrintWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrintWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrintWnd))
        return static_cast<void*>(const_cast< PrintWnd*>(this));
    return MainWindow::qt_metacast(_clname);
}

int PrintWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
