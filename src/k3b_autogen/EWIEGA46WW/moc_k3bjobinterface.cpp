/****************************************************************************
** Meta object code from reading C++ file 'k3bjobinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bjobinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bjobinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__JobInterface_t {
    QByteArrayData data[22];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__JobInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__JobInterface_t qt_meta_stringdata_K3b__JobInterface = {
    {
QT_MOC_LITERAL(0, 0, 17), // "K3b::JobInterface"
QT_MOC_LITERAL(1, 18, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 34, 11), // "org.k3b.Job"
QT_MOC_LITERAL(3, 46, 7), // "started"
QT_MOC_LITERAL(4, 54, 0), // ""
QT_MOC_LITERAL(5, 55, 8), // "canceled"
QT_MOC_LITERAL(6, 64, 8), // "finished"
QT_MOC_LITERAL(7, 73, 11), // "infoMessage"
QT_MOC_LITERAL(8, 85, 8), // "progress"
QT_MOC_LITERAL(9, 94, 11), // "subProgress"
QT_MOC_LITERAL(10, 106, 7), // "newTask"
QT_MOC_LITERAL(11, 114, 10), // "newSubTask"
QT_MOC_LITERAL(12, 125, 6), // "buffer"
QT_MOC_LITERAL(13, 132, 12), // "deviceBuffer"
QT_MOC_LITERAL(14, 145, 9), // "nextTrack"
QT_MOC_LITERAL(15, 155, 5), // "track"
QT_MOC_LITERAL(16, 161, 9), // "numTracks"
QT_MOC_LITERAL(17, 171, 10), // "jobRunning"
QT_MOC_LITERAL(18, 182, 14), // "jobDescription"
QT_MOC_LITERAL(19, 197, 10), // "jobDetails"
QT_MOC_LITERAL(20, 208, 12), // "slotProgress"
QT_MOC_LITERAL(21, 221, 15) // "slotSubProgress"

    },
    "K3b::JobInterface\0D-Bus Interface\0"
    "org.k3b.Job\0started\0\0canceled\0finished\0"
    "infoMessage\0progress\0subProgress\0"
    "newTask\0newSubTask\0buffer\0deviceBuffer\0"
    "nextTrack\0track\0numTracks\0jobRunning\0"
    "jobDescription\0jobDetails\0slotProgress\0"
    "slotSubProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__JobInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      16,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   96,    4, 0x06 /* Public */,
       5,    0,   97,    4, 0x06 /* Public */,
       6,    1,   98,    4, 0x06 /* Public */,
       7,    2,  101,    4, 0x06 /* Public */,
       8,    1,  106,    4, 0x06 /* Public */,
       9,    1,  109,    4, 0x06 /* Public */,
      10,    1,  112,    4, 0x06 /* Public */,
      11,    1,  115,    4, 0x06 /* Public */,
      12,    1,  118,    4, 0x06 /* Public */,
      13,    1,  121,    4, 0x06 /* Public */,
      14,    2,  124,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  129,    4, 0x0a /* Public */,
      18,    0,  130,    4, 0x0a /* Public */,
      19,    0,  131,    4, 0x0a /* Public */,
      20,    1,  132,    4, 0x08 /* Private */,
      21,    1,  135,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void K3b::JobInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JobInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->canceled(); break;
        case 2: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->subProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->newTask((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->newSubTask((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->buffer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->deviceBuffer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->nextTrack((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: { bool _r = _t->jobRunning();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->jobDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->jobDetails();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->slotProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->slotSubProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JobInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobInterface::started)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JobInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobInterface::canceled)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JobInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobInterface::finished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JobInterface::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobInterface::infoMessage)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (JobInterface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobInterface::progress)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (JobInterface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobInterface::subProgress)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (JobInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobInterface::newTask)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (JobInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobInterface::newSubTask)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (JobInterface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobInterface::buffer)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (JobInterface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobInterface::deviceBuffer)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (JobInterface::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobInterface::nextTrack)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::JobInterface::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_K3b__JobInterface.data,
    qt_meta_data_K3b__JobInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::JobInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::JobInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__JobInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int K3b::JobInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void K3b::JobInterface::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void K3b::JobInterface::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void K3b::JobInterface::finished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void K3b::JobInterface::infoMessage(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void K3b::JobInterface::progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void K3b::JobInterface::subProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void K3b::JobInterface::newTask(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void K3b::JobInterface::newSubTask(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void K3b::JobInterface::buffer(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void K3b::JobInterface::deviceBuffer(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void K3b::JobInterface::nextTrack(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
