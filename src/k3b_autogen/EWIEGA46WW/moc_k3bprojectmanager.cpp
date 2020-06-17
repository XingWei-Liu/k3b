/****************************************************************************
** Meta object code from reading C++ file 'k3bprojectmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bprojectmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bprojectmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__ProjectManager_t {
    QByteArrayData data[14];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__ProjectManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__ProjectManager_t qt_meta_stringdata_K3b__ProjectManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "K3b::ProjectManager"
QT_MOC_LITERAL(1, 20, 10), // "newProject"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "K3b::Doc*"
QT_MOC_LITERAL(4, 42, 12), // "projectSaved"
QT_MOC_LITERAL(5, 55, 14), // "closingProject"
QT_MOC_LITERAL(6, 70, 14), // "projectChanged"
QT_MOC_LITERAL(7, 85, 3), // "doc"
QT_MOC_LITERAL(8, 89, 20), // "activeProjectChanged"
QT_MOC_LITERAL(9, 110, 10), // "addProject"
QT_MOC_LITERAL(10, 121, 13), // "removeProject"
QT_MOC_LITERAL(11, 135, 9), // "setActive"
QT_MOC_LITERAL(12, 145, 12), // "loadDefaults"
QT_MOC_LITERAL(13, 158, 18) // "slotProjectChanged"

    },
    "K3b::ProjectManager\0newProject\0\0"
    "K3b::Doc*\0projectSaved\0closingProject\0"
    "projectChanged\0doc\0activeProjectChanged\0"
    "addProject\0removeProject\0setActive\0"
    "loadDefaults\0slotProjectChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__ProjectManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,
       8,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   79,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      12,    1,   88,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    7,

       0        // eod
};

void K3b::ProjectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newProject((*reinterpret_cast< K3b::Doc*(*)>(_a[1]))); break;
        case 1: _t->projectSaved((*reinterpret_cast< K3b::Doc*(*)>(_a[1]))); break;
        case 2: _t->closingProject((*reinterpret_cast< K3b::Doc*(*)>(_a[1]))); break;
        case 3: _t->projectChanged((*reinterpret_cast< K3b::Doc*(*)>(_a[1]))); break;
        case 4: _t->activeProjectChanged((*reinterpret_cast< K3b::Doc*(*)>(_a[1]))); break;
        case 5: _t->addProject((*reinterpret_cast< K3b::Doc*(*)>(_a[1]))); break;
        case 6: _t->removeProject((*reinterpret_cast< K3b::Doc*(*)>(_a[1]))); break;
        case 7: _t->setActive((*reinterpret_cast< K3b::Doc*(*)>(_a[1]))); break;
        case 8: _t->loadDefaults((*reinterpret_cast< K3b::Doc*(*)>(_a[1]))); break;
        case 9: _t->slotProjectChanged((*reinterpret_cast< K3b::Doc*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< K3b::Doc* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< K3b::Doc* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< K3b::Doc* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< K3b::Doc* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< K3b::Doc* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< K3b::Doc* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< K3b::Doc* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< K3b::Doc* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< K3b::Doc* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< K3b::Doc* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProjectManager::*)(K3b::Doc * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectManager::newProject)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProjectManager::*)(K3b::Doc * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectManager::projectSaved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProjectManager::*)(K3b::Doc * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectManager::closingProject)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ProjectManager::*)(K3b::Doc * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectManager::projectChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ProjectManager::*)(K3b::Doc * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectManager::activeProjectChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::ProjectManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_K3b__ProjectManager.data,
    qt_meta_data_K3b__ProjectManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::ProjectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::ProjectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__ProjectManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int K3b::ProjectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void K3b::ProjectManager::newProject(K3b::Doc * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void K3b::ProjectManager::projectSaved(K3b::Doc * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void K3b::ProjectManager::closingProject(K3b::Doc * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void K3b::ProjectManager::projectChanged(K3b::Doc * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void K3b::ProjectManager::activeProjectChanged(K3b::Doc * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
