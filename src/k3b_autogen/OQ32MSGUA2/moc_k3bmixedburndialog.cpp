/****************************************************************************
** Meta object code from reading C++ file 'k3bmixedburndialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bmixedburndialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bmixedburndialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__MixedBurnDialog_t {
    QByteArrayData data[8];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__MixedBurnDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__MixedBurnDialog_t qt_meta_stringdata_K3b__MixedBurnDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "K3b::MixedBurnDialog"
QT_MOC_LITERAL(1, 21, 16), // "slotStartClicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "saveSettingsToProject"
QT_MOC_LITERAL(4, 61, 23), // "readSettingsFromProject"
QT_MOC_LITERAL(5, 85, 21), // "slotCacheImageToggled"
QT_MOC_LITERAL(6, 107, 2), // "on"
QT_MOC_LITERAL(7, 110, 20) // "slotNormalizeToggled"

    },
    "K3b::MixedBurnDialog\0slotStartClicked\0"
    "\0saveSettingsToProject\0readSettingsFromProject\0"
    "slotCacheImageToggled\0on\0slotNormalizeToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__MixedBurnDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    1,   42,    2, 0x09 /* Protected */,
       7,    1,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void K3b::MixedBurnDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MixedBurnDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotStartClicked(); break;
        case 1: _t->saveSettingsToProject(); break;
        case 2: _t->readSettingsFromProject(); break;
        case 3: _t->slotCacheImageToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slotNormalizeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::MixedBurnDialog::staticMetaObject = { {
    &ProjectBurnDialog::staticMetaObject,
    qt_meta_stringdata_K3b__MixedBurnDialog.data,
    qt_meta_data_K3b__MixedBurnDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::MixedBurnDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::MixedBurnDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__MixedBurnDialog.stringdata0))
        return static_cast<void*>(this);
    return ProjectBurnDialog::qt_metacast(_clname);
}

int K3b::MixedBurnDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProjectBurnDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
