/****************************************************************************
** Meta object code from reading C++ file 'box2dfixture.h'
**
** Created: Wed Jan 23 11:48:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../box2dfixture.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box2dfixture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Box2DFixture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       7,   69, // properties
       2,   97, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      31,   13,   13,   13, 0x05,
      49,   13,   13,   13, 0x05,
      70,   13,   13,   13, 0x05,
      86,   13,   13,   13, 0x05,
     106,   13,   13,   13, 0x05,
     128,   13,   13,   13, 0x05,
     154,  148,   13,   13, 0x05,
     182,  148,   13,   13, 0x05,
     212,  148,   13,   13, 0x05,
     250,  238,   13,   13, 0x05,

 // properties: name, type, flags
     287,  281, 0x87495103,
     295,  281, 0x87495103,
     304,  281, 0x87495103,
     321,  316, 0x01495103,
     342,  328, 0x0049510b,
     353,  328, 0x0049510b,
     370,  366, 0x02495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

 // enums: name, flags, count, data
     381, 0x0,   18,  105,
     328, 0x1,   18,  141,

 // enum data: key, value
     394, uint(Box2DFixture::Category1),
     404, uint(Box2DFixture::Category2),
     414, uint(Box2DFixture::Category3),
     424, uint(Box2DFixture::Category4),
     434, uint(Box2DFixture::Category5),
     444, uint(Box2DFixture::Category6),
     454, uint(Box2DFixture::Category7),
     464, uint(Box2DFixture::Category8),
     474, uint(Box2DFixture::Category9),
     484, uint(Box2DFixture::Category10),
     495, uint(Box2DFixture::Category11),
     506, uint(Box2DFixture::Category12),
     517, uint(Box2DFixture::Category13),
     528, uint(Box2DFixture::Category14),
     539, uint(Box2DFixture::Category15),
     550, uint(Box2DFixture::Category16),
     561, uint(Box2DFixture::All),
     565, uint(Box2DFixture::None),
     394, uint(Box2DFixture::Category1),
     404, uint(Box2DFixture::Category2),
     414, uint(Box2DFixture::Category3),
     424, uint(Box2DFixture::Category4),
     434, uint(Box2DFixture::Category5),
     444, uint(Box2DFixture::Category6),
     454, uint(Box2DFixture::Category7),
     464, uint(Box2DFixture::Category8),
     474, uint(Box2DFixture::Category9),
     484, uint(Box2DFixture::Category10),
     495, uint(Box2DFixture::Category11),
     506, uint(Box2DFixture::Category12),
     517, uint(Box2DFixture::Category13),
     528, uint(Box2DFixture::Category14),
     539, uint(Box2DFixture::Category15),
     550, uint(Box2DFixture::Category16),
     561, uint(Box2DFixture::All),
     565, uint(Box2DFixture::None),

       0        // eod
};

static const char qt_meta_stringdata_Box2DFixture[] = {
    "Box2DFixture\0\0densityChanged()\0"
    "frictionChanged()\0restitutionChanged()\0"
    "sensorChanged()\0categoriesChanged()\0"
    "collidesWithChanged()\0groupIndexChanged()\0"
    "other\0beginContact(Box2DFixture*)\0"
    "contactChanged(Box2DFixture*)\0"
    "endContact(Box2DFixture*)\0other,value\0"
    "postSolve(Box2DFixture*,float)\0float\0"
    "density\0friction\0restitution\0bool\0"
    "sensor\0CategoryFlags\0categories\0"
    "collidesWith\0int\0groupIndex\0CategoryFlag\0"
    "Category1\0Category2\0Category3\0Category4\0"
    "Category5\0Category6\0Category7\0Category8\0"
    "Category9\0Category10\0Category11\0"
    "Category12\0Category13\0Category14\0"
    "Category15\0Category16\0All\0None\0"
};

void Box2DFixture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Box2DFixture *_t = static_cast<Box2DFixture *>(_o);
        switch (_id) {
        case 0: _t->densityChanged(); break;
        case 1: _t->frictionChanged(); break;
        case 2: _t->restitutionChanged(); break;
        case 3: _t->sensorChanged(); break;
        case 4: _t->categoriesChanged(); break;
        case 5: _t->collidesWithChanged(); break;
        case 6: _t->groupIndexChanged(); break;
        case 7: _t->beginContact((*reinterpret_cast< Box2DFixture*(*)>(_a[1]))); break;
        case 8: _t->contactChanged((*reinterpret_cast< Box2DFixture*(*)>(_a[1]))); break;
        case 9: _t->endContact((*reinterpret_cast< Box2DFixture*(*)>(_a[1]))); break;
        case 10: _t->postSolve((*reinterpret_cast< Box2DFixture*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Box2DFixture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Box2DFixture::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_Box2DFixture,
      qt_meta_data_Box2DFixture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Box2DFixture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Box2DFixture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Box2DFixture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DFixture))
        return static_cast<void*>(const_cast< Box2DFixture*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int Box2DFixture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = density(); break;
        case 1: *reinterpret_cast< float*>(_v) = friction(); break;
        case 2: *reinterpret_cast< float*>(_v) = restitution(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isSensor(); break;
        case 4: *reinterpret_cast<int*>(_v) = QFlag(categories()); break;
        case 5: *reinterpret_cast<int*>(_v) = QFlag(collidesWith()); break;
        case 6: *reinterpret_cast< int*>(_v) = groupIndex(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDensity(*reinterpret_cast< float*>(_v)); break;
        case 1: setFriction(*reinterpret_cast< float*>(_v)); break;
        case 2: setRestitution(*reinterpret_cast< float*>(_v)); break;
        case 3: setSensor(*reinterpret_cast< bool*>(_v)); break;
        case 4: setCategories(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 5: setCollidesWith(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 6: setGroupIndex(*reinterpret_cast< int*>(_v)); break;
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
void Box2DFixture::densityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Box2DFixture::frictionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Box2DFixture::restitutionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Box2DFixture::sensorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Box2DFixture::categoriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Box2DFixture::collidesWithChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Box2DFixture::groupIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void Box2DFixture::beginContact(Box2DFixture * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Box2DFixture::contactChanged(Box2DFixture * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Box2DFixture::endContact(Box2DFixture * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Box2DFixture::postSolve(Box2DFixture * _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
static const uint qt_meta_data_Box2DBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Box2DBox[] = {
    "Box2DBox\0"
};

void Box2DBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Box2DBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Box2DBox::staticMetaObject = {
    { &Box2DFixture::staticMetaObject, qt_meta_stringdata_Box2DBox,
      qt_meta_data_Box2DBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Box2DBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Box2DBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Box2DBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DBox))
        return static_cast<void*>(const_cast< Box2DBox*>(this));
    return Box2DFixture::qt_metacast(_clname);
}

int Box2DBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Box2DFixture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Box2DCircle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // properties: name, type, flags
      35,   29, 0x87495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_Box2DCircle[] = {
    "Box2DCircle\0\0radiusChanged()\0float\0"
    "radius\0"
};

void Box2DCircle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Box2DCircle *_t = static_cast<Box2DCircle *>(_o);
        switch (_id) {
        case 0: _t->radiusChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Box2DCircle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Box2DCircle::staticMetaObject = {
    { &Box2DFixture::staticMetaObject, qt_meta_stringdata_Box2DCircle,
      qt_meta_data_Box2DCircle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Box2DCircle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Box2DCircle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Box2DCircle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DCircle))
        return static_cast<void*>(const_cast< Box2DCircle*>(this));
    return Box2DFixture::qt_metacast(_clname);
}

int Box2DCircle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Box2DFixture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = radius(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRadius(*reinterpret_cast< float*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
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

// SIGNAL 0
void Box2DCircle::radiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Box2DPolygon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // properties: name, type, flags
      45,   32, 0x09495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_Box2DPolygon[] = {
    "Box2DPolygon\0\0verticesChanged()\0"
    "QVariantList\0vertices\0"
};

void Box2DPolygon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Box2DPolygon *_t = static_cast<Box2DPolygon *>(_o);
        switch (_id) {
        case 0: _t->verticesChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Box2DPolygon::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Box2DPolygon::staticMetaObject = {
    { &Box2DFixture::staticMetaObject, qt_meta_stringdata_Box2DPolygon,
      qt_meta_data_Box2DPolygon, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Box2DPolygon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Box2DPolygon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Box2DPolygon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Box2DPolygon))
        return static_cast<void*>(const_cast< Box2DPolygon*>(this));
    return Box2DFixture::qt_metacast(_clname);
}

int Box2DPolygon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Box2DFixture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = vertices(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setVertices(*reinterpret_cast< QVariantList*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
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

// SIGNAL 0
void Box2DPolygon::verticesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
