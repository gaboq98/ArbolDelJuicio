//
// Created by gaboq on 18/10/2017.
//

#include <time.h>
#include <process.h>
#include "GeneradorArchivos.h"

GeneradorArchivos::GeneradorArchivos() {

    setNombres();
    setApellidos();
    setPaises();
    setProfesiones();
    setCeencias();
}

string GeneradorArchivos::generadorNombre() {
    srand(time(NULL));
    int random = rand()%2000;
    string nombre = nombres[random];
    return nombre;
}

string GeneradorArchivos::generadorApellido() {
    srand(time(NULL));
    int random = rand()%2000;
    string apellido = apellidos[random];
    return apellido;
}

string GeneradorArchivos::generadorPais() {
    srand(time(NULL));
    int random = rand()%100;
    string pais = paises[random];
    return pais;
}

string GeneradorArchivos::genradorProfecion() {
    srand(time(NULL));
    int random = rand()%50;
    string profesion = profesiones[random];
    return profesion;
}

string GeneradorArchivos::generadorCreencia() {
    srand(time(NULL));
    int random = rand()%10;
    string creencia = creencias[random];
    return creencia;
}

void GeneradorArchivos::setNombres() {
    ifstream archivoNombre;
    string lineaN;
    archivoNombre.open("ListaNombres.txt", ios::in);
    if (archivoNombre.fail()) {
        cout << "Error al cargar el archivo2";
        exit(1);
    }
    int contN = 0;
    while (!archivoNombre.eof()) {
        getline(archivoNombre, lineaN);
        nombres[contN] = lineaN;
        contN++;
    }
    archivoNombre.close();
}

void GeneradorArchivos::setApellidos() {
    ifstream archivoApellidos;
    string linea;
    archivoApellidos.open("ListaApellidos.txt", ios::in);
    if (archivoApellidos.fail()) {
        cout << "Error al cargar el archivo1";
        exit(1);
    }
    int cont = 0;
    while (!archivoApellidos.eof()) {
        getline(archivoApellidos, linea);
        apellidos[cont] = linea;
        cont++;
    }
    archivoApellidos.close();
}

void GeneradorArchivos::setPaises() {
    ifstream archivoPaises;
    string lineaP;
    archivoPaises.open("ListaPaises.txt", ios::in);
    if (archivoPaises.fail()) {
        cout << "Error al cargar el archivo2";
        exit(1);
    }
    int contador = 0;
    while (!archivoPaises.eof()) {
        getline(archivoPaises, lineaP);
        paises[contador] = lineaP;
        contador++;
    }
    archivoPaises.close();
}

void GeneradorArchivos::setProfesiones() {
    ifstream archivoProfeciones;
    string lineaP;
    archivoProfeciones.open("ListaEmpleos.txt", ios::in);
    if (archivoProfeciones.fail()) {
        cout << "Error al cargar el archivo2";
        exit(1);
    }
    int contador = 0;
    while (!archivoProfeciones.eof()) {
        getline(archivoProfeciones, lineaP);
        profesiones[contador] = lineaP;
        contador++;
    }
    archivoProfeciones.close();
}

void GeneradorArchivos::setCeencias() {
    ifstream archivoCreencias;
    string lineaP;
    archivoCreencias.open("ListaCreencias.txt", ios::in);
    if (archivoCreencias.fail()) {
        cout << "Error al cargar el archivo2";
        exit(1);
    }
    int contador = 0;
    while (!archivoCreencias.eof()) {
        getline(archivoCreencias, lineaP);
        creencias[contador] = lineaP;
        contador++;
    }
    archivoCreencias.close();
}
