#include "paraiso.h"

Paraiso::Paraiso()
{
    personas = new Lista();
}

/*
 * Mata una persona :'( xD :3 8==D
 */
void Paraiso::genera_afortunado()
{
    int id = rand()%10000000;
    if(dic_infierno.contains(id)){
        Persona* persona = infierno->eliminar(id);
        personas->insertarOrdenado(persona);
    }else if(dic_mundo.contains(id)){
        Persona* persona = mundo->eliminar(id);
        personas->insertarOrdenado(persona);
    }else{
        no_nacidos.append(id);
    }
}
