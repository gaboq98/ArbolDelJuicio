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
            sleep(1);
            continue;
        }
        paraiso->genera_afortunado();
        sleep(tiempo);
    }
}

void HiloVida::asignarComponentes(int tiempo)
{
    this->tiempo = tiempo;
}
