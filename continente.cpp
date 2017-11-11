#include "continente.h"

Continente::Continente()
{
    cantidad_pecados = 0;
}

Continente::Continente(int continente)
{
    this->nombre = continente;
    cantidad_pecados = cantidad_poblacion = 0;
}
