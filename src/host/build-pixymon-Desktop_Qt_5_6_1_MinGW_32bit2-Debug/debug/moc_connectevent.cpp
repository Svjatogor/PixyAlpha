/****************************************************************************
** Meta object code from reading C++ file 'connectevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pixymon/connectevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ConnectEvent_t {
    QByteArrayData data[6];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectEvent_t qt_meta_stringdata_ConnectEvent = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ConnectEvent"
QT_MOC_LITERAL(1, 13, 9), // "connected"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "Device"
QT_MOC_LITERAL(4, 31, 6), // "device"
QT_MOC_LITERAL(5, 38, 5) // "state"

    },
    "ConnectEvent\0connected\0\0Device\0device\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,

       0        // eod
};

void ConnectEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectEvent *_t = static_cast<ConnectEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected((*reinterpret_cast< Device(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ConnectEvent::*_t)(Device , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectEvent::connected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ConnectEvent::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ConnectEvent.data,
      qt_meta_data_ConnectEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ConnectEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectEvent.stringdata0))
        return static_cast<void*>(const_cast< ConnectEvent*>(this));
    return QThread::qt_metacast(_clname);
}

int ConnectEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ConnectEvent::connected(Device _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE