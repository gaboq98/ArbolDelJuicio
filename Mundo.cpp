//
// Created by gaboq on 19/10/2017.
//

#include "Mundo.h"

Mundo::Mundo() {

}

void Mundo::crearPersona()
{
    string nom = archivos->generadorNombre();
    string ape = archivos->generadorApellido();
    string cree = archivos->generadorCreencia();
    string prof = archivos->genradorProfecion();
    string pais = archivos->generadorPais();
    string correo = asignarCorreo(pais);
    pais = pais.substr(1, pais.size());
    Persona *persona = new Persona(nom, ape, pais, cree, prof, correo);
}

string Mundo::asignarCorreo(string pais)
{
    string correos[5] = {"personas.continente.america", "personas.continente.africa",
                         "personas.continente.europa", "personas.continente.oceania", "personas.continente.asia"};
    int indice = stoi(pais.substr(0));
    string correo = correos[indice];
    return correo;
}

