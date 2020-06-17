/****************************************************************************
** Meta object code from reading C++ file 'k3bvideodvdtitlemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rip/videodvd/k3bvideodvdtitlemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bvideodvdtitlemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__VideoDVDTitleModel_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__VideoDVDTitleModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__VideoDVDTitleModel_t qt_meta_stringdata_K3b__VideoDVDTitleModel = {
    {
QT_MOC_LITERAL(0, 0, 23), // "K3b::VideoDVDTitleModel"
QT_MOC_LITERAL(1, 24, 8), // "checkAll"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "uncheckAll"
QT_MOC_LITERAL(4, 45, 14), // "stopPreviewGen"
QT_MOC_LITERAL(5, 60, 15), // "slotPreviewDone"
QT_MOC_LITERAL(6, 76, 7) // "success"

    },
    "K3b::VideoDVDTitleModel\0checkAll\0\0"
    "uncheckAll\0stopPreviewGen\0slotPreviewDone\0"
    "success"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__VideoDVDTitleModel[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void K3b::VideoDVDTitleModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoDVDTitleModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkAll(); break;
        case 1: _t->uncheckAll(); break;
        case 2: _t->stopPreviewGen(); break;
        case 3: _t->slotPreviewDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::VideoDVDTitleModel::staticMetaObject = { {
    &QAbstractTableModel::staticMetaObject,
    qt_meta_stringdata_K3b__VideoDVDTitleModel.data,
    qt_meta_data_K3b__VideoDVDTitleModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::VideoDVDTitleModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::VideoDVDTitleModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__VideoDVDTitleModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int K3b::VideoDVDTitleModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
