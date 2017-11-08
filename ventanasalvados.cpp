#include "ventanasalvados.h"
#include "ui_ventanasalvados.h"

VentanaSalvados::VentanaSalvados(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaSalvados)
{
    ui->setupUi(this);
}

VentanaSalvados::~VentanaSalvados()
{
    delete ui;
}

void VentanaSalvados::agregarComponentes(Paraiso *p)
{
    paraiso = p;
}

void VentanaSalvados::on_crear_clicked()
{
    ui->textEdit_paraiso->setText("");
    Nodo *temp = paraiso->personas->primerNodo;
    while(temp != NULL) {
        Persona *p = temp->persona;
        QString str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
                p->profesion + " " + p->creencia);
        ui->textEdit_paraiso->append(str);
        ui->textEdit_paraiso->append("\n");
        temp = temp->siguiente;
    }
}
