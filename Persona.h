#include <iostream>
#include<stdlib.h>
#include <fstream>
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
    int fechaNacimiento;
    string horaNacimiento;
    string pecados[7];
    Persona *hijos[8];

    Persona();
    Persona(string nombre, string apellido, string pais, string creencia, string profecion, string correo);


};

