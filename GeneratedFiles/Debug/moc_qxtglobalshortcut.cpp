/****************************************************************************
** Meta object code from reading C++ file 'qxtglobalshortcut.h'
**
** Created: Sun Jan 12 21:43:21 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "StdAfx.h"
#include "../../thirdParty/qxtglobalshortcut/qxtglobalshortcut.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxtglobalshortcut.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QxtGlobalShortcut[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   31,   18,   18, 0x0a,
      56,   18,   18,   18, 0x2a,
      78,   69,   18,   18, 0x0a,
      96,   18,   18,   18, 0x2a,

 // properties: name, type, flags
      31,  110, 0x01095103,
     128,  115, 0x4c095103,

       0        // eod
};

static const char qt_meta_stringdata_QxtGlobalShortcut[] = {
    "QxtGlobalShortcut\0\0activated()\0enabled\0"
    "setEnabled(bool)\0setEnabled()\0disabled\0"
    "setDisabled(bool)\0setDisabled()\0bool\0"
    "QKeySequence\0shortcut\0"
};

void QxtGlobalShortcut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QxtGlobalShortcut *_t = static_cast<QxtGlobalShortcut *>(_o);
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setEnabled(); break;
        case 3: _t->setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setDisabled(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QxtGlobalShortcut::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QxtGlobalShortcut::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QxtGlobalShortcut,
      qt_meta_data_QxtGlobalShortcut, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QxtGlobalShortcut::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QxtGlobalShortcut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QxtGlobalShortcut::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QxtGlobalShortcut))
        return static_cast<void*>(const_cast< QxtGlobalShortcut*>(this));
    return QObject::qt_metacast(_clname);
}

int QxtGlobalShortcut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        case 1: *reinterpret_cast< QKeySequence*>(_v) = shortcut(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: setShortcut(*reinterpret_cast< QKeySequence*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
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
void QxtGlobalShortcut::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
