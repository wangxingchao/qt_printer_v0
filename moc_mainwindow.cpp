/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun Jan 27 15:40:23 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   11,   11,   11, 0x08,
      71,   11,   11,   11, 0x08,
      84,   11,   11,   11, 0x08,
      92,   11,   11,   11, 0x08,
     101,   11,   11,   11, 0x08,
     115,   11,   11,   11, 0x08,
     129,   11,   11,   11, 0x08,
     143,   11,   11,   11, 0x08,
     153,   11,   11,   11, 0x08,
     166,   11,   11,   11, 0x08,
     175,   11,   11,   11, 0x08,
     189,   11,   11,   11, 0x08,
     199,   11,   11,   11, 0x08,
     210,   11,   11,   11, 0x08,
     224,   11,   11,   11, 0x08,
     239,   11,   11,   11, 0x08,
     250,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0data,len\0"
    "WriteDatagram(const char*,qint32)\0"
    "ShowRunStatus()\0initConfig()\0print()\0"
    "runlog()\0lightStatus()\0otherStatus()\0"
    "penYinParam()\0newifno()\0SysGeneral()\0"
    "UseMan()\0maintainMan()\0mainWnd()\0"
    "jetSatus()\0shieldCheck()\0openSytleSet()\0"
    "magnetic()\0counter()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: WriteDatagram((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 1: ShowRunStatus(); break;
        case 2: initConfig(); break;
        case 3: print(); break;
        case 4: runlog(); break;
        case 5: lightStatus(); break;
        case 6: otherStatus(); break;
        case 7: penYinParam(); break;
        case 8: newifno(); break;
        case 9: SysGeneral(); break;
        case 10: UseMan(); break;
        case 11: maintainMan(); break;
        case 12: mainWnd(); break;
        case 13: jetSatus(); break;
        case 14: shieldCheck(); break;
        case 15: openSytleSet(); break;
        case 16: magnetic(); break;
        case 17: counter(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::WriteDatagram(const char * _t1, qint32 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
