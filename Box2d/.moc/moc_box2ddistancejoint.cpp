/****************************************************************************
** Meta object code from reading C++ file 'box2ddistancejoint.h'
**
** Created: Wed Jan 23 11:48:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../box2ddistancejoint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2ddistancejoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Box2DDistanceJoint[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      36,   19,   19,   19, 0x05,
      57,   19,   19,   19, 0x05,
      79,   19,   19,   19, 0x05,
     101,   19,   19,   19, 0x05,

 // properties: name, type, flags
     129,  123, 0x87495103,
     136,  123, 0x87495103,
     148,  123, 0x87495103,
     169,  161, 0x1a495103,
     182,  161, 0x1a495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

static const char qt_meta_stringdata_Box2DDistanceJoint[] = {
    "Box2DDistanceJoint\0\0lengthChanged()\0"
    "frequencyHzChanged()\0dampingRatioChanged()\0"
    "localAnchorAChanged()\0localAnchorBChanged()\0"
    "float\0length\0frequencyHz\0dampingRatio\0"
    "QPointF\0localAnchorA\0localAnchorB\0"
};

void Box2DDistanceJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Box2DDistanceJoint *_t = static_cast<Box2DDistanceJoint *>(_o);
        switch (_id) {
        case 0: _t->lengthChanged(); break;
        case 1: _t->frequencyHzChanged(); break;
        case 2: _t->dampingRatioChanged(); break;
        case 3: _t->localAnchorAChanged(); break;
        case 4: _t->localAnchorBChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Box2DDistanceJoint::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Box2DDistanceJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DDistanceJoint,
      qt_meta_data_Box2DDistanceJoint, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Box2DDistanceJoint::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Box2DDistanceJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Box2DDistanceJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DDistanceJoint))
        return static_cast<void*>(const_cast< Box2DDistanceJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DDistanceJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Box2DJoint::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< float*>(_v) = length(); break;
        case 1: *reinterpret_cast< float*>(_v) = frequencyHz(); break;
        case 2: *reinterpret_cast< float*>(_v) = dampingRatio(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = localAnchorA(); break;
        case 4: *reinterpret_cast< QPointF*>(_v) = localAnchorB(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLength(*reinterpret_cast< float*>(_v)); break;
        case 1: setFrequencyHz(*reinterpret_cast< float*>(_v)); break;
        case 2: setDampingRatio(*reinterpret_cast< float*>(_v)); break;
        case 3: setLocalAnchorA(*reinterpret_cast< QPointF*>(_v)); break;
        case 4: setLocalAnchorB(*reinterpret_cast< QPointF*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Box2DDistanceJoint::lengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Box2DDistanceJoint::frequencyHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Box2DDistanceJoint::dampingRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Box2DDistanceJoint::localAnchorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Box2DDistanceJoint::localAnchorBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
