#ifndef INFIERNO_H
#define INFIERNO_H
#include <QHash>
#include "Mundo.h"
#include <windows.h>
#include <QDebug>

struct Infierno
{
public:
    AVLtree* arbol;
    Lista* pecadores;
    QHash<int, int> condenados;
    QVector <int> enviados;
    string correos[5] = {"personas.continente.america", "personas.continente.africa",
                         "personas.continente.europa", "personas.continente.oceania", "personas.continente.asia"};
    Infierno();
    Persona* eliminar(int id);
    void agregar(Persona* p);
    void condena(Persona* p);
    void correoAmerica();
    void correoEuropa();
    void correoAfrica();
    void correoOciania();
    void correoAsia();
};

#endif // INFIERNO_H
