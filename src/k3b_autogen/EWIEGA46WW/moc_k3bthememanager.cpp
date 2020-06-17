/****************************************************************************
** Meta object code from reading C++ file 'k3bthememanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bthememanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bthememanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__ThemeManager_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__ThemeManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__ThemeManager_t qt_meta_stringdata_K3b__ThemeManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "K3b::ThemeManager"
QT_MOC_LITERAL(1, 18, 12), // "themeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "Theme*"
QT_MOC_LITERAL(4, 39, 10), // "readConfig"
QT_MOC_LITERAL(5, 50, 12), // "KConfigGroup"
QT_MOC_LITERAL(6, 63, 10), // "saveConfig"
QT_MOC_LITERAL(7, 74, 15), // "setCurrentTheme"
QT_MOC_LITERAL(8, 90, 10) // "loadThemes"

    },
    "K3b::ThemeManager\0themeChanged\0\0Theme*\0"
    "readConfig\0KConfigGroup\0saveConfig\0"
    "setCurrentTheme\0loadThemes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__ThemeManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       1,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   53,    2, 0x0a /* Public */,
       6,    1,   56,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
       7,    1,   62,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

       0        // eod
};

void K3b::ThemeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThemeManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->themeChanged(); break;
        case 1: _t->themeChanged((*reinterpret_cast< Theme*(*)>(_a[1]))); break;
        case 2: _t->readConfig((*reinterpret_cast< const KConfigGroup(*)>(_a[1]))); break;
        case 3: _t->saveConfig((*reinterpret_cast< KConfigGroup(*)>(_a[1]))); break;
        case 4: _t->setCurrentTheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setCurrentTheme((*reinterpret_cast< Theme*(*)>(_a[1]))); break;
        case 6: _t->loadThemes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThemeManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThemeManager::themeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThemeManager::*)(Theme * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThemeManager::themeChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::ThemeManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_K3b__ThemeManager.data,
    qt_meta_data_K3b__ThemeManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::ThemeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::ThemeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__ThemeManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int K3b::ThemeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void K3b::ThemeManager::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void K3b::ThemeManager::themeChanged(Theme * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
