#ifndef PARAISO_H
#define PARAISO_H
#include <QVector>


struct Paraiso
{
public:
    Lista* personas;
    QVector <int> no_nacidos;
    Paraiso();
};

#endif // PARAISO_H