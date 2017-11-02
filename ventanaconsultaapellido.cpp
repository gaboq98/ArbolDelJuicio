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
//12416
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
    ui->text_edit->setPlainText("");
    QString val = ui->apellidos_box->currentText();
    QString pais = ui->paises_box->currentText();
    if(mundo->apellidosArbol.contains(val.toStdString())){
        AVLtree* arbol_apellido = mundo->apellidosArbol[val.toStdString()];
        for(int i = 0; i < arbol_apellido->listaPersonas.length(); i++) {
            Persona *p = arbol_apellido->listaPersonas.at(i);
            if(p->pais.compare(pais.toStdString()) == 0) {
                QString str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->estado + " " +
                        p->pais + " " + p->profesion + " " + p->creencia + " " + p->horaYFecha);
                ui->text_edit->appendPlainText(str + "\n\n");
            }
        }
    }
}












