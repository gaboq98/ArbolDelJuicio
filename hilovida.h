#ifndef HILOVIDA_H
#define HILOVIDA_H
#include <QtCore>
#include "paraiso.h"


class HiloVida : public QThread
{
    Q_OBJECT

public:
    HiloVida();
    HiloVida(Paraiso *par);
    bool encendido;
    bool pausa;
    int tiempo;
    Paraiso *paraiso;
    void run();
    void asignarComponentes(int tiempo);
};

#endif // HILOVIDA_H
