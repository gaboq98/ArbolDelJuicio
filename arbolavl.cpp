#include "arbolavl.h"

ArbolAVL::ArbolAVL()
{
    raiz = nullptr;
}


int ArbolAVL::ancho(Nodo *nodo)
{
    if(t != nullptr){
        return nodo->ancho;
    }
    return -1;
}

int ArbolAVL::max(int ancho_i, int ancho_d)
{
    if(ancho_d > ancho_i)
    {
        return ancho_d;
    }
    return ancho_i;
}

void ArbolAVL::insertar(Persona *p)
{
    raiz = insertar(Persona* p, raiz);
}

Nodo* ArbolAVL::insertar(Persona *p, Nodo* nodo_actual)
{
    if(nodo_actual == nullptr)
    {
        nodo_actual == new Nodo(p);
    }else if (p->id < nodo_actual->id)
    {
        nodo_actual->hijo_izquierdo = insertar(p, nodo_actual->hijo_izquierdo);
        if(ancho(nodo_actual->hijo_izquierdo) - ancho(nodo_actual->hijo_derecho) == 2)
        {
            if (p->id < nodo_actual->hijo_izquierdo->id)
                nodo_actual = rotar_izquierda(p);
            else
                nodo_actual = rotar_doble_izquierda(p);
        }
    }else if(p->id > nodo_actual->id)
    {
        nodo_actual->hijo_derecho = insertar(p, nodo_actual->hijo_derecho);
        if(ancho(nodo_actual->hijo_derecho) - ancho(nodo_actual->hijo_izquierdo) == 2)
        {
            if (p->id < nodo_actual->hijo_izquierdo->id)
                nodo_actual = rotar_derecha(p);
            else
                nodo_actual = rotar_doble_derecha(p);
        }
    }
    nodo_actual->ancho = max( ancho(nodo_actual->hijo_izquierdo), ancho(nodo_actual->hijo_derecho)) + 1;
    return nodo_actual;
}

Nodo* ArbolAVL::rotar_izquierda(Nodo *k2)
{
    Nodo* k1 = k2->hijo_izquierdo;
    k2->hijo_izquierdo = k1->hijo_derecho;
    k1->hijo_derecho = k2;
    k2->ancho = max( ancho( k2->hijo_izquierdo ), ancho( k2->hijo_derecho ) ) + 1;
    k1->ancho = max( ancho(k1->hijo_izquierdo), k2->ancho ) + 1;

    return k1;
}

Nodo* ArbolAVL::rotar_derecha(Nodo *k1){
    Nodo* k2 = k1->hijo_derecho;
    k1->hijo_derecho = k2->hijo_izquierdo;
    k2->hijo_izquierdo = k1;
    k1->ancho = max( ancho( k1->hijo_izquierdo ), ancho( k1->hijo_derecho ) ) + 1;
    k2->ancho = max( ancho(k2->hijo_derecho ),ancho(k1->ancho) ) + 1;
    return k2;
}

Nodo* ArbolAVL::rotar_doble_derecha(Nodo *k1){
    k1->hijo_derecho = rotar_doble_izquierda(k1->hijo_derecho);
    return rotar_derecha(k1);
}

Nodo* ArbolAVL::rotar_doble_izquierda(Nodo *k3){
    k3->hijo_izquierdo = rotar_doble_derecha(k3);
    return rotar_izquierda(k3);
}

int ArbolAVL::contar_nodos(){
    return contar_nodos(raiz);
}

int ArbolAVL::contar_nodos(Nodo* r){
    if (r == nullptr)
        return 0;
    int i = 1;
    i += contar_nodos(r->hijo_izquierdo);
    i += contar_nodos(r->hijo_derecho);
    return i;
}

Persona* ArbolAVL::buscar(int id){
    return buscar(raiz,id);
}

Persona* ArbolAVL::buscar(Nodo *r, int id){
    if (r->esHoja() || r->id == id){
        return r;
    }
    if (id > r->id){
        return buscar(r->hijo_derecho, id);
    }
    return buscar(r->hijo_izquierdo, id);
}

