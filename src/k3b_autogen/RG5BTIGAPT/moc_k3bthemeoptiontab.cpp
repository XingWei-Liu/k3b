/****************************************************************************
** Meta object code from reading C++ file 'k3bthemeoptiontab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "option/k3bthemeoptiontab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bthemeoptiontab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__ThemeOptionTab_t {
    QByteArrayData data[6];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__ThemeOptionTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__ThemeOptionTab_t qt_meta_stringdata_K3b__ThemeOptionTab = {
    {
QT_MOC_LITERAL(0, 0, 19), // "K3b::ThemeOptionTab"
QT_MOC_LITERAL(1, 20, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "slotInstallTheme"
QT_MOC_LITERAL(4, 55, 15), // "slotRemoveTheme"
QT_MOC_LITERAL(5, 71, 16) // "slotGetNewThemes"

    },
    "K3b::ThemeOptionTab\0selectionChanged\0"
    "\0slotInstallTheme\0slotRemoveTheme\0"
    "slotGetNewThemes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__ThemeOptionTab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::ThemeOptionTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThemeOptionTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->slotInstallTheme(); break;
        case 2: _t->slotRemoveTheme(); break;
        case 3: _t->slotGetNewThemes(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject K3b::ThemeOptionTab::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_K3b__ThemeOptionTab.data,
    qt_meta_data_K3b__ThemeOptionTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::ThemeOptionTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::ThemeOptionTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__ThemeOptionTab.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::base_K3bThemeOptionTab"))
        return static_cast< Ui::base_K3bThemeOptionTab*>(this);
    return QWidget::qt_metacast(_clname);
}

int K3b::ThemeOptionTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
