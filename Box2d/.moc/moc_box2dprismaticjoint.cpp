/****************************************************************************
** Meta object code from reading C++ file 'box2dprismaticjoint.h'
**
** Created: Wed Jan 23 11:48:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../box2dprismaticjoint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dprismaticjoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Box2DPrismaticJoint[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       7,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      47,   20,   20,   20, 0x05,
      73,   20,   20,   20, 0x05,
      96,   20,   20,   20, 0x05,
     116,   20,   20,   20, 0x05,
     137,   20,   20,   20, 0x05,
     158,   20,   20,   20, 0x05,
     172,   20,   20,   20, 0x05,
     194,   20,   20,   20, 0x05,

 // properties: name, type, flags
     222,  216, 0x87495103,
     239,  216, 0x87495103,
     256,  216, 0x87495103,
     270,  216, 0x87495103,
     286,  281, 0x01495103,
     298,  281, 0x01495103,
     318,  310, 0x1a495103,

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

static const char qt_meta_stringdata_Box2DPrismaticJoint[] = {
    "Box2DPrismaticJoint\0\0lowerTranslationChanged()\0"
    "upperTranslationChanged()\0"
    "maxMotorForceChanged()\0motorSpeedChanged()\0"
    "enableLimitChanged()\0enableMotorChanged()\0"
    "axisChanged()\0localAnchorAChanged()\0"
    "localAnchorBChanged()\0float\0"
    "lowerTranslation\0upperTranslation\0"
    "maxMotorForce\0motorSpeed\0bool\0enableLimit\0"
    "enableMotor\0QPointF\0axis\0"
};

void Box2DPrismaticJoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Box2DPrismaticJoint *_t = static_cast<Box2DPrismaticJoint *>(_o);
        switch (_id) {
        case 0: _t->lowerTranslationChanged(); break;
        case 1: _t->upperTranslationChanged(); break;
        case 2: _t->maxMotorForceChanged(); break;
        case 3: _t->motorSpeedChanged(); break;
        case 4: _t->enableLimitChanged(); break;
        case 5: _t->enableMotorChanged(); break;
        case 6: _t->axisChanged(); break;
        case 7: _t->localAnchorAChanged(); break;
        case 8: _t->localAnchorBChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Box2DPrismaticJoint::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Box2DPrismaticJoint::staticMetaObject = {
    { &Box2DJoint::staticMetaObject, qt_meta_stringdata_Box2DPrismaticJoint,
      qt_meta_data_Box2DPrismaticJoint, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Box2DPrismaticJoint::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Box2DPrismaticJoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Box2DPrismaticJoint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DPrismaticJoint))
        return static_cast<void*>(const_cast< Box2DPrismaticJoint*>(this));
    return Box2DJoint::qt_metacast(_clname);
}

int Box2DPrismaticJoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Box2DJoint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = lowerTranslation(); break;
        case 1: *reinterpret_cast< float*>(_v) = upperTranslation(); break;
        case 2: *reinterpret_cast< float*>(_v) = maxMotorForce(); break;
        case 3: *reinterpret_cast< float*>(_v) = motorSpeed(); break;
        case 4: *reinterpret_cast< bool*>(_v) = enableLimit(); break;
        case 5: *reinterpret_cast< bool*>(_v) = enableMotor(); break;
        case 6: *reinterpret_cast< QPointF*>(_v) = axis(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLowerTranslation(*reinterpret_cast< float*>(_v)); break;
        case 1: setUpperTranslation(*reinterpret_cast< float*>(_v)); break;
        case 2: setMaxMotorForce(*reinterpret_cast< float*>(_v)); break;
        case 3: setMotorSpeed(*reinterpret_cast< float*>(_v)); break;
        case 4: setEnableLimit(*reinterpret_cast< bool*>(_v)); break;
        case 5: setEnableMotor(*reinterpret_cast< bool*>(_v)); break;
        case 6: setAxis(*reinterpret_cast< QPointF*>(_v)); break;
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
void Box2DPrismaticJoint::lowerTranslationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Box2DPrismaticJoint::upperTranslationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Box2DPrismaticJoint::maxMotorForceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Box2DPrismaticJoint::motorSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Box2DPrismaticJoint::enableLimitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Box2DPrismaticJoint::enableMotorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Box2DPrismaticJoint::axisChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void Box2DPrismaticJoint::localAnchorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void Box2DPrismaticJoint::localAnchorBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
