#ifndef VENTANACONSULTAS_H
#define VENTANACONSULTAS_H

#include <math.h>
#include <QMainWindow>
#include <QButtonGroup>
#include "ventanaconsultaapellido.h"

namespace Ui {
class ventanaConsultas;
}

class ventanaConsultas : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventanaConsultas(QWidget *parent = 0);
    ~ventanaConsultas();
    QButtonGroup *buttonGroup;
    Mundo* mundo;
    Lista *pecadores;
    int totalPecados;
    void asignarComponentes(Mundo *mundo);
    double porcentaje(int pecados);


private slots:

    void on_pushButton_clicked();

private:
    Ui::ventanaConsultas *ui;
};

#endif // VENTANACONSULTAS_H
