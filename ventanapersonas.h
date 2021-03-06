#ifndef VENTANAPERSONAS_H
#define VENTANAPERSONAS_H
#include <QMainWindow>
#include <QDebug>
#include "paraiso.h"

namespace Ui {
class ventanaPersonas;
}

class ventanaPersonas : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventanaPersonas(QWidget *parent = 0);
    ~ventanaPersonas();
    void asignarComponentes(Mundo *mundo);
    Mundo* mundo;

private slots:
    void on_crear_clicked();

private:
    Ui::ventanaPersonas *ui;

};

#endif // VENTANAPERSONAS_H
