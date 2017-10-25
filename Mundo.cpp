//
// Created by gaboq on 19/10/2017.
//

#include "Mundo.h"

Mundo::Mundo() {
    personas = new Lista();
    srand(time(0));
    archivos = new GeneradorArchivos();
}

Persona *Mundo::crearPersona()
{
    int id = rand()%10000000;
    while (diccionario.contains(id)) {
        id = rand()%10000000;
    }
    diccionario[id] = 69;
    string nom = archivos->generadorNombre();
    string ape = archivos->generadorApellido();
    string cree = archivos->generadorCreencia();
    string prof = archivos->genradorProfecion();
    string pais = archivos->generadorPais();
    string correo = asignarCorreo(pais);
    pais = pais.substr(1, pais.size());
    Persona *persona = new Persona(nom, ape, pais, cree, prof, correo);
    persona->id = id;
    personas->insertarOrdenado(persona);
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
    for(int i = 0; i < 10000; i++) {
        Persona *p = crearPersona();
        cout << p->nombre << " " << p->apellido << " " << p->pais << " " << p->correoElectonico << endl;
    }
}

