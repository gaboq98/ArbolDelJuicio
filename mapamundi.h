#ifndef MAPAMUNDI_H
#define MAPAMUNDI_H

#include <QMainWindow>
#include "condenadosdialog.h"

namespace Ui {
class MapaMundi;
}

class MapaMundi : public QMainWindow
{
    Q_OBJECT

public:
    int AMERICA = 0;
    int AFRICA = 1;
    int EUROPA = 2;
    int ASIA = 4;
    int OCEANIA = 3;
    int r_am, r_eu, r_af, r_oc, r_as, g_am, g_eu, g_af, g_oc, g_as, b_am, b_eu, b_af, b_oc, b_as;
    explicit MapaMundi(QWidget *parent = 0);
    void aumentar(int *r,int *g,int *b);
    void cambiar_color(int r, int g, int b, int i);
    int posiciones[5] = {27,21,15,9,3};
    Continente* continentes[5];
    void ordenar();
    void colorear(Continente* c[]);
    void colorear(int opcion);
    void setDefault();
    ~MapaMundi();

private:
    Ui::MapaMundi *ui;
};

#endif // MAPAMUNDI_H
