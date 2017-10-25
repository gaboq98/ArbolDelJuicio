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
    int pecados[7];
    Persona *hijos[8];
    Persona *padre;

    Persona();
    Persona(string nombre, string apellido, string pais, string creencia, string profecion, string correo);
    void pecar();
    void limpiar();
    int total_pecados();


};

