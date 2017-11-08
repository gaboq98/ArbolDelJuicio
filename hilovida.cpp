#include "hilovida.h"

HiloVida::HiloVida()
{

}

HiloVida::HiloVida(Paraiso *par)
{
    encendido = true;
    pausa = false;
    paraiso = par;
}

void HiloVida::run()
{
    while(encendido) {
        if(pausa) {
            sleep(0.9);
        }
        paraiso->genera_afortunado();
        sleep(*tiempo);
    }
}
