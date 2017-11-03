#ifndef VENTANACONSULTAAPELLIDO_H
#define VENTANACONSULTAAPELLIDO_H

#include <QMainWindow>
#include "ventanapersonas.h"


namespace Ui {
class VentanaConsultaApellido;
}

class VentanaConsultaApellido : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaConsultaApellido(QWidget *parent = 0);
    ~VentanaConsultaApellido();
    Mundo* mundo;
    void asignarComponentes(Mundo *mundo);

private slots:
    void on_consulta_button_clicked();

private:
    Ui::VentanaConsultaApellido *ui;
};

#endif // VENTANACONSULTAAPELLIDO_H
