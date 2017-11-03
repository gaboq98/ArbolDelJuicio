#include "ventanacondenar.h"
#include "ui_ventanacondenar.h"

VentanaCondenar::VentanaCondenar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaCondenar)
{
    ui->setupUi(this);

}

VentanaCondenar::~VentanaCondenar()
{
    delete ui;
}

void VentanaCondenar::asignarComponentes(Mundo *mundo,Infierno* infierno)
{
    this->mundo = mundo;
    this->infierno = infierno;
    string pais[100] = mundo->archivos->paises;

    QStringList listaPaises;
    for(int i = 0; i < 100; i++){
        listaPaises.append(QString::fromStdString(pais[i]).mid(1));
    }
    ui->paises_box->addItems(listaPaises);
}

void VentanaCondenar::on_condenar_button_clicked()
{
    QString pais_condenado = ui->paises_box->currentText();
    Nodo* tmp = mundo->lista_paises[pais_condenado]->primerNodo;
    Lista* pecadores = new Lista();
    int total_del_pais = 0;
    for(tmp; tmp != nullptr; tmp = tmp->siguiente){
        pecadores->insertarPecador(tmp->persona);
        total_del_pais++;
    }
    int porcentaje = total_del_pais * 0.25;
    tmp = pecadores->primerNodo;
    for(int i = 0; i < porcentaje; i ++){
        Persona* p = mundo->eliminar(tmp->persona->id);
        infierno->agregar(p);
        tmp = tmp->siguiente;
    }
    //*/
}
