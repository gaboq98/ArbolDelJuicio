//
// Created by gaboq on 19/10/2017.
//

#include "Mundo.h"

Mundo::Mundo() {
    srand(time(0));
    archivos = new GeneradorArchivos();
}

Persona *Mundo::crearPersona()
{
    string nom = archivos->generadorNombre();
    string ape = archivos->generadorApellido();
    string cree = archivos->generadorCreencia();
    string prof = archivos->genradorProfecion();
    string pais = archivos->generadorPais();
    string correo = asignarCorreo(pais);
    pais = pais.substr(1, pais.size());
    Persona *persona = new Persona(nom, ape, pais, cree, prof, correo);
    return persona;
}

string Mundo::asignarCorreo(string pais)
{
    string correos[5] = {"personas.continente.america", "personas.continente.africa",
                         "personas.continente.europa", "personas.continente.oceania", "personas.continente.asia"};
    int indice = stoi(pais.substr(0));
    string correo = correos[indice];
    return correo;
}

void Mundo::imprimir()
{
    for(int i = 0; i < 10; i++) {
        Persona *p = crearPersona();
        cout << p->nombre << " " << p->apellido << " " << p->horaYFecha << endl;
    }
}

void Mundo::nacer(int cantidad)
{
    for(int i = 0; i < cantidad; i++) {
        Persona *per = crearPersona();
        personas->insertarOrdenado(per);
    }
}

