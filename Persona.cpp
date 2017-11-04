//
// Created by gaboq on 18/10/2017.
//
#include "Persona.h"

Persona::Persona() {

}

/*
 * Entradas: Ninguna
 * Obtiene la fecha y hora actual de la computadora
 * Salidas: string con la fecha y hora
 */
string Persona::obtenerFecha()
{
    time_t momento = time(0);
    string momentoString = "";

    tm* tiempoLocal = localtime(&momento);

    momentoString += "Fecha de Nacimiento: ";
    momentoString += to_string(tiempoLocal->tm_mday) + "/";
    momentoString += to_string(tiempoLocal->tm_mon + 1) + "/";
    momentoString += to_string(1900 + tiempoLocal->tm_year) + "\n";

    momentoString += "Hora de Nacimiento: ";
    momentoString += to_string(tiempoLocal->tm_hour) + ":";
    momentoString += to_string(tiempoLocal->tm_min) + ":";
    momentoString += to_string(tiempoLocal->tm_sec);

    return momentoString;
}

//Constructor
Persona::Persona(string nombre, string apellido, string pais, string creencia, string profesion, string correo,Continente* c)
{
    this->papa = NULL;
    this->nombre = nombre;
    this->apellido = apellido;
    this->pais = pais;
    this->creencia = creencia;
    this->profesion = profesion;
    this->correoElectonico = correo;
    this->horaYFecha = obtenerFecha();
    continente = c;
    limpiar();
}

/*
 * Entradas: Ninguna
 * Salida: Ninguna
 */
int Persona::pecar()
{
    if(estado.compare("Vivo") == 0){
        int result = 0;
        for(int i = 0; i < 7; i++ ){
            int pecado = rand()%101;
            pecados[i] += pecado;
            continente->cantidad_pecados += pecado;
            result += pecado;
            total_pecados += pecado;
            heredar(i, pecado * 0.5);
        }
        return result;
    }
    return 0;
}

/*
 * Entradas: indice, pecados
 * Salida: Ninguna
 */
void Persona::heredar(int i, int pecados)
{
    for(Persona* hijo: hijos)
    {
        hijo->pecados[i] += pecados;
        hijo->continente->cantidad_pecados += pecados;
        hijo->heredar(i, pecados * 0.5);
    }
}

/*
 * Entradas: Ninguna
 * Pone la lista de pecados en 0
 * Salida: Ninguna
 */
void Persona::limpiar()
{
    for (int i: pecados){
        i = 0;
        total_pecados = 0;
    }
}


void Persona::imprimir()
{
    cout << nombre << " " << apellido << " " << id << " " << profesion << " " << pais << " " << endl;
}
