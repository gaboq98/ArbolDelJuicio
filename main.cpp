#include <iostream>
#include "Lista.h"

using namespace std;

int main() {

    GeneradorArchivos *g = new GeneradorArchivos();
    string h= g->generadorNombre();

    return 0;
}
