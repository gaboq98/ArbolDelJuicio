//
// Created by gaboq on 19/10/2017.
//

#include "Mundo.h"

Mundo::Mundo() {
    srand(time(0));
    personas = new Lista();
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
    for(int i = 0; i < 10; i++) {
        Persona *p = crearPersona();
        cout << p->nombre << " " << p->apellido << " " << p->horaYFecha << endl;
    }
}

void Mundo::nacer(int cantidad)
{
    for(int i = 0; i < cantidad; i++) {
        Persona *per = crearPersona();
        AVLtree *aux;
        if (!apellidosArbol.contains(per->apellido)) {
            aux = new AVLtree();
            aux->insert(per);
            apellidosArbol[per->apellido] = *aux;
        } else {
            aux = &apellidosArbol[per->apellido];
            aux->insert(per);
        }
        int random = rand()%9;
        for(int i = 0; i < random; i++) {
            TreeNode *temp = aux->root;
            while(temp != NULL) {
                if(temp->ptHumano->papa != NULL) {
                    per->hijos[i] = temp->ptHumano;
                    break;
                } else {
                    temp = temp->lson;
                }
            }
        }
        personas->insertarOrdenado(per);
    }
}

void Mundo::pecar()
{
    Nodo *temp = personas->primerNodo;
    while(temp != NULL) {
        temp->persona->pecar();
        temp = temp->siguiente;
    }
}

