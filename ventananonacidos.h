#ifndef VENTANANONACIDOS_H
#define VENTANANONACIDOS_H

#include <QDialog>
#include "ventanasalvados.h"

namespace Ui {
class VentanaNoNacidos;
}

class VentanaNoNacidos : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaNoNacidos(QWidget *parent = 0);
    ~VentanaNoNacidos();
    void agregarComponentes(Paraiso *p);
    Paraiso *paraiso;

private slots:
    void on_crear_clicked();

private:
    Ui::VentanaNoNacidos *ui;
};

#endif // VENTANANONACIDOS_H
