/****************************************************************************
** Meta object code from reading C++ file 'mainwnd.h'
**
** Created: Sun Mar 24 17:46:32 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwnd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWnd[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,    9,    8,    8, 0x05,
      53,    9,    8,    8, 0x05,
      84,    9,    8,    8, 0x05,
     116,    9,    8,    8, 0x05,
     146,    9,    8,    8, 0x05,
     172,    9,    8,    8, 0x05,
     206,    9,    8,    8, 0x05,
     240,    9,    8,    8, 0x05,
     270,    9,    8,    8, 0x05,
     301,    9,    8,    8, 0x05,
     335,    9,    8,    8, 0x05,
     369,    9,    8,    8, 0x05,
     397,    9,    8,    8, 0x05,
     426,    9,    8,    8, 0x05,
     455,    9,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     484,    8,    8,    8, 0x08,
     516,  507,    8,    8, 0x08,
     550,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWnd[] = {
    "MainWnd\0\0byteArray\0UpdateUI_dayMainTain(QByteArray&)\0"
    "UpdateUI_editInfo(QByteArray&)\0"
    "UpdateUI_fontParam(QByteArray&)\0"
    "UpdateUI_initCfg(QByteArray&)\0"
    "UpdateUI_ink(QByteArray&)\0"
    "UpdateUI_lightStatus(QByteArray&)\0"
    "UpdateUI_maintainMan(QByteArray&)\0"
    "UpdateUI_newInfo(QByteArray&)\0"
    "UpdateUI_onoffPmj(QByteArray&)\0"
    "UpdateUI_otherStatus(QByteArray&)\0"
    "UpdateUI_penyinParam(QByteArray&)\0"
    "UpdateUI_print(QByteArray&)\0"
    "UpdateUI_runLog(QByteArray&)\0"
    "UpdateUI_sysGen(QByteArray&)\0"
    "UpdateUI_usrMan(QByteArray&)\0"
    "readPendingDatagrams()\0data,len\0"
    "WriteDatagram(const char*,qint32)\0"
    "TimerOut()\0"
};

const QMetaObject MainWnd::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_MainWnd,
      qt_meta_data_MainWnd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWnd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWnd))
        return static_cast<void*>(const_cast< MainWnd*>(this));
    return MainWindow::qt_metacast(_clname);
}

int MainWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: UpdateUI_dayMainTain((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: UpdateUI_editInfo((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: UpdateUI_fontParam((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: UpdateUI_initCfg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: UpdateUI_ink((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: UpdateUI_lightStatus((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: UpdateUI_maintainMan((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: UpdateUI_newInfo((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 8: UpdateUI_onoffPmj((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 9: UpdateUI_otherStatus((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 10: UpdateUI_penyinParam((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 11: UpdateUI_print((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 12: UpdateUI_runLog((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 13: UpdateUI_sysGen((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 14: UpdateUI_usrMan((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 15: readPendingDatagrams(); break;
        case 16: WriteDatagram((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 17: TimerOut(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MainWnd::UpdateUI_dayMainTain(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWnd::UpdateUI_editInfo(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWnd::UpdateUI_fontParam(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWnd::UpdateUI_initCfg(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWnd::UpdateUI_ink(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWnd::UpdateUI_lightStatus(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWnd::UpdateUI_maintainMan(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWnd::UpdateUI_newInfo(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWnd::UpdateUI_onoffPmj(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWnd::UpdateUI_otherStatus(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWnd::UpdateUI_penyinParam(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWnd::UpdateUI_print(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWnd::UpdateUI_runLog(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWnd::UpdateUI_sysGen(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWnd::UpdateUI_usrMan(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
