#include "abb.h"

ABB::ABB()
{
    raiz = NULL;
}

void ABB::insertar(int id)
{
    raiz  = insertarAux(raiz, id);
}

NodoABB *ABB::insertarAux(NodoABB *arbol, int id)
{
    if (arbol == NULL) {
        arbol = new NodoABB(id);
    } else if(arbol->id > id) {
        arbol->hijoIzq = insertarAux(arbol->hijoIzq, id);
    } else {
        arbol->hijoDer = insertarAux(arbol->hijoDer, id);
    }
    return arbol;
}

NodoABB *ABB::buscar(int id)
{
    return buscarAux(raiz, id);
}

NodoABB *ABB::buscarAux(NodoABB *raiz, int id)
{
    if(raiz == NULL) {
        return NULL;
    } else {
        if(raiz->id == id) {
            return raiz;
        } else if (id < raiz->id) {
            return buscarAux(raiz->hijoIzq, id);
        } else {
            return buscarAux(raiz->hijoDer, id);
        }
    }
}
