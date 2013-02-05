/****************************************************************************
** Meta object code from reading C++ file 'box2drevolutejoint.h'
**
** Created: Wed Jan 23 11:48:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../box2drevolutejoint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2drevolutejoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Box2DRevoluteJoint[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      40,   19,   19,   19, 0x05,
      60,   19,   19,   19, 0x05,
      84,   19,   19,   19, 0x05,
     104,   19,   19,   19, 0x05,
     125,   19,   19,   19, 0x05,
     146,   19,   19,   19, 0x05,

 // properties: name, type, flags
     174,  168, 0x87495103,
     185,  168, 0x87495103,
     196,  168, 0x87495103,
     211,  168, 0x87495103,
     227,  222, 0x01495103,
     239,  222, 0x01495103,
     259,  251, 0x1a495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

static const char qt_meta_stringdata_Box2DRevoluteJoint[] = {
    "Box2DRevoluteJoint\0\0lowerAngleChanged()\0"
    "upperAngleChanged()\0maxMotorTorqueChanged()\0"
    "motorSpeedChanged()\0enableLimitChanged()\0"
    "enableMotorChanged()\0localAnchorAChanged()\0"
    "float\0lowerAngle\0upperAngle\0maxMotorTorque\0"
    "motorSpeed\0bool\0enableLimit\0enableMotor\0"
    "QPointF\0localAnchorA\0"
};

void Box2DRevoluteJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Box2DRevoluteJoint *_t = static_cast<Box2DRevoluteJoint *>(_o);
        switch (_id) {
        case 0: _t->lowerAngleChanged(); break;
        case 1: _t->upperAngleChanged(); break;
        case 2: _t->maxMotorTorqueChanged(); break;
        case 3: _t->motorSpeedChanged(); break;
        case 4: _t->enableLimitChanged(); break;
        case 5: _t->enableMotorChanged(); break;
        case 6: _t->localAnchorAChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Box2DRevoluteJoint::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Box2DRevoluteJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DRevoluteJoint,
      qt_meta_data_Box2DRevoluteJoint, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Box2DRevoluteJoint::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Box2DRevoluteJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Box2DRevoluteJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DRevoluteJoint))
        return static_cast<void*>(const_cast< Box2DRevoluteJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DRevoluteJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Box2DJoint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = lowerAngle(); break;
        case 1: *reinterpret_cast< float*>(_v) = upperAngle(); break;
        case 2: *reinterpret_cast< float*>(_v) = maxMotorTorque(); break;
        case 3: *reinterpret_cast< float*>(_v) = motorSpeed(); break;
        case 4: *reinterpret_cast< bool*>(_v) = enableLimit(); break;
        case 5: *reinterpret_cast< bool*>(_v) = enableMotor(); break;
        case 6: *reinterpret_cast< QPointF*>(_v) = localAnchorA(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLowerAngle(*reinterpret_cast< float*>(_v)); break;
        case 1: setUpperAngle(*reinterpret_cast< float*>(_v)); break;
        case 2: setMaxMotorTorque(*reinterpret_cast< float*>(_v)); break;
        case 3: setMotorSpeed(*reinterpret_cast< float*>(_v)); break;
        case 4: setEnableLimit(*reinterpret_cast< bool*>(_v)); break;
        case 5: setEnableMotor(*reinterpret_cast< bool*>(_v)); break;
        case 6: setLocalAnchorA(*reinterpret_cast< QPointF*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Box2DRevoluteJoint::lowerAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Box2DRevoluteJoint::upperAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Box2DRevoluteJoint::maxMotorTorqueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Box2DRevoluteJoint::motorSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Box2DRevoluteJoint::enableLimitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Box2DRevoluteJoint::enableMotorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Box2DRevoluteJoint::localAnchorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
