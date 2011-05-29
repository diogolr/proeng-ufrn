/****************************************************************************
** Meta object code from reading C++ file 'grafico.h'
**
** Created: Tue May 17 11:35:22 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/grafico.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grafico.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Grafico[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      21,    8,    8,    8, 0x0a,
      47,    8,    8,    8, 0x2a,
      69,    8,    8,    8, 0x0a,
      92,    8,    8,    8, 0x2a,
     111,    8,    8,    8, 0x0a,
     135,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Grafico[] = {
    "Grafico\0\0atualizar()\0atualizar_deteccoes(bool)\0"
    "atualizar_deteccoes()\0atualizar_escala(bool)\0"
    "atualizar_escala()\0habilitar_legenda(bool)\0"
    "habilitar_zoom(bool)\0"
};

const QMetaObject Grafico::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_Grafico,
      qt_meta_data_Grafico, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Grafico::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Grafico::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Grafico::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Grafico))
        return static_cast<void*>(const_cast< Grafico*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int Grafico::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: atualizar(); break;
        case 1: atualizar_deteccoes((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: atualizar_deteccoes(); break;
        case 3: atualizar_escala((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: atualizar_escala(); break;
        case 5: habilitar_legenda((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: habilitar_zoom((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
