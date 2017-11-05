//
// Created by gaboq on 19/10/2017.
//

#include "Lista.h"

/*
 * Entradas: Persona que se desea insertar. Lo inserta al inicio de la lista.
 * Salidas: ninguna.
 */
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
 * Entradas: Persona que se desea insertar. Lo inserta segun su id de menor a mayor.
 * Salidas: ninguna.
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

/*
 * Entradas: Pecador que se desea insertar. Lo inserta segun su total de pecados de menor a mayor.
 * Salidas: ninguna.
 */

void Lista::insertarPecador(Persona *persona){
    if(primerNodo == nullptr) {
        insertarAlInicio(persona);
    } else if(primerNodo == ultimoNodo){
        Nodo *temp = primerNodo;
        if(temp->persona->total_pecados >= persona->total_pecados) {
            insertarAlFinal(persona);
        } else {
            insertarAlInicio(persona);
        }
    } else {
        Nodo *temp = primerNodo;
        while(temp != nullptr) {
            if(temp->siguiente != nullptr) {
                if (temp->persona->total_pecados <= persona->total_pecados) {
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
                if(temp->persona->total_pecados > persona->total_pecados) {
                    Nodo *nuevo = new Nodo(persona);
                    nuevo->anterior = ultimoNodo;
                    ultimoNodo->siguiente = nuevo;
                    ultimoNodo = nuevo;
                    ultimoNodo->siguiente = nullptr;
                    break;
                } else if(temp->persona->total_pecados <= persona->total_pecados) {
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

/*
 * Entradas: Persona que se desea insertar. Lo inserta al final de la lista.
 * Salidas: ninguna.
 */
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

/*
 * Entradas: Id de la persona que se desea encontrar.
 * Salidas: Nodo con la persona que tenga el id igual al de entrada.
 */
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

/*
 * Entradas: Id de la persona que se desea borrar.
 * Si encuentra a la persona lo borra de la lista y lo devuelve.
 * Salidas: Persona que tenga el id igual al de entrada.
 */
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

QString Lista::imprimir()
{
    Nodo *temp = primerNodo;
    QString str= "";
    while(temp != NULL)
    {
        str += QString::fromStdString(temp->persona->nombre) + QString::fromStdString(temp->persona->pais);
        temp = temp->siguiente;
    }
    return str;
}
