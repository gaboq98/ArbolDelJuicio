#ifndef ABB_H
#define ABB_H
#include <iostream>
#include <string>

struct Nodo
{
    int id;
    Nodo *hijoIzq;
    Nodo *hijoDer;

    Nodo(int dato) {
        id = dato;
    }
};

struct ABB {

public:

    Nodo *raiz;

    ABB();
    void insertar(int id);
    Nodo *insertarAux(Nodo *raiz, int id);


};

#endif // ABB_H
