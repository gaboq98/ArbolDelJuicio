#include "abb.h"

ABB::ABB()
{
    raiz = NULL;
}

void ABB::insertar(int id)
{
    raiz  = insertarAux(raiz, id);
}

Nodo *ABB::insertarAux(Nodo *arbol, int id)
{
    if (arbol == NULL) {
        arbol = new Nodo(id);
    } else if(arbol->id > id) {
        arbol->hijoIzq = insertarAux(arbol->hijoIzq, id);
    } else {
        arbol->hijoDer = insertarAux(arbol->hijoDer, id);
    }
    return arbol;
}
