//
// Created by gaboq on 19/10/2017.
//
#include "Mundo.h"
#include <QDebug>

Mundo::Mundo() {
    personas = new Lista();
    archivos = new GeneradorArchivos();
    for(int i = 0; i < 5; i++)
    {
        continentes[i] = new Continente(i);
    }
}

/*
 * Entradas: Ninguna
 * Genera una persona con todos los atributos
 * Salidas: Persona generada
 */
Persona *Mundo::crearPersona()
{
    int id = qrand()%10000000;
    while (diccionario.contains(id)) {
        id = qrand()%10000000;
    }
    diccionario[id] = 69;
    string nom = archivos->generadorNombre();
    string ape = archivos->generadorApellido();
    string cree = archivos->generadorCreencia();
    string prof = archivos->genradorProfecion();
    string pais = archivos->generadorPais();
    string correo = asignarCorreo(pais);
    int indice = stoi(pais.substr(0));
    pais = pais.substr(1, pais.size());
    Persona *persona = new Persona(nom, ape, pais, cree, prof, correo,continentes[indice]);
    persona->id = id;
    if(! no_nacidos.contains(id)){
       persona->estado = "Vivo";
       personas->insertarOrdenado(persona);
       return persona;
    }
    persona->estado = "Paraiso";
    paraiso->insertarOrdenado(persona);
    noNacidosParaiso->remove(noNacidosParaiso->indexOf(persona->id));
    no_nacidos.remove(no_nacidos.indexOf(persona->id));
    return nullptr;
}

/*
 * Entradas: String con un pais
 * Genera una persona con todos los atributos
 * Salidas: String con el correo correspondiente segun el pais
 */
string Mundo::asignarCorreo(string pais)
{
    string correos[5] = {"personas.continente.america", "personas.continente.africa",
                         "personas.continente.europa", "personas.continente.oceania", "personas.continente.asia"};
    int indice = std::stoi(pais.substr(0));
    string correo = correos[indice];
    return correo;
}

/*
 * Entradas: Cantidad de personas que se quiere generar
 * Genera las personas que diga la cantidad
 * Salidas: Ninguna
 */
void Mundo::nacer(int cantidad)
{
    for(int i = 0; i < cantidad; i++) {
        Persona *per = crearPersona();
        if(per != nullptr){
            AVLtree *aux;
            per->continente->cantidad_poblacion += 1;
            if (!apellidosArbol.contains(per->apellido)) {
                aux = new AVLtree();
                apellidosArbol[per->apellido] = aux;
            } else {
                aux = apellidosArbol[per->apellido];
            }
            if(!lista_paises.contains(QString::fromStdString(per->pais))){
                lista_paises[QString::fromStdString(per->pais)] = new Lista();
            }
            lista_paises[QString::fromStdString(per->pais)]->insertarOrdenado(per);
            int random = rand()%9;
            for(int i = 0; i < random; i++) {
                aux->agregar(&(per->hijos),per->pais);
            }
            aux->insert(per);
        }
    }
}

/*
 * Entradas: Id de la persona que se quiere eliminar
 * Salidas: Persona eliminada
 */
Persona* Mundo::eliminar(int id){
    Persona* p = personas->buscar(id)->persona;
    lista_paises[QString::fromStdString(p->pais)]->borrar(p->id);
    personas->borrar(id);
    return p;
}

/*
 * Entradas: Ninguna
 * Salidas: Ninguna
 */
void Mundo::pecar()
{
    Nodo *temp = personas->primerNodo;
    while(temp != NULL) {
        int p_de_pecado = temp->persona->pecar();
        if (!hash_paises->contains(QString::fromStdString(temp->persona->pais))){
            (*hash_paises)[QString::fromStdString(temp->persona->pais)] = 0;
        }
        (*hash_paises)[QString::fromStdString(temp->persona->pais)] = (*hash_paises)[QString::fromStdString(temp->persona->pais)] + p_de_pecado;
        temp = temp->siguiente;
    }
}

void Mundo::decrementar_pecados(Persona *p)
{
    (*hash_paises)[QString::fromStdString(p->pais)] -= p->total_pecados;
}

void Mundo::agregarParaiso(Lista *l, QVector<int> *v)
{
    paraiso = l;
    noNacidosParaiso = v;
}


