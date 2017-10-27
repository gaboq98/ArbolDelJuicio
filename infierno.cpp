#include "infierno.h"

Infierno::Infierno()
{
    pecadores = new Lista();
}

void Infierno::agregar(Persona *p)
{
    pecadores->insertarOrdenado(p);
    condenados[p->id] = 666;
}

Persona* Infierno::eliminar(int id)
{
    return pecadores->borrar(id);
}
