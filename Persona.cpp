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
}
