#ifndef VENTANASALVADOS_H
#define VENTANASALVADOS_H

#include <QDialog>
#include "ventanaparaiso.h"

namespace Ui {
class VentanaSalvados;
}

class VentanaSalvados : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaSalvados(QWidget *parent = 0);
    ~VentanaSalvados();
    void agregarComponentes(Paraiso *p);
    Paraiso *paraiso;

private slots:
    void on_crear_clicked();

private:
    Ui::VentanaSalvados *ui;
};

#endif // VENTANASALVADOS_H
