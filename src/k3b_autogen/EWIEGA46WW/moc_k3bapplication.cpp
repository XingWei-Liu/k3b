/****************************************************************************
** Meta object code from reading C++ file 'k3bapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__Application_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__Application_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__Application_t qt_meta_stringdata_K3b__Application = {
    {
QT_MOC_LITERAL(0, 0, 16), // "K3b::Application"
QT_MOC_LITERAL(1, 17, 12), // "slotShutDown"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "checkSystemConfig"
QT_MOC_LITERAL(4, 49, 18) // "processCmdLineArgs"

    },
    "K3b::Application\0slotShutDown\0\0"
    "checkSystemConfig\0processCmdLineArgs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__Application[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x00 /* Private */,
       4,    0,   31,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::Application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Application *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotShutDown(); break;
        case 1: _t->checkSystemConfig(); break;
        case 2: _t->processCmdLineArgs(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject K3b::Application::staticMetaObject = { {
    &QApplication::staticMetaObject,
    qt_meta_stringdata_K3b__Application.data,
    qt_meta_data_K3b__Application,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::Application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::Application::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__Application.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int K3b::Application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_K3b__Application__Core_t {
    QByteArrayData data[9];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__Application__Core_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__Application__Core_t qt_meta_stringdata_K3b__Application__Core = {
    {
QT_MOC_LITERAL(0, 0, 22), // "K3b::Application::Core"
QT_MOC_LITERAL(1, 23, 17), // "busyInfoRequested"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 19), // "busyFinishRequested"
QT_MOC_LITERAL(4, 62, 4), // "init"
QT_MOC_LITERAL(5, 67, 12), // "readSettings"
QT_MOC_LITERAL(6, 80, 18), // "KSharedConfig::Ptr"
QT_MOC_LITERAL(7, 99, 1), // "c"
QT_MOC_LITERAL(8, 101, 12) // "saveSettings"

    },
    "K3b::Application::Core\0busyInfoRequested\0"
    "\0busyFinishRequested\0init\0readSettings\0"
    "KSharedConfig::Ptr\0c\0saveSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__Application__Core[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    0,   42,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   43,    2, 0x02 /* Public */,
       5,    1,   44,    2, 0x02 /* Public */,
       8,    1,   47,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void K3b::Application::Core::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Core *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->busyInfoRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->busyFinishRequested(); break;
        case 2: _t->init(); break;
        case 3: _t->readSettings((*reinterpret_cast< KSharedConfig::Ptr(*)>(_a[1]))); break;
        case 4: _t->saveSettings((*reinterpret_cast< KSharedConfig::Ptr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Core::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::busyInfoRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::busyFinishRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::Application::Core::staticMetaObject = { {
    &K3b::Core::staticMetaObject,
    qt_meta_stringdata_K3b__Application__Core.data,
    qt_meta_data_K3b__Application__Core,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::Application::Core::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::Application::Core::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__Application__Core.stringdata0))
        return static_cast<void*>(this);
    return K3b::Core::qt_metacast(_clname);
}

int K3b::Application::Core::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = K3b::Core::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void K3b::Application::Core::busyInfoRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void K3b::Application::Core::busyFinishRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
