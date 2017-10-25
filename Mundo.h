#include "Lista.h"


struct Mundo {

    Mundo();

    Lista personas;
    GeneradorArchivos *archivos;
    void crearPersona();
    string asignarCorreo(string pais);

};


