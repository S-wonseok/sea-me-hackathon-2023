/****************************************************************************
** Meta object code from reading C++ file 'YoutubeAPI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "YoutubeAPI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'YoutubeAPI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_YoutubeAPI_t {
    QByteArrayData data[12];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_YoutubeAPI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_YoutubeAPI_t qt_meta_stringdata_YoutubeAPI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "YoutubeAPI"
QT_MOC_LITERAL(1, 11, 9), // "idUpdated"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 16), // "thumbnailUpdated"
QT_MOC_LITERAL(4, 39, 21), // "onYoutubeDataReceived"
QT_MOC_LITERAL(5, 61, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 76, 5), // "reply"
QT_MOC_LITERAL(7, 82, 14), // "requestYoutube"
QT_MOC_LITERAL(8, 97, 4), // "part"
QT_MOC_LITERAL(9, 102, 5), // "chart"
QT_MOC_LITERAL(10, 108, 2), // "id"
QT_MOC_LITERAL(11, 111, 9) // "thumbnail"

    },
    "YoutubeAPI\0idUpdated\0\0thumbnailUpdated\0"
    "onYoutubeDataReceived\0QNetworkReply*\0"
    "reply\0requestYoutube\0part\0chart\0id\0"
    "thumbnail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YoutubeAPI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    2,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void YoutubeAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        YoutubeAPI *_t = static_cast<YoutubeAPI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->idUpdated(); break;
        case 1: _t->thumbnailUpdated(); break;
        case 2: _t->onYoutubeDataReceived((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->requestYoutube((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (YoutubeAPI::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&YoutubeAPI::idUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (YoutubeAPI::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&YoutubeAPI::thumbnailUpdated)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        YoutubeAPI *_t = static_cast<YoutubeAPI *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->thumbnail(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject YoutubeAPI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_YoutubeAPI.data,
      qt_meta_data_YoutubeAPI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *YoutubeAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YoutubeAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_YoutubeAPI.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int YoutubeAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void YoutubeAPI::idUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void YoutubeAPI::thumbnailUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
