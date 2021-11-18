/****************************************************************************
** Meta object code from reading C++ file 'main_hid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HID_con/main_hid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_hid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_main_hid_t {
    QByteArrayData data[19];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_main_hid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_main_hid_t qt_meta_stringdata_main_hid = {
    {
QT_MOC_LITERAL(0, 0, 8), // "main_hid"
QT_MOC_LITERAL(1, 9, 9), // "showEvent"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "QShowEvent*"
QT_MOC_LITERAL(4, 32, 5), // "event"
QT_MOC_LITERAL(5, 38, 10), // "closeEvent"
QT_MOC_LITERAL(6, 49, 12), // "QCloseEvent*"
QT_MOC_LITERAL(7, 62, 13), // "timer_timeout"
QT_MOC_LITERAL(8, 76, 9), // "connected"
QT_MOC_LITERAL(9, 86, 12), // "disconnected"
QT_MOC_LITERAL(10, 99, 12), // "bytesWritten"
QT_MOC_LITERAL(11, 112, 5), // "bytes"
QT_MOC_LITERAL(12, 118, 9), // "readyRead"
QT_MOC_LITERAL(13, 128, 11), // "changeEvent"
QT_MOC_LITERAL(14, 140, 7), // "QEvent*"
QT_MOC_LITERAL(15, 148, 1), // "e"
QT_MOC_LITERAL(16, 150, 9), // "Show_hide"
QT_MOC_LITERAL(17, 160, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(18, 194, 6) // "reason"

    },
    "main_hid\0showEvent\0\0QShowEvent*\0event\0"
    "closeEvent\0QCloseEvent*\0timer_timeout\0"
    "connected\0disconnected\0bytesWritten\0"
    "bytes\0readyRead\0changeEvent\0QEvent*\0"
    "e\0Show_hide\0QSystemTrayIcon::ActivationReason\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_main_hid[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,
      16,    1,   80,    2, 0x08 /* Private */,
      16,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

       0        // eod
};

void main_hid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        main_hid *_t = static_cast<main_hid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 1: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 2: _t->timer_timeout(); break;
        case 3: _t->connected(); break;
        case 4: _t->disconnected(); break;
        case 5: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->readyRead(); break;
        case 7: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 8: _t->Show_hide((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 9: _t->Show_hide(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject main_hid::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_main_hid.data,
      qt_meta_data_main_hid,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *main_hid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *main_hid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_main_hid.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int main_hid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
