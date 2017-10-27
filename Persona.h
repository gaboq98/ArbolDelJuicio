#include <iostream>
#include<stdlib.h>
#include <fstream>
#include <ctime>
#include "GeneradorArchivos.h"
#include <QVector>


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
    QVector<Persona*> hijos;
    Persona *papa;
    int total_pecados;

    Persona();
    Persona(string nombre, string apellido, string pais, string creencia, string profecion, string correo);
    void pecar();
    void limpiar();

    string obtenerFecha();


};

