#ifndef INFIERNO_H
#define INFIERNO_H
#include <QHash>
#include "Mundo.h"


struct Infierno
{
public:
    AVLtree* arbol;
    Lista* pecadores;
    QHash<int, int> condenados;
    Infierno();
    Persona* eliminar(int id);
    void agregar(Persona* p);
    void condena(Persona* p);
};

#endif // INFIERNO_H
