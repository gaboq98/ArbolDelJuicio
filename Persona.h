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
    string profesion;
    string correoElectonico;
    string horaYFecha;
    int pecados[7];
    QVector<Persona*> hijos;
    Persona *papa;
    int total_pecados;
    string estado;

    Persona();
    Persona(string nombre, string apellido, string pais, string creencia, string profesion, string correo);
    int pecar();
    void limpiar();
    void imprimir();
    void heredar(int i, int pecados);

    string obtenerFecha();


};

