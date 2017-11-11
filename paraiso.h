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
    QVector <int> enviados;
    string correos[5] = {"personas.continente.america", "personas.continente.africa",
                         "personas.continente.europa", "personas.continente.oceania", "personas.continente.asia"};
    void genera_afortunado();
    void correoAmerica();
    void correoEuropa();
    void correoAfrica();
    void correoOciania();
    void correoAsia();

};

#endif // PARAISO_H
