/****************************************************************************
** Meta object code from reading C++ file 'box2djoint.h'
**
** Created: Wed Jan 23 11:48:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../box2djoint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2djoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Box2DJoint[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      38,   11,   11,   11, 0x05,
      53,   11,   11,   11, 0x05,
      68,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   11,   11,   11, 0x08,
      98,   11,   11,   11, 0x08,

 // properties: name, type, flags
     118,  113, 0x01495103,
     147,  135, 0x0049510b,
     164,  153, 0x0049510b,
     170,  153, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_Box2DJoint[] = {
    "Box2DJoint\0\0collideConnectedChanged()\0"
    "worldChanged()\0bodyAChanged()\0"
    "bodyBChanged()\0bodyACreated()\0"
    "bodyBCreated()\0bool\0collideConnected\0"
    "Box2DWorld*\0world\0Box2DBody*\0bodyA\0"
    "bodyB\0"
};

void Box2DJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Box2DJoint *_t = static_cast<Box2DJoint *>(_o);
        switch (_id) {
        case 0: _t->collideConnectedChanged(); break;
        case 1: _t->worldChanged(); break;
        case 2: _t->bodyAChanged(); break;
        case 3: _t->bodyBChanged(); break;
        case 4: _t->bodyACreated(); break;
        case 5: _t->bodyBCreated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Box2DJoint::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Box2DJoint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Box2DJoint,
      qt_meta_data_Box2DJoint, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Box2DJoint::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Box2DJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Box2DJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DJoint))
        return static_cast<void*>(const_cast< Box2DJoint*>(this));
    return QObject::qt_metacast(_clname);
}

int Box2DJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = collideConnected(); break;
        case 1: *reinterpret_cast< Box2DWorld**>(_v) = box2DWorld(); break;
        case 2: *reinterpret_cast< Box2DBody**>(_v) = bodyA(); break;
        case 3: *reinterpret_cast< Box2DBody**>(_v) = bodyB(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCollideConnected(*reinterpret_cast< bool*>(_v)); break;
        case 1: setWorld(*reinterpret_cast< Box2DWorld**>(_v)); break;
        case 2: setBodyA(*reinterpret_cast< Box2DBody**>(_v)); break;
        case 3: setBodyB(*reinterpret_cast< Box2DBody**>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Box2DJoint::collideConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Box2DJoint::worldChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Box2DJoint::bodyAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Box2DJoint::bodyBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
