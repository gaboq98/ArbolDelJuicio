#include "ventanacondenar.h"
#include "ui_ventanacondenar.h"

VentanaCondenar::VentanaCondenar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaCondenar)
{
    ui->setupUi(this);
}

VentanaCondenar::~VentanaCondenar()
{
    delete ui;
}
