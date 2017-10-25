//
// Created by gaboq on 18/10/2017.
//
#include "Persona.h"

Persona::Persona() {

}

Persona::Persona(string nombre, string apellido, string pais, string creencia, string profecion, string correo) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->pais = pais;
    this->creencia = creencia;
    this->profecion = profecion;
    limpiar();
}

void Persona::pecar()
{
    for(int i = 0; i < 7; i++ ){
        int pecado = rand()%100;
        pecados[i] += pecado;
    }
}

void Persona::limpiar()
{
    for (int i: pecados){
        i = 0;
    }
}

int Persona::total_pecados()
{
    int total = 0;
    for (int i: pecados){
        total += i;
    }
}
