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
<<<<<<< HEAD
    mundo->nacer(10000);
    Nodo *temp = mundo->personas->primerNodo;
    int i = 1;
    while(temp != NULL) {
        ui->textPersonas->append("\n");
        Persona *p = temp->persona;
        QString str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
                p->profecion + " " + p->creencia + " " + p->correoElectonico + " " + p->horaYFecha);
        ui->textPersonas->append(QString::number(i++));
        ui->textPersonas->append(str);
        for(int i = 0; i < p->hijos.length(); i++) {
            ui->textPersonas->append(QString::number(p->hijos[i]->id));
        }
        //qDebug() << str;
=======
    QString str;
    for(int i = 0; i < 10; i++) {
        Nodo *temp = mundo->personas->primerNodo;
        Persona *p = temp->persona;
        str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
               p->profesion + " " + p->creencia + " " + p->correoElectonico + " " + p->horaYFecha);
        ui->labelPersonas->setText(ui->labelPersonas->text() + "\n" + str);
>>>>>>> 8abe3cfa9f47bdc6fed9454b83f646fd47ec2156
        temp = temp->siguiente;
    }
    mundo->personas->imprimirLista();
}
