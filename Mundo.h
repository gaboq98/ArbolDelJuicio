#include "Lista.h"


struct Mundo {

    Mundo();

    Lista personas;
    GeneradorArchivos *archivos;
    Persona *crearPersona();
    string asignarCorreo(string pais);
    void imprimir();

};

