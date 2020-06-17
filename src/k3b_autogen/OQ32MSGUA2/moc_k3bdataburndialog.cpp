/****************************************************************************
** Meta object code from reading C++ file 'k3bdataburndialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bdataburndialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bdataburndialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__DataBurnDialog_t {
    QByteArrayData data[7];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__DataBurnDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__DataBurnDialog_t qt_meta_stringdata_K3b__DataBurnDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "K3b::DataBurnDialog"
QT_MOC_LITERAL(1, 20, 9), // "slotClose"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "slotStartClicked"
QT_MOC_LITERAL(4, 48, 21), // "saveSettingsToProject"
QT_MOC_LITERAL(5, 70, 23), // "readSettingsFromProject"
QT_MOC_LITERAL(6, 94, 27) // "slotMultiSessionModeChanged"

    },
    "K3b::DataBurnDialog\0slotClose\0\0"
    "slotStartClicked\0saveSettingsToProject\0"
    "readSettingsFromProject\0"
    "slotMultiSessionModeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__DataBurnDialog[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void K3b::DataBurnDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataBurnDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotClose(); break;
        case 1: _t->slotStartClicked(); break;
        case 2: _t->saveSettingsToProject(); break;
        case 3: _t->readSettingsFromProject(); break;
        case 4: _t->slotMultiSessionModeChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject K3b::DataBurnDialog::staticMetaObject = { {
    &ProjectBurnDialog::staticMetaObject,
    qt_meta_stringdata_K3b__DataBurnDialog.data,
    qt_meta_data_K3b__DataBurnDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::DataBurnDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::DataBurnDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__DataBurnDialog.stringdata0))
        return static_cast<void*>(this);
    return ProjectBurnDialog::qt_metacast(_clname);
}

int K3b::DataBurnDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
