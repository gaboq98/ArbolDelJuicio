#ifndef ARBOLAVL_H
#define ARBOLAVL_H
#include "Persona.h"

struct Nodo
{
    int id;
    Persona* ref_persona;
    Nodo* hijo_izquierdo;
    Nodo* hijo_derecho;
    int ancho;

    Nodo(){}

    Nodo(Persona* persona)
    {
        id = persona->id;
        ref_persona = persona;
        hijo_derecho = hijo_izquierdo = nullptr;
    }

    bool esHoja(){
        return hijo_derecho == nullptr || hijo_izquierdo == nullptr;
    }
};



struct ArbolAVL
{
public:
    Nodo* raiz;

    ArbolAVL();
    void insertar(Persona* p);
    Nodo* insertar(Persona* p, Nodo* nodo_actual);
    int ancho(Nodo* nodo);
    int max(int ancho_i, int ancho_d);
    Nodo* rotar_izquierda(Nodo* k2);
    Nodo* rotar_doble_izquierda(Nodo* k3);
    Nodo* rotar_derecha(Nodo* k1);
    Nodo* rotar_doble_derecha(Nodo* k1);
    int contar_nodos();
    int contar_nodos(Nodo* nodo);
    Persona* buscar(int id);
    Persona* buscar(Nodo* r, int id);

};

#endif // ARBOLAVL_H
