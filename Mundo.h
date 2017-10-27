#include "avltree.h"
#include <QHash>
#include "qstring.h"
#include "QMap"
#include "infierno.h"
#include "paraiso.h"


struct Mundo {

    Mundo();


    Paraiso* paraiso;
    Infierno* infierno;
    QHash<int, int> diccionario;
    QMap<string, AVLtree> apellidosArbol;
    Lista* personas;
    GeneradorArchivos *archivos;

    Persona *crearPersona();
    string asignarCorreo(string pais);
    void imprimir();
    void nacer(int cantidad);
    void pecar();
    Persona* eliminar(int id);

};
