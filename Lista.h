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


    void insertarAlInicio(Persona *persona);

    void insertarOrdenado(Persona *persona);

    void insertarAlFinal(Persona *persona);

    void imprimirLista();

    void buscar();

};
