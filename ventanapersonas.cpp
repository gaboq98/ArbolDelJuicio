#include "ventanapersonas.h"
#include "ui_ventanapersonas.h"


ventanaPersonas::ventanaPersonas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventanaPersonas)
{
    ui->setupUi(this);

    mundo = new Mundo();
    mundo->nacer(100);
}

ventanaPersonas::~ventanaPersonas()
{
    delete ui;
}

void ventanaPersonas::on_crear_clicked()
{
    QString str;
    for(int i = 0; i < 10; i++) {
        Nodo *temp = mundo->personas->primerNodo;
        Persona *p = temp->persona;
        str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
               p->profesion + " " + p->creencia + " " + p->correoElectonico + " " + p->horaYFecha);
        ui->labelPersonas->setText(ui->labelPersonas->text() + "\n" + str);
        temp = temp->siguiente;
    }
    mundo->personas->imprimirLista();
}
