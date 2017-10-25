#include "Lista.h"
#include <QHash>


struct Mundo {

    Mundo();
    QHash<int, int> diccionario;
    Lista* personas;
    GeneradorArchivos *archivos;
    void crearPersona();
    string asignarCorreo(string pais);

};


