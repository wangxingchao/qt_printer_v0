/****************************************************************************
** Meta object code from reading C++ file 'initcfgwnd.h'
**
** Created: Sat Feb 23 16:39:12 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "initcfgwnd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'initcfgwnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InitCfgWnd[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x08,
      50,   43,   11,   11, 0x08,
      90,   43,   11,   11, 0x08,
     129,   43,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InitCfgWnd[] = {
    "InitCfgWnd\0\0byeArray\0UpdateUI(QByteArray&)\0"
    "button\0on_initbutton_clicked(QAbstractButton*)\0"
    "on_funbutton_clicked(QAbstractButton*)\0"
    "on_RS232button_clicked(QAbstractButton*)\0"
};

const QMetaObject InitCfgWnd::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_InitCfgWnd,
      qt_meta_data_InitCfgWnd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InitCfgWnd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InitCfgWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InitCfgWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InitCfgWnd))
        return static_cast<void*>(const_cast< InitCfgWnd*>(this));
    return MainWindow::qt_metacast(_clname);
}

int InitCfgWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: UpdateUI((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: on_initbutton_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: on_funbutton_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: on_RS232button_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
