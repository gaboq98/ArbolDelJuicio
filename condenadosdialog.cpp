#include "condenadosdialog.h"
#include "ui_condenadosdialog.h"

CondenadosDialog::CondenadosDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CondenadosDialog)
{
    ui->setupUi(this);
}

void CondenadosDialog::asignarComponentes(Infierno *infierno)
{
    this->infierno = infierno;
    Nodo* tmp;
    for (tmp = infierno->pecadores->primerNodo; tmp != nullptr; tmp = tmp->siguiente){
        QString str = QString::fromStdString(tmp->persona->nombre + " ") + QString::fromStdString(tmp->persona->apellido + " ")
                       + QString::fromStdString(tmp->persona->pais  + " ") + QString::fromStdString(tmp->persona->creencia + "\n")
                 + QString::number(tmp->persona->total_pecados);
        ui->textEdit->append(str);
    }
}

CondenadosDialog::~CondenadosDialog()
{
    delete ui;
}
