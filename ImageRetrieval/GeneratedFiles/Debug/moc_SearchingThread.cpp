/****************************************************************************
** Meta object code from reading C++ file 'SearchingThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SearchingThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchingThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SearchingThread_t {
    QByteArrayData data[7];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchingThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchingThread_t qt_meta_stringdata_SearchingThread = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SearchingThread"
QT_MOC_LITERAL(1, 16, 10), // "doneSearch"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "vector<int>"
QT_MOC_LITERAL(4, 40, 9), // "similiars"
QT_MOC_LITERAL(5, 50, 14), // "vector<string>"
QT_MOC_LITERAL(6, 65, 5) // "infos"

    },
    "SearchingThread\0doneSearch\0\0vector<int>\0"
    "similiars\0vector<string>\0infos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchingThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void SearchingThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchingThread *_t = static_cast<SearchingThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doneSearch((*reinterpret_cast< vector<int>(*)>(_a[1])),(*reinterpret_cast< vector<string>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchingThread::*_t)(vector<int> , vector<string> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchingThread::doneSearch)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SearchingThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SearchingThread.data,
      qt_meta_data_SearchingThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SearchingThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchingThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SearchingThread.stringdata0))
        return static_cast<void*>(const_cast< SearchingThread*>(this));
    return QThread::qt_metacast(_clname);
}

int SearchingThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SearchingThread::doneSearch(vector<int> _t1, vector<string> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
