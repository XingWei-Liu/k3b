/****************************************************************************
** Meta object code from reading C++ file 'k3bvideodvdrippingpreview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rip/videodvd/k3bvideodvdrippingpreview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'k3bvideodvdrippingpreview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_K3b__VideoDVDRippingPreview_t {
    QByteArrayData data[13];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_K3b__VideoDVDRippingPreview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_K3b__VideoDVDRippingPreview_t qt_meta_stringdata_K3b__VideoDVDRippingPreview = {
    {
QT_MOC_LITERAL(0, 0, 27), // "K3b::VideoDVDRippingPreview"
QT_MOC_LITERAL(1, 28, 11), // "previewDone"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "generatePreview"
QT_MOC_LITERAL(4, 57, 18), // "VideoDVD::VideoDVD"
QT_MOC_LITERAL(5, 76, 3), // "dvd"
QT_MOC_LITERAL(6, 80, 5), // "title"
QT_MOC_LITERAL(7, 86, 7), // "chapter"
QT_MOC_LITERAL(8, 94, 6), // "cancel"
QT_MOC_LITERAL(9, 101, 21), // "slotTranscodeFinished"
QT_MOC_LITERAL(10, 123, 8), // "exitCode"
QT_MOC_LITERAL(11, 132, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(12, 153, 6) // "status"

    },
    "K3b::VideoDVDRippingPreview\0previewDone\0"
    "\0generatePreview\0VideoDVD::VideoDVD\0"
    "dvd\0title\0chapter\0cancel\0slotTranscodeFinished\0"
    "exitCode\0QProcess::ExitStatus\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_K3b__VideoDVDRippingPreview[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   42,    2, 0x0a /* Public */,
       3,    2,   49,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   54,    2, 0x0a /* Public */,
       9,    2,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, QMetaType::Int,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,   10,   12,

       0        // eod
};

void K3b::VideoDVDRippingPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoDVDRippingPreview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->previewDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->generatePreview((*reinterpret_cast< const VideoDVD::VideoDVD(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->generatePreview((*reinterpret_cast< const VideoDVD::VideoDVD(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->cancel(); break;
        case 4: _t->slotTranscodeFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoDVDRippingPreview::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoDVDRippingPreview::previewDone)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject K3b::VideoDVDRippingPreview::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_K3b__VideoDVDRippingPreview.data,
    qt_meta_data_K3b__VideoDVDRippingPreview,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *K3b::VideoDVDRippingPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *K3b::VideoDVDRippingPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_K3b__VideoDVDRippingPreview.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int K3b::VideoDVDRippingPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void K3b::VideoDVDRippingPreview::previewDone(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
