//
// Created by gaboq on 18/10/2017.
//

#include <iostream>
#include <fstream>
#include<stdlib.h>

using namespace std;

struct GeneradorArchivos {

    GeneradorArchivos();

    string nombres[2000];
    string apellidos[2000];
    string paises[100];
    string profesiones[50];
    string creencias[10];

    void setNombres();
    void setApellidos();
    void setPaises();
    void setProfesiones();
    void setCeencias();

    string generadorNombre();
    string generadorApellido();
    string generadorPais();
    string genradorProfecion();
    string generadorCreencia();

};
