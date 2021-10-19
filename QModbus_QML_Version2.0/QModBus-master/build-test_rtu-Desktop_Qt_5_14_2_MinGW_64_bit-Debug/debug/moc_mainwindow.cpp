/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../test_rtu/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "connect_btn_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "connect_to_dev"
QT_MOC_LITERAL(4, 47, 19), // "disconnect_from_dev"
QT_MOC_LITERAL(5, 67, 9), // "read_regs"
QT_MOC_LITERAL(6, 77, 9), // "write_reg"
QT_MOC_LITERAL(7, 87, 21), // "response_to_read_regs"
QT_MOC_LITERAL(8, 109, 6), // "status"
QT_MOC_LITERAL(9, 116, 21), // "response_to_write_reg"
QT_MOC_LITERAL(10, 138, 13), // "process_error"
QT_MOC_LITERAL(11, 152, 20), // "QModBus::ModBusError"
QT_MOC_LITERAL(12, 173, 5), // "error"
QT_MOC_LITERAL(13, 179, 13), // "change_status"
QT_MOC_LITERAL(14, 193, 19), // "on_LightBTN_clicked"
QT_MOC_LITERAL(15, 213, 20), // "on_LightBTN2_clicked"
QT_MOC_LITERAL(16, 234, 20), // "on_LightBTN3_clicked"
QT_MOC_LITERAL(17, 255, 20), // "on_LightBTN4_clicked"
QT_MOC_LITERAL(18, 276, 20), // "on_LightBTN5_clicked"
QT_MOC_LITERAL(19, 297, 20), // "on_LightBTN6_clicked"
QT_MOC_LITERAL(20, 318, 27), // "on_Temp_Change_valueChanged"
QT_MOC_LITERAL(21, 346, 5), // "value"
QT_MOC_LITERAL(22, 352, 8), // "sw_01_on"
QT_MOC_LITERAL(23, 361, 7), // "checked"
QT_MOC_LITERAL(24, 369, 8), // "sw_02_on"
QT_MOC_LITERAL(25, 378, 8) // "readTemp"

    },
    "MainWindow\0connect_btn_clicked\0\0"
    "connect_to_dev\0disconnect_from_dev\0"
    "read_regs\0write_reg\0response_to_read_regs\0"
    "status\0response_to_write_reg\0process_error\0"
    "QModBus::ModBusError\0error\0change_status\0"
    "on_LightBTN_clicked\0on_LightBTN2_clicked\0"
    "on_LightBTN3_clicked\0on_LightBTN4_clicked\0"
    "on_LightBTN5_clicked\0on_LightBTN6_clicked\0"
    "on_Temp_Change_valueChanged\0value\0"
    "sw_01_on\0checked\0sw_02_on\0readTemp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x0a /* Public */,
       3,    0,  110,    2, 0x0a /* Public */,
       4,    0,  111,    2, 0x0a /* Public */,
       5,    0,  112,    2, 0x0a /* Public */,
       6,    0,  113,    2, 0x0a /* Public */,
       7,    1,  114,    2, 0x0a /* Public */,
       9,    1,  117,    2, 0x0a /* Public */,
      10,    1,  120,    2, 0x0a /* Public */,
      13,    0,  123,    2, 0x0a /* Public */,
      14,    0,  124,    2, 0x08 /* Private */,
      15,    0,  125,    2, 0x08 /* Private */,
      16,    0,  126,    2, 0x08 /* Private */,
      17,    0,  127,    2, 0x08 /* Private */,
      18,    0,  128,    2, 0x08 /* Private */,
      19,    0,  129,    2, 0x08 /* Private */,
      20,    1,  130,    2, 0x08 /* Private */,
      22,    1,  133,    2, 0x08 /* Private */,
      24,    1,  136,    2, 0x08 /* Private */,
      25,    0,  139,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connect_btn_clicked(); break;
        case 1: _t->connect_to_dev(); break;
        case 2: _t->disconnect_from_dev(); break;
        case 3: _t->read_regs(); break;
        case 4: _t->write_reg(); break;
        case 5: _t->response_to_read_regs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->response_to_write_reg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->process_error((*reinterpret_cast< QModBus::ModBusError(*)>(_a[1]))); break;
        case 8: _t->change_status(); break;
        case 9: _t->on_LightBTN_clicked(); break;
        case 10: _t->on_LightBTN2_clicked(); break;
        case 11: _t->on_LightBTN3_clicked(); break;
        case 12: _t->on_LightBTN4_clicked(); break;
        case 13: _t->on_LightBTN5_clicked(); break;
        case 14: _t->on_LightBTN6_clicked(); break;
        case 15: _t->on_Temp_Change_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->sw_01_on((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->sw_02_on((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->readTemp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModBus::ModBusError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
