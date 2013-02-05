/****************************************************************************
** Meta object code from reading C++ file 'box2dbody.h'
**
** Created: Wed Jan 23 11:48:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../box2dbody.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dbody.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Box2DBody[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       9,   74, // properties
       1,  110, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      34,   10,   10,   10, 0x05,
      58,   10,   10,   10, 0x05,
      76,   10,   10,   10, 0x05,
      92,   10,   10,   10, 0x05,
     117,   10,   10,   10, 0x05,
     140,   10,   10,   10, 0x05,
     164,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     178,   10,   10,   10, 0x08,

 // methods: signature, parameters, type, tag, flags
     212,  198,   10,   10, 0x02,
     255,  248,   10,   10, 0x02,
     282,   10,  274,   10, 0x02,

 // properties: name, type, flags
     305,  299, ((uint)QMetaType::QReal << 24) | 0x00495103,
     319,  299, ((uint)QMetaType::QReal << 24) | 0x00495103,
     343,  334, 0x0049510b,
     357,  352, 0x01495103,
     364,  352, 0x01495103,
     380,  352, 0x01495103,
     394,  352, 0x01095103,
     401,  274, 0x1a495103,
     455,  416, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       0,
       6,
       0,

 // enums: name, flags, count, data
     334, 0x0,    3,  114,

 // enum data: key, value
     464, uint(Box2DBody::Static),
     471, uint(Box2DBody::Kinematic),
     481, uint(Box2DBody::Dynamic),

       0        // eod
};

static const char qt_meta_stringdata_Box2DBody[] = {
    "Box2DBody\0\0linearDampingChanged()\0"
    "angularDampingChanged()\0bodyTypeChanged()\0"
    "bulletChanged()\0sleepingAllowedChanged()\0"
    "fixedRotationChanged()\0linearVelocityChanged()\0"
    "bodyCreated()\0onRotationChanged()\0"
    "impulse,point\0applyLinearImpulse(QPointF,QPointF)\0"
    "torque\0applyTorque(qreal)\0QPointF\0"
    "getWorldCenter()\0qreal\0linearDamping\0"
    "angularDamping\0BodyType\0bodyType\0bool\0"
    "bullet\0sleepingAllowed\0fixedRotation\0"
    "active\0linearVelocity\0"
    "QDeclarativeListProperty<Box2DFixture>\0"
    "fixtures\0Static\0Kinematic\0Dynamic\0"
};

void Box2DBody::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Box2DBody *_t = static_cast<Box2DBody *>(_o);
        switch (_id) {
        case 0: _t->linearDampingChanged(); break;
        case 1: _t->angularDampingChanged(); break;
        case 2: _t->bodyTypeChanged(); break;
        case 3: _t->bulletChanged(); break;
        case 4: _t->sleepingAllowedChanged(); break;
        case 5: _t->fixedRotationChanged(); break;
        case 6: _t->linearVelocityChanged(); break;
        case 7: _t->bodyCreated(); break;
        case 8: _t->onRotationChanged(); break;
        case 9: _t->applyLinearImpulse((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 10: _t->applyTorque((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 11: { QPointF _r = _t->getWorldCenter();
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Box2DBody::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Box2DBody::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_Box2DBody,
      qt_meta_data_Box2DBody, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Box2DBody::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Box2DBody::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Box2DBody::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DBody))
        return static_cast<void*>(const_cast< Box2DBody*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int Box2DBody::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = linearDamping(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = angularDamping(); break;
        case 2: *reinterpret_cast< BodyType*>(_v) = bodyType(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isBullet(); break;
        case 4: *reinterpret_cast< bool*>(_v) = sleepingAllowed(); break;
        case 5: *reinterpret_cast< bool*>(_v) = fixedRotation(); break;
        case 6: *reinterpret_cast< bool*>(_v) = active(); break;
        case 7: *reinterpret_cast< QPointF*>(_v) = linearVelocity(); break;
        case 8: *reinterpret_cast< QDeclarativeListProperty<Box2DFixture>*>(_v) = fixtures(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLinearDamping(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setAngularDamping(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setBodyType(*reinterpret_cast< BodyType*>(_v)); break;
        case 3: setBullet(*reinterpret_cast< bool*>(_v)); break;
        case 4: setSleepingAllowed(*reinterpret_cast< bool*>(_v)); break;
        case 5: setFixedRotation(*reinterpret_cast< bool*>(_v)); break;
        case 6: setActive(*reinterpret_cast< bool*>(_v)); break;
        case 7: setLinearVelocity(*reinterpret_cast< QPointF*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Box2DBody::linearDampingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Box2DBody::angularDampingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Box2DBody::bodyTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Box2DBody::bulletChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Box2DBody::sleepingAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Box2DBody::fixedRotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Box2DBody::linearVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void Box2DBody::bodyCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
