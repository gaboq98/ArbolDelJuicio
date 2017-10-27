#include "paraiso.h"

Paraiso::Paraiso()
{
    personas = new Lista();
}


void Paraiso::genera_afortunado()
{
    int id = rand()%10000000;
    if(infierno->condenados.contains(id)){
        Persona* persona = infierno->eliminar(id);
        personas->insertarOrdenado(persona);
    }else if(mundo->diccionario.contains(id)){
        Persona* persona = mundo->eliminar(id);
        personas->insertarOrdenado(persona);
    }else{
        no_nacidos.append(id);
    }
}
