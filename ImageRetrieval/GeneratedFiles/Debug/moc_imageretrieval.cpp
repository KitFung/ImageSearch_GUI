/****************************************************************************
** Meta object code from reading C++ file 'imageretrieval.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../imageretrieval.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageretrieval.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageRetrieval_t {
    QByteArrayData data[12];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageRetrieval_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageRetrieval_t qt_meta_stringdata_ImageRetrieval = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ImageRetrieval"
QT_MOC_LITERAL(1, 15, 11), // "startSearch"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "updateResult"
QT_MOC_LITERAL(4, 41, 12), // "QVector<int>"
QT_MOC_LITERAL(5, 54, 3), // "res"
QT_MOC_LITERAL(6, 58, 16), // "QVector<QString>"
QT_MOC_LITERAL(7, 75, 5), // "infos"
QT_MOC_LITERAL(8, 81, 14), // "startExtraFunc"
QT_MOC_LITERAL(9, 96, 13), // "doneExtraFunc"
QT_MOC_LITERAL(10, 110, 6), // "addLog"
QT_MOC_LITERAL(11, 117, 3) // "str"

    },
    "ImageRetrieval\0startSearch\0\0updateResult\0"
    "QVector<int>\0res\0QVector<QString>\0"
    "infos\0startExtraFunc\0doneExtraFunc\0"
    "addLog\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageRetrieval[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    2,   40,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,
       9,    0,   46,    2, 0x08 /* Private */,
      10,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void ImageRetrieval::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageRetrieval *_t = static_cast<ImageRetrieval *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startSearch(); break;
        case 1: _t->updateResult((*reinterpret_cast< QVector<int>(*)>(_a[1])),(*reinterpret_cast< QVector<QString>(*)>(_a[2]))); break;
        case 2: _t->startExtraFunc(); break;
        case 3: _t->doneExtraFunc(); break;
        case 4: _t->addLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject ImageRetrieval::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ImageRetrieval.data,
      qt_meta_data_ImageRetrieval,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImageRetrieval::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageRetrieval::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImageRetrieval.stringdata0))
        return static_cast<void*>(const_cast< ImageRetrieval*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ImageRetrieval::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
