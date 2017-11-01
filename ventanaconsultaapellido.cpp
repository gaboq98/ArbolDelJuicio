#include "ventanaconsultaapellido.h"
#include "ui_ventanaconsultaapellido.h"

VentanaConsultaApellido::VentanaConsultaApellido(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaConsultaApellido)
{
    ui->setupUi(this);

/*
    while (condition) {


    }
    ui->apellido->addItem();
    */
}

VentanaConsultaApellido::~VentanaConsultaApellido()
{
    delete ui;
}
