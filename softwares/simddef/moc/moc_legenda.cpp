/****************************************************************************
** Meta object code from reading C++ file 'legenda.h'
**
** Created: Fri May 13 17:44:33 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/legenda.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'legenda.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Legenda[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Legenda[] = {
    "Legenda\0\0legenda_atualizada()\0"
    "item_legenda_atualizado()\0"
};

const QMetaObject Legenda::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Legenda,
      qt_meta_data_Legenda, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Legenda::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Legenda::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Legenda::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Legenda))
        return static_cast<void*>(const_cast< Legenda*>(this));
    return QWidget::qt_metacast(_clname);
}

int Legenda::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: legenda_atualizada(); break;
        case 1: item_legenda_atualizado(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Legenda::legenda_atualizada()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
