#include "ventanaconsultaapellido.h"
#include "ui_ventanaconsultaapellido.h"

VentanaConsultaApellido::VentanaConsultaApellido(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaConsultaApellido)
{
    ui->setupUi(this);

    /*
    mundo = new Mundo();
    string apellidos[] = mundo->archivos->apellidos;
    string pais[] = mundo->archivos->paises;
    QStringList listaPaises;
    QStringList listaApellidos;
    for(int i = 0; i < 2000; i++){
        if(i < 100)
            listaPaises.append(QString::fromStdString(pais[i]));
        listaApellidos.append(QString::fromStdString(apellidos[i]));
    }
    ui->apellidos_box->addItems(listaApellidos);
    ui->paises_box->addItems(listaPaises);
    */

}


VentanaConsultaApellido::~VentanaConsultaApellido()
{
    delete ui;
}
