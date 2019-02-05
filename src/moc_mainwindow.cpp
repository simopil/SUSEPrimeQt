/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../suseprimeqt/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x08,
      51,   11,   11,   11, 0x08,
      77,   11,   11,   11, 0x08,
     102,   11,   11,   11, 0x08,
     128,   11,   11,   11, 0x08,
     153,   11,   11,   11, 0x08,
     184,   11,   11,   11, 0x08,
     213,   11,   11,   11, 0x08,
     243,   11,   11,   11, 0x08,
     271,   11,   11,   11, 0x08,
     299,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0index\0on_tabWidget_currentChanged(int)\0"
    "on_switchNvidia_clicked()\0"
    "on_switchIntel_clicked()\0"
    "on_switchIntel2_clicked()\0"
    "on_unsetButton_clicked()\0"
    "on_apply_bootdefault_clicked()\0"
    "on_apply_forceboot_clicked()\0"
    "on_restore_nextboot_clicked()\0"
    "on_serviceDisable_clicked()\0"
    "on_serviceRestore_clicked()\0"
    "on_logcleaner_but_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_switchNvidia_clicked(); break;
        case 2: _t->on_switchIntel_clicked(); break;
        case 3: _t->on_switchIntel2_clicked(); break;
        case 4: _t->on_unsetButton_clicked(); break;
        case 5: _t->on_apply_bootdefault_clicked(); break;
        case 6: _t->on_apply_forceboot_clicked(); break;
        case 7: _t->on_restore_nextboot_clicked(); break;
        case 8: _t->on_serviceDisable_clicked(); break;
        case 9: _t->on_serviceRestore_clicked(); break;
        case 10: _t->on_logcleaner_but_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
