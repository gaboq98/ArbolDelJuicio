#include "avltree.h"
#include <QHash>
#include "qstring.h"
#include "QMap"


struct Mundo {

    Mundo();

    QHash<int, int> diccionario;
    QMap<string, AVLtree> apellidosArbol;
    Lista* personas;
    GeneradorArchivos *archivos;
    Persona *crearPersona();
    string asignarCorreo(string pais);
    void imprimir();
    void nacer(int cantidad);
    void pecar();

};
