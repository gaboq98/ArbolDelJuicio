#ifndef LISTACONT_H
#define LISTACONT_H
#include "continente.h"

struct NodoCont
{
    Continente* c;
    NodoCont* siguiente;
    NodoCont() {}
    NodoCont(Continente* conti){c = conti; siguiente = nullptr;}
};



struct ListaCont
{
public:
    NodoCont* pn;
    ListaCont();
    void insertar(Continente*);
    void insertar_pob(Continente*);
};

#endif // LISTACONT_H
