/****************************************************************************
** Meta object code from reading C++ file 'inspectionsystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inspectionsystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inspectionsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_inspectionSystem_t {
    QByteArrayData data[13];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_inspectionSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_inspectionSystem_t qt_meta_stringdata_inspectionSystem = {
    {
QT_MOC_LITERAL(0, 0, 16), // "inspectionSystem"
QT_MOC_LITERAL(1, 17, 8), // "loadFile"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "fileUrl"
QT_MOC_LITERAL(4, 35, 10), // "loadFolder"
QT_MOC_LITERAL(5, 46, 9), // "folderUrl"
QT_MOC_LITERAL(6, 56, 22), // "recognizeCurrentFolder"
QT_MOC_LITERAL(7, 79, 20), // "recognizeCurrentFile"
QT_MOC_LITERAL(8, 100, 11), // "getPathFile"
QT_MOC_LITERAL(9, 112, 5), // "index"
QT_MOC_LITERAL(10, 118, 24), // "getCurrentStatusDocument"
QT_MOC_LITERAL(11, 143, 12), // "QVector<int>"
QT_MOC_LITERAL(12, 156, 15) // "statusDocuments"

    },
    "inspectionSystem\0loadFile\0\0fileUrl\0"
    "loadFolder\0folderUrl\0recognizeCurrentFolder\0"
    "recognizeCurrentFile\0getPathFile\0index\0"
    "getCurrentStatusDocument\0QVector<int>\0"
    "statusDocuments"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_inspectionSystem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
      10,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,    9,
    0x80000000 | 11,

 // properties: name, type, flags
      12, 0x80000000 | 11, 0x00095409,

       0        // eod
};

void inspectionSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<inspectionSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadFile((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->loadFolder((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->recognizeCurrentFolder(); break;
        case 3: _t->recognizeCurrentFile(); break;
        case 4: { QString _r = _t->getPathFile((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVector<int> _r = _t->getCurrentStatusDocument();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<inspectionSystem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector<int>*>(_v) = _t->getCurrentStatusDocument(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject inspectionSystem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_inspectionSystem.data,
    qt_meta_data_inspectionSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *inspectionSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *inspectionSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_inspectionSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int inspectionSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE