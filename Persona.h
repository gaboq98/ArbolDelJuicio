#include <iostream>
#include<stdlib.h>
#include <fstream>
#include <ctime>
#include "GeneradorArchivos.h"


using namespace std;

struct Persona {

    int id;
    string nombre;
    string apellido;
    string pais;
    string creencia;
    string profecion;
    string correoElectonico;
    string horaYFecha;
    int pecados[7];
    Persona *hijos[8];
    Persona *papa;

    Persona();
    Persona(string nombre, string apellido, string pais, string creencia, string profecion, string correo);
    void pecar();
    void limpiar();
    int total_pecados();

    string obtenerFecha();


};

