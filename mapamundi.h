#ifndef MAPAMUNDI_H
#define MAPAMUNDI_H

#include <QMainWindow>

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
    int ASIA = 3;
    int OCEANIA = 4;
    int r_am, r_eu, r_af, r_oc, r_as, g_am, g_eu, g_af, g_oc, g_as, b_am, b_eu, b_af, b_oc, b_as;
    explicit MapaMundi(QWidget *parent = 0);
    void aumentar(int r,int g,int b);
    void cambiar_color(int r,int g,int b,int i);
    ~MapaMundi();

private:
    Ui::MapaMundi *ui;
};

#endif // MAPAMUNDI_H
