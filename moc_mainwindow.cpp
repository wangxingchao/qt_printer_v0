/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun Mar 24 16:20:19 2013
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
      22,   14, // methods
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
     130,   11,   11,   11, 0x08,
     149,   11,   11,   11, 0x08,
     169,   11,   11,   11, 0x08,
     183,   11,   11,   11, 0x08,
     197,   11,   11,   11, 0x08,
     211,   11,   11,   11, 0x08,
     221,   11,   11,   11, 0x08,
     234,   11,   11,   11, 0x08,
     243,   11,   11,   11, 0x08,
     257,   11,   11,   11, 0x08,
     267,   11,   11,   11, 0x08,
     278,   11,   11,   11, 0x08,
     292,   11,   11,   11, 0x08,
     307,   11,   11,   11, 0x08,
     318,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0data,len\0"
    "WriteDatagram(const char*,qint32)\0"
    "ShowRunStatus()\0initConfig()\0print()\0"
    "runlog()\0TurnOnBoard()\0TurnOffBoard()\0"
    "TurnquickOnBoard()\0TurnquickOffBoard()\0"
    "lightStatus()\0otherStatus()\0penYinParam()\0"
    "newifno()\0SysGeneral()\0UseMan()\0"
    "maintainMan()\0mainWnd()\0jetSatus()\0"
    "shieldCheck()\0openSytleSet()\0magnetic()\0"
    "counter()\0"
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
        case 5: TurnOnBoard(); break;
        case 6: TurnOffBoard(); break;
        case 7: TurnquickOnBoard(); break;
        case 8: TurnquickOffBoard(); break;
        case 9: lightStatus(); break;
        case 10: otherStatus(); break;
        case 11: penYinParam(); break;
        case 12: newifno(); break;
        case 13: SysGeneral(); break;
        case 14: UseMan(); break;
        case 15: maintainMan(); break;
        case 16: mainWnd(); break;
        case 17: jetSatus(); break;
        case 18: shieldCheck(); break;
        case 19: openSytleSet(); break;
        case 20: magnetic(); break;
        case 21: counter(); break;
        default: ;
        }
        _id -= 22;
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
