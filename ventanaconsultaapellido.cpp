#include "ventanaconsultaapellido.h"
#include "ui_ventanaconsultaapellido.h"

VentanaConsultaApellido::VentanaConsultaApellido(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaConsultaApellido)
{
    ui->setupUi(this);

}


VentanaConsultaApellido::~VentanaConsultaApellido()
{
    delete ui;
}

void VentanaConsultaApellido::asignarComponentes(Mundo *mundo)
{
    this->mundo = mundo;

    string apellidos[2000] = mundo->archivos->apellidos;
    string pais[100] = mundo->archivos->paises;

    QStringList listaPaises;
    QStringList listaApellidos;
    for(int i = 0; i < 2000; i++){
        if(i < 100)
            listaPaises.append(QString::fromStdString(pais[i]).mid(1));
        listaApellidos.append(QString::fromStdString(apellidos[i]));
    }
    ui->apellidos_box->addItems(listaApellidos);
    ui->paises_box->addItems(listaPaises);
}

void VentanaConsultaApellido::on_consulta_button_clicked()
{
    /*
    QString val = ui->apellidos_box->itemData(ui->apellidos_box->currentIndex());
    if(mundo->apellidosArbol.contains(val)){
        AVLtree* arbol_apellido = mundo->apellidosArbol[val];

    }
    */
}
