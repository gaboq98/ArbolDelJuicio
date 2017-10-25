#include "Lista.h"
#include <QHash>


struct Mundo {

    Mundo();
    QHash<int, int> diccionario;
    Lista* personas;
    GeneradorArchivos *archivos;
    Persona *crearPersona();
    string asignarCorreo(string pais);
    void imprimir();

};

