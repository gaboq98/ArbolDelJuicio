#include "avltree.h"
#include <QHash>
#include <QVector>
#include "qstring.h"
#include "QMap"

struct Mundo {

    Mundo();

    QVector<int> no_nacidos;
    QHash<int, int> diccionario;
    QHash<QString, int>* hash_paises;
    QMap<string, AVLtree*> apellidosArbol;
    QMap<QString, Lista*> lista_paises;
    Lista* personas;
    GeneradorArchivos *archivos;
    Continente* continentes[5];
    Lista *paraiso;
    QVector<int> *noNacidosParaiso;
    Persona *crearPersona();
    string asignarCorreo(string pais);
    void nacer(int cantidad);
    void pecar();
    Persona* eliminar(int id);
    void decrementar_pecados(Persona* p);
    void agregarParaiso(Lista *l, QVector<int> *v);

};
