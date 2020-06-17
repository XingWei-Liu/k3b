/****************************************************************************
** Meta object code from reading C++ file 'k3bwidgetshoweffect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bwidgetshoweffect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bwidgetshoweffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__WidgetShowEffect_t {
    QByteArrayData data[8];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__WidgetShowEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__WidgetShowEffect_t qt_meta_stringdata_K3b__WidgetShowEffect = {
    {
QT_MOC_LITERAL(0, 0, 21), // "K3b::WidgetShowEffect"
QT_MOC_LITERAL(1, 22, 11), // "widgetShown"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "QWidget*"
QT_MOC_LITERAL(4, 44, 12), // "widgetHidden"
QT_MOC_LITERAL(5, 57, 4), // "show"
QT_MOC_LITERAL(6, 62, 10), // "effectOnly"
QT_MOC_LITERAL(7, 73, 4) // "hide"

    },
    "K3b::WidgetShowEffect\0widgetShown\0\0"
    "QWidget*\0widgetHidden\0show\0effectOnly\0"
    "hide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__WidgetShowEffect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   50,    2, 0x0a /* Public */,
       5,    0,   53,    2, 0x2a /* Public | MethodCloned */,
       7,    1,   54,    2, 0x0a /* Public */,
       7,    0,   57,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

       0        // eod
};

void K3b::WidgetShowEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetShowEffect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetShown((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->widgetHidden((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->show((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->show(); break;
        case 4: _t->hide((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->hide(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WidgetShowEffect::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetShowEffect::widgetShown)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WidgetShowEffect::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetShowEffect::widgetHidden)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::WidgetShowEffect::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_K3b__WidgetShowEffect.data,
    qt_meta_data_K3b__WidgetShowEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::WidgetShowEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::WidgetShowEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__WidgetShowEffect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int K3b::WidgetShowEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void K3b::WidgetShowEffect::widgetShown(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void K3b::WidgetShowEffect::widgetHidden(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
