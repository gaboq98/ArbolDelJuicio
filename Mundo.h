#include "Lista.h"
#include <QHash>


struct Mundo {

    Mundo();
<<<<<<< HEAD

    Lista *personas;
=======
    QHash<int, int> diccionario;
    Lista* personas;
>>>>>>> cce1c221f60ff67f8bce435fc14ecf2a596120a0
    GeneradorArchivos *archivos;
    Persona *crearPersona();
    string asignarCorreo(string pais);
    void imprimir();
    void nacer(int cantidad);

};

