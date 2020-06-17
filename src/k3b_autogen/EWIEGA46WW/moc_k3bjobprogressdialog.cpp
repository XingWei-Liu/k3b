/****************************************************************************
** Meta object code from reading C++ file 'k3bjobprogressdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "k3bjobprogressdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bjobprogressdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__JobProgressDialog_t {
    QByteArrayData data[20];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__JobProgressDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__JobProgressDialog_t qt_meta_stringdata_K3b__JobProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "K3b::JobProgressDialog"
QT_MOC_LITERAL(1, 23, 17), // "slotProcessedSize"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 9), // "processed"
QT_MOC_LITERAL(4, 52, 4), // "size"
QT_MOC_LITERAL(5, 57, 20), // "slotProcessedSubSize"
QT_MOC_LITERAL(6, 78, 15), // "slotInfoMessage"
QT_MOC_LITERAL(7, 94, 10), // "infoString"
QT_MOC_LITERAL(8, 105, 4), // "type"
QT_MOC_LITERAL(9, 110, 19), // "slotDebuggingOutput"
QT_MOC_LITERAL(10, 130, 14), // "slotNewSubTask"
QT_MOC_LITERAL(11, 145, 4), // "name"
QT_MOC_LITERAL(12, 150, 11), // "slotNewTask"
QT_MOC_LITERAL(13, 162, 12), // "slotFinished"
QT_MOC_LITERAL(14, 175, 12), // "slotCanceled"
QT_MOC_LITERAL(15, 188, 11), // "slotStarted"
QT_MOC_LITERAL(16, 200, 6), // "reject"
QT_MOC_LITERAL(17, 207, 23), // "slotShowDebuggingOutput"
QT_MOC_LITERAL(18, 231, 12), // "slotProgress"
QT_MOC_LITERAL(19, 244, 16) // "slotThemeChanged"

    },
    "K3b::JobProgressDialog\0slotProcessedSize\0"
    "\0processed\0size\0slotProcessedSubSize\0"
    "slotInfoMessage\0infoString\0type\0"
    "slotDebuggingOutput\0slotNewSubTask\0"
    "name\0slotNewTask\0slotFinished\0"
    "slotCanceled\0slotStarted\0reject\0"
    "slotShowDebuggingOutput\0slotProgress\0"
    "slotThemeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__JobProgressDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x09 /* Protected */,
       5,    2,   84,    2, 0x09 /* Protected */,
       6,    2,   89,    2, 0x09 /* Protected */,
       9,    2,   94,    2, 0x09 /* Protected */,
      10,    1,   99,    2, 0x09 /* Protected */,
      12,    1,  102,    2, 0x09 /* Protected */,
      13,    1,  105,    2, 0x09 /* Protected */,
      14,    0,  108,    2, 0x09 /* Protected */,
      15,    0,  109,    2, 0x09 /* Protected */,
      16,    0,  110,    2, 0x09 /* Protected */,
      17,    0,  111,    2, 0x09 /* Protected */,
      18,    1,  112,    2, 0x09 /* Protected */,
      19,    0,  115,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void K3b::JobProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JobProgressDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotProcessedSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->slotProcessedSubSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->slotInfoMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slotDebuggingOutput((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->slotNewSubTask((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotNewTask((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotCanceled(); break;
        case 8: _t->slotStarted(); break;
        case 9: _t->reject(); break;
        case 10: _t->slotShowDebuggingOutput(); break;
        case 11: _t->slotProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slotThemeChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::JobProgressDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_K3b__JobProgressDialog.data,
    qt_meta_data_K3b__JobProgressDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::JobProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::JobProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__JobProgressDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "JobHandler"))
        return static_cast< JobHandler*>(this);
    return QDialog::qt_metacast(_clname);
}

int K3b::JobProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
