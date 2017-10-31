#include "infierno.h"

Infierno::Infierno()
{
    pecadores = new Lista();
}


/*
 * Entrada: una persona
 * Salida: ninguna
 *
 * agrega una persona al infierno
 */
void Infierno::agregar(Persona *p)
{
    pecadores->insertarOrdenado(p);
    condenados[p->id] = 666;
}

/*
 * Entradas: id de las persona
 * Salida: ninguna
 *
 * elimina a la persona buscada de la lista
 * del infierno
 */
Persona* Infierno::eliminar(int id)
{
    return pecadores->borrar(id);
}
