//
// Created by gaboq on 18/10/2017.
//

#include <time.h>
#include <process.h>
#include "GeneradorArchivos.h"


/*
 *Entradas:ninguna
 *Salidas: niguna
 *Contstructor
 *Funcion que setea los arrays de archivos
 */
GeneradorArchivos::GeneradorArchivos() {

    setNombres();
    setApellidos();
    setPaises();
    setProfesiones();
    setCeencias();
}


/*
 * Entradas: ninguna
 * Salidas: String con el nombre aleatorio
 *
 * genera un nombre aleatorio
 */
string GeneradorArchivos::generadorNombre() {
    int random = rand()%2000;
    string nombre = nombres[random];
    return nombre;
}

/*
 * Entradas: ninguna
 * Salidas: string  con un apellido aleatorio
 *
 * genera un apellido aleatorio
 */
string GeneradorArchivos::generadorApellido() {
    int random = rand()%2000;
    string apellido = apellidos[random];
    return apellido;
}


/*
 * Entradas: ninguna
 * Salidas: string con un pais
 *
 * genera un pais aleatorio
 */
string GeneradorArchivos::generadorPais() {
    int random = rand()%100;
    string pais = paises[random];
    return pais;
}

/*
 * Entradas: ninguna
 * Salidas: string con la profesion generada
 *
 * genera una profesión aleatoria
 */
string GeneradorArchivos::genradorProfecion() {
    int random = rand()%50;
    string profesion = profesiones[random];
    return profesion;
}


/*
 * Entradas: ninguna
 * Salidas: String con una creencia aleatoia
 *
 * genera una creencia aleatoria
 */
string GeneradorArchivos::generadorCreencia() {
    int random = rand()%10;
    string creencia = creencias[random];
    return creencia;
}


/*
 * Entradas: ninguna
 * Salidas: niguna
 *
 * Abre el archivo y lo cargaen un array
 */
void GeneradorArchivos::setNombres() {
    ifstream archivoNombre;
    string lineaN;
    archivoNombre.open("..\\ArbolDelJuicio\\ListaNombres.txt", ios::in);
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


/*
 * Entradas: ninguna
 * Salidas: niguna
 *
 * Abre el archivo y lo cargaen un array
 */
void GeneradorArchivos::setApellidos() {
    ifstream archivoApellidos;
    string linea;
    archivoApellidos.open("..\\ArbolDelJuicio\\ListaApellidos.txt", ios::in);
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


/*
 * Entradas: ninguna
 * Salidas: niguna
 *
 * Abre el archivo y lo cargaen un array
 */
void GeneradorArchivos::setPaises() {
    ifstream archivoPaises;
    string lineaP;
    archivoPaises.open("..\\ArbolDelJuicio\\ListaPaises.txt", ios::in);
    if (archivoPaises.fail()) {
        cout << "Error al cargar el archivo5";
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


/*
 * Entradas: ninguna
 * Salidas: niguna
 *
 * Abre el archivo y lo cargaen un array
 */
void GeneradorArchivos::setProfesiones() {
    ifstream archivoProfeciones;
    string lineaP;
    archivoProfeciones.open("..\\ArbolDelJuicio\\ListaEmpleos.txt", ios::in);
    if (archivoProfeciones.fail()) {
        cout << "Error al cargar el archivo42";
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


/*
 * Entradas: ninguna
 * Salidas: niguna
 *
 * Abre el archivo y lo cargaen un array
 */
void GeneradorArchivos::setCeencias() {
    ifstream archivoCreencias;
    string lineaP;
    archivoCreencias.open("..\\ArbolDelJuicio\\ListaCreencias.txt", ios::in);
    if (archivoCreencias.fail()) {
        cout << "Error al cargar el archivo24";
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
