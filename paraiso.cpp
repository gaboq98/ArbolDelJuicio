#include "paraiso.h"
#include <QDebug>

Paraiso::Paraiso()
{    
}

Paraiso::Paraiso(Mundo *m, Infierno *inf)
{
    personas = new Lista();
    mundo = m;
    infierno = inf;
    dic_mundo = &mundo->diccionario;
    dic_infierno = &infierno->condenados;
}

/*
 * Mata una persona :'( xD :3 8==D :v
 */
void Paraiso::genera_afortunado()
{
    int id = rand()%10000000;
    if(dic_infierno->contains(id)){
        Persona* persona = infierno->eliminar(id);
        personas->insertarOrdenado(persona);
    }else if(dic_mundo->contains(id)){
        Persona* persona = mundo->eliminar(id);
        personas->insertarOrdenado(persona);
    }else{
        no_nacidos.append(id);
        mundo->no_nacidos.append(id);
    }
}
