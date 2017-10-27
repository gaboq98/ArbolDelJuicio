#include "ventanapersonas.h"
#include "ui_ventanapersonas.h"


ventanaPersonas::ventanaPersonas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventanaPersonas)
{
    ui->setupUi(this);

    mundo = new Mundo();
}

ventanaPersonas::~ventanaPersonas()
{
    delete ui;
}

void ventanaPersonas::on_crear_clicked()
{
    mundo->nacer(100);
    for(int i = 0; i < 10; i++) {
        Nodo *temp = mundo->personas->primerNodo;
        Persona *p = temp->persona;
        QString str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
                p->profecion + " " + p->creencia + " " + p->correoElectonico + " " + p->horaYFecha);
        ui->labelPersonas->setText(ui->labelPersonas->text() + "\n" + str);
        qDebug() << str;
        temp = temp->siguiente;
    }
}
