#ifndef PARAISO_H
#define PARAISO_H
#include <QVector>
#include <QHash>
#include "Lista.h"
#include "Mundo.h"
#include "infierno.h"


struct Paraiso
{
public:
    Lista *personas;
    QVector <int> no_nacidos;
    Infierno* infierno;
    Mundo* mundo;
    Paraiso();

    void genera_afortunado();
};

#endif // PARAISO_H
