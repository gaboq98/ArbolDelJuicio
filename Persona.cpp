//
// Created by gaboq on 18/10/2017.
//
#include "Persona.h"

Persona::Persona() {

}

string Persona::obtenerFecha()
{
    time_t momento = time(0);
    string momentoString = "";

    tm* tiempoLocal = localtime(&momento);

    momentoString += "Fecha de Nacimiento: ";
    momentoString += to_string(tiempoLocal->tm_mday) + "/";
    momentoString += to_string(tiempoLocal->tm_mon) + "/";
    momentoString += to_string(1900 + tiempoLocal->tm_year) + "\n";

    momentoString += "Hora de Nacimiento: ";
    momentoString += to_string(tiempoLocal->tm_hour) + ":";
    momentoString += to_string(tiempoLocal->tm_min) + ":";
    momentoString += to_string(tiempoLocal->tm_sec);

    return momentoString;
}

Persona::Persona(string nombre, string apellido, string pais, string creencia, string profecion, string correo) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->pais = pais;
    this->creencia = creencia;
    this->profecion = profecion;
    this->correoElectonico = correo;
    this->horaYFecha = obtenerFecha();
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
