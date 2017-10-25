#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;


struct Nodo {

    Nodo *siguiente;

    Nodo *anterior;

    Persona *persona;

    Nodo() {
    }

    Nodo(Persona *persona) {
        this->persona = persona;
    }

};

struct Lista {

    Nodo *primerNodo;

    Nodo *ultimoNodo;


    void insertarAlInicio(Persona *persona) {
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

    void insertarOrdenado(Persona* persona){
        if(primerNodo == NULL)
            primerNodo = ultimoNodo = new Nodo(persona);
        Nodo* tmp = primerNodo;
        while (tmp->siguiente != nullptr) {
            if(persona->id < tmp->persona->id){
                break;
            }
            tmp = tmp->siguiente;
        }
        Nodo* nodo = new Nodo(persona);
        nodo->anterior = tmp;
        nodo->siguiente = tmp->siguiente;
    }

    void insertarAlFinal(Persona *persona) {
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

    void imprimirLista() {
        Nodo *temp = primerNodo;
        while(temp != NULL) {
            cout << temp->persona << " ";
            temp = temp->siguiente;
        }
        cout << endl;
    }

};
