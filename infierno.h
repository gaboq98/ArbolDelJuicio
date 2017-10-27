#ifndef INFIERNO_H
#define INFIERNO_H
#include "Lista.h"
#include <QHash>
#include "avltree.h"


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
