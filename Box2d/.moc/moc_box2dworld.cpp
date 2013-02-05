/****************************************************************************
** Meta object code from reading C++ file 'box2dworld.h'
**
** Created: Wed Jan 23 11:48:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../box2dworld.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dworld.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Box2DWorld[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      29,   11,   11,   11, 0x05,
      46,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   11,   11,   11, 0x08,
      81,   73,   11,   11, 0x08,

 // properties: name, type, flags
     118,  113, 0x01495103,
     132,  126, 0x87095103,
     145,  141, 0x02095103,
     164,  141, 0x02095103,
     183,  141, 0x02095103,
     201,  193, 0x1a495103,

 // properties: notify_signal_id
       1,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_Box2DWorld[] = {
    "Box2DWorld\0\0gravityChanged()\0"
    "runningChanged()\0stepped()\0unregisterBody()\0"
    "fixture\0fixtureDestroyed(Box2DFixture*)\0"
    "bool\0running\0float\0timeStep\0int\0"
    "velocityIterations\0positionIterations\0"
    "frameTime\0QPointF\0gravity\0"
};

void Box2DWorld::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Box2DWorld *_t = static_cast<Box2DWorld *>(_o);
        switch (_id) {
        case 0: _t->gravityChanged(); break;
        case 1: _t->runningChanged(); break;
        case 2: _t->stepped(); break;
        case 3: _t->unregisterBody(); break;
        case 4: _t->fixtureDestroyed((*reinterpret_cast< Box2DFixture*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Box2DWorld::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Box2DWorld::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_Box2DWorld,
      qt_meta_data_Box2DWorld, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Box2DWorld::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Box2DWorld::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Box2DWorld::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DWorld))
        return static_cast<void*>(const_cast< Box2DWorld*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int Box2DWorld::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< bool*>(_v) = isRunning(); break;
        case 1: *reinterpret_cast< float*>(_v) = timeStep(); break;
        case 2: *reinterpret_cast< int*>(_v) = velocityIterations(); break;
        case 3: *reinterpret_cast< int*>(_v) = positionIterations(); break;
        case 4: *reinterpret_cast< int*>(_v) = frameTime(); break;
        case 5: *reinterpret_cast< QPointF*>(_v) = gravity(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 1: setTimeStep(*reinterpret_cast< float*>(_v)); break;
        case 2: setVelocityIterations(*reinterpret_cast< int*>(_v)); break;
        case 3: setPositionIterations(*reinterpret_cast< int*>(_v)); break;
        case 4: setFrameTime(*reinterpret_cast< int*>(_v)); break;
        case 5: setGravity(*reinterpret_cast< QPointF*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Box2DWorld::gravityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Box2DWorld::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Box2DWorld::stepped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
