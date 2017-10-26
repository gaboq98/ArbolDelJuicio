#ifndef ABB_H
#define ABB_H
#include <iostream>
#include <string>

struct NodoABB
{
    int id;
    NodoABB *hijoIzq;
    NodoABB *hijoDer;

    NodoABB(int dato) {
        id = dato;
    }
};

struct ABB {

public:

    NodoABB *raiz;

    ABB();
    void insertar(int id);
    NodoABB *insertarAux(NodoABB *raiz, int id);
    NodoABB *buscar(int id);
    NodoABB *buscarAux(NodoABB *raiz, int id);

};

#endif // ABB_H
