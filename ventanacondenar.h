#ifndef VENTANACONDENAR_H
#define VENTANACONDENAR_H

#include "ventanaconsultaapellido.h"
#include <QDialog>

namespace Ui {
class VentanaCondenar;
}

class VentanaCondenar : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaCondenar(QWidget *parent = 0);
    ~VentanaCondenar();
    Mundo* mundo;
    Infierno* infierno;
    void asignarComponentes(Mundo* mundo, Infierno* infierno);

private slots:
    void on_condenar_button_clicked();

private:
    Ui::VentanaCondenar *ui;
};

#endif // VENTANACONDENAR_H
