#ifndef PARAISO_H
#define PARAISO_H
#include <QVector>
#include <QHash>
#include "infierno.h"


struct Paraiso
{
public:
    Lista *personas;
    QVector <int> no_nacidos;
    Infierno* infierno;
    Mundo* mundo;
    Paraiso();
    Paraiso(Mundo *m, Infierno *inf);
    QHash<int, int> *dic_mundo;
    QHash<int, int> *dic_infierno;
    void genera_afortunado();

};

#endif // PARAISO_H
