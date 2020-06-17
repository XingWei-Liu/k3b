/****************************************************************************
** Meta object code from reading C++ file 'k3bprojectburndialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projects/k3bprojectburndialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bprojectburndialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__ProjectBurnDialog_t {
    QByteArrayData data[11];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__ProjectBurnDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__ProjectBurnDialog_t qt_meta_stringdata_K3b__ProjectBurnDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "K3b::ProjectBurnDialog"
QT_MOC_LITERAL(1, 23, 13), // "writerChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "slotStartClicked"
QT_MOC_LITERAL(4, 55, 15), // "slotSaveClicked"
QT_MOC_LITERAL(5, 71, 17), // "slotCancelClicked"
QT_MOC_LITERAL(6, 89, 17), // "slotWriterChanged"
QT_MOC_LITERAL(7, 107, 21), // "slotWritingAppChanged"
QT_MOC_LITERAL(8, 129, 15), // "K3b::WritingApp"
QT_MOC_LITERAL(9, 145, 16), // "slotShowImageTip"
QT_MOC_LITERAL(10, 162, 15) // "buttonActivated"

    },
    "K3b::ProjectBurnDialog\0writerChanged\0"
    "\0slotStartClicked\0slotSaveClicked\0"
    "slotCancelClicked\0slotWriterChanged\0"
    "slotWritingAppChanged\0K3b::WritingApp\0"
    "slotShowImageTip\0buttonActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__ProjectBurnDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    1,   54,    2, 0x09 /* Protected */,
       9,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void K3b::ProjectBurnDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectBurnDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writerChanged(); break;
        case 1: _t->slotStartClicked(); break;
        case 2: _t->slotSaveClicked(); break;
        case 3: _t->slotCancelClicked(); break;
        case 4: _t->slotWriterChanged(); break;
        case 5: _t->slotWritingAppChanged((*reinterpret_cast< K3b::WritingApp(*)>(_a[1]))); break;
        case 6: _t->slotShowImageTip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProjectBurnDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectBurnDialog::writerChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::ProjectBurnDialog::staticMetaObject = { {
    &InteractionDialog::staticMetaObject,
    qt_meta_stringdata_K3b__ProjectBurnDialog.data,
    qt_meta_data_K3b__ProjectBurnDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::ProjectBurnDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::ProjectBurnDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__ProjectBurnDialog.stringdata0))
        return static_cast<void*>(this);
    return InteractionDialog::qt_metacast(_clname);
}

int K3b::ProjectBurnDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InteractionDialog::qt_metacall(_c, _id, _a);
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
void K3b::ProjectBurnDialog::writerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
