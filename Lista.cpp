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
/*
void Lista::insertarOrdenado(Persona *persona)
{
    if(primerNodo == NULL) {
        primerNodo = ultimoNodo = new Nodo(persona);
    } else {
        Nodo *temp = primerNodo;
        while(temp->siguiente != NULL) {
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
*/
void Lista::insertarOrdenado(Persona *persona)
{
    if(primerNodo == nullptr) {
        primerNodo = ultimoNodo = new Nodo(persona);
        primerNodo->anterior = nullptr;
        ultimoNodo->siguiente = nullptr;
    } else if(primerNodo == ultimoNodo){
        Nodo *temp = primerNodo;
        if(temp->persona->id > persona->id) {
            Nodo *nuevo = new Nodo(persona);
            primerNodo = nuevo;
            primerNodo->siguiente = ultimoNodo;
            ultimoNodo->anterior = nuevo;
            ultimoNodo->siguiente = nullptr;
            primerNodo->anterior = nullptr;
        } else {
            Nodo *nuevo = new Nodo(persona);
            primerNodo->siguiente = nuevo;
            ultimoNodo = nuevo;
            ultimoNodo->anterior = primerNodo;
            ultimoNodo->siguiente = nullptr;
        }
    } else {
        Nodo *temp = primerNodo;
        while(temp != nullptr) {
            if(temp->siguiente != nullptr) {
                if (temp->persona->id > persona->id) {
                    if(temp != primerNodo) {
                        Nodo *newNodo = new Nodo(persona);
                        temp->anterior->siguiente = newNodo;
                        newNodo->anterior = temp->anterior;
                        newNodo->siguiente = temp;
                        temp->anterior = newNodo;
                        primerNodo->anterior = nullptr;
                        break;
                    } else {
                        Nodo *newNodo = new Nodo(persona);
                        newNodo->siguiente = temp;
                        temp->anterior = newNodo;
                        primerNodo = newNodo;
                        primerNodo->anterior = nullptr;
                        break;
                    }
                }
                temp = temp->siguiente;
            } else {
                if(temp->persona->id < persona->id) {
                    Nodo *nuevo = new Nodo(persona);
                    nuevo->anterior = ultimoNodo;
                    ultimoNodo->siguiente = nuevo;
                    ultimoNodo = nuevo;
                    ultimoNodo->siguiente = nullptr;
                    break;
                } else if(temp->persona->id > persona->id) {
                    Nodo *newNodo = new Nodo(persona);
                    ultimoNodo->anterior->siguiente = newNodo;
                    newNodo->anterior = ultimoNodo->anterior;
                    newNodo->siguiente = ultimoNodo;
                    ultimoNodo->anterior = newNodo;
                    break;
                }
                temp = temp->siguiente;
            }
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
        temp->persona->imprimir();
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
