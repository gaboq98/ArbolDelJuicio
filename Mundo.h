#include "avltree.h"
#include <QHash>
#include <QVector>
#include "qstring.h"
#include "QMap"

struct Mundo {

    Mundo();

    QVector<int> no_nacidos;
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
