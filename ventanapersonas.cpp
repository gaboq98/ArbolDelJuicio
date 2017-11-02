#include "ventanapersonas.h"
#include "ui_ventanapersonas.h"


ventanaPersonas::ventanaPersonas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventanaPersonas)
{
    ui->setupUi(this);
}

ventanaPersonas::~ventanaPersonas()
{
    delete ui;
}

void ventanaPersonas::asignarComponentes(Mundo *mundo)
{
    this->mundo = mundo;
}

void ventanaPersonas::on_crear_clicked()
{
    Nodo *temp = mundo->personas->primerNodo;
    qDebug() <<  QString::fromStdString(temp->persona->nombre);
    int i = 1;
    while(temp != NULL) {
        ui->textPersonas->append("\n");
        Persona *p = temp->persona;
        QString str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
                p->profesion + " " + p->creencia + " " + p->correoElectonico + " " + p->horaYFecha);
        ui->textPersonas->append(QString::number(i++));
        ui->textPersonas->append(str);
        for(int i = 0; i < p->hijos.length(); i++) {
            ui->textPersonas->append(QString::number(p->hijos[i]->id));
        }
        temp = temp->siguiente;
    }
}
