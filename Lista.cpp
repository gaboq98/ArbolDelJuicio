//
// Created by gaboq on 19/10/2017.
//

#include "Lista.h"

void Lista::insertarAlInicio(Persona *persona) {
    if(primerNodo == NULL)
        primerNodo = ultimoNodo = new Nodo(persona);
    else if(primerNodo == ultimoNodo){
        Nodo *nuevo = new Nodo(persona);
        primerNodo->siguiente = nuevo;
        nuevo = ultimoNodo;
    } else {
        Nodo *nuevo = new Nodo(persona);
        nuevo->siguiente = primerNodo;
        primerNodo = nuevo;
        primerNodo->siguiente->anterior = primerNodo;
    }

}

void Lista::insertarOrdenado(Persona *persona)
{
    if(primerNodo == NULL) {
        primerNodo = ultimoNodo = new Nodo(persona);
    } else {
        Nodo *temp = primerNodo;
        while(temp != NULL) {
            if(temp->siguiente->persona->id > persona->id) {
                Nodo *newNodo = new Nodo(persona);
                temp->siguiente->anterior = newNodo;
                newNodo->siguiente = temp->siguiente;
                newNodo->anterior = temp;
                temp->siguiente = newNodo;
                break;
            }
            temp = temp->siguiente;
        }
    }
}


void Lista::insertarPecador(Persona *persona){
    if(primerNodo == NULL) {
        primerNodo = ultimoNodo = new Nodo(persona);
    } else if(primerNodo == ultimoNodo) {
        if(persona->total_pecados > ultimoNodo->persona->total_pecados) {
            insertarAlFinal(persona);
        } else {
            insertarAlInicio(persona);
        }
    } else {
        Nodo *temp = primerNodo;
        while(temp != NULL) {
            if(temp->siguiente->persona->total_pecados > persona->total_pecados) {
                Nodo *newNodo = new Nodo(persona);
                temp->siguiente->anterior = newNodo;
                newNodo->siguiente = temp->siguiente;
                newNodo->anterior = temp;
                temp->siguiente = newNodo;
                break;
            }
            temp = temp->siguiente;
        }
    }
}

void Lista::insertarAlFinal(Persona *persona) {
    if(primerNodo == NULL) {
        primerNodo = ultimoNodo = new Nodo(persona);
    } else if(primerNodo == ultimoNodo){
        Nodo *nuevo = new Nodo(persona);
        primerNodo->siguiente = nuevo;
        ultimoNodo = nuevo;
        ultimoNodo->anterior = primerNodo;
    } else {
        Nodo *nuevo = new Nodo(persona);
        nuevo->anterior = ultimoNodo;
        ultimoNodo->siguiente = nuevo;
        ultimoNodo = nuevo;
    }
    ultimoNodo->siguiente = NULL;
}

void Lista::imprimirLista() {
    Nodo *temp = primerNodo;
    while(temp != NULL) {
        cout << temp->persona << " ";
        temp = temp->siguiente;
    }
    cout << endl;
}

Nodo *Lista::buscar(int id)
{
    Nodo *temp = primerNodo;
    while(temp != NULL) {
        if(temp->persona->id == id) {
            return temp;
        }
        temp = temp->siguiente;
    }
}

Persona *Lista::borrar(int id)
{
    Nodo *tmp = buscar(id);
    if(tmp == primerNodo){
        primerNodo = primerNodo->siguiente;
        return tmp->persona;
    }else if(tmp->anterior != nullptr && tmp->siguiente != nullptr){
        tmp->anterior->siguiente = tmp->siguiente;
        tmp->siguiente->anterior = tmp->anterior;
        tmp->anterior = nullptr;
        tmp->siguiente = nullptr;
    }else{
        tmp->anterior->siguiente = tmp->siguiente;
        return tmp->persona;
    }
}
