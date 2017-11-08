#include "ventanaparaiso.h"
#include "ui_ventanaparaiso.h"

VentanaParaiso::VentanaParaiso(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaParaiso)
{
    ui->setupUi(this);
}

VentanaParaiso::~VentanaParaiso()
{
    delete ui;
}

void VentanaParaiso::agregarComponentes(Paraiso *p)
{
    paraiso = p;
}

void VentanaParaiso::on_crear_clicked()
{
    QVector<int> ids;
    Nodo *temp = paraiso->personas->primerNodo;
    while(temp != NULL) {
        Persona *p = temp->persona;
        ids.append(p->id);
        temp = temp->siguiente;
    }
    for(int i = 0; i < paraiso->no_nacidos.length(); i++){
        ids.append(paraiso->no_nacidos.at(i));
    }
    qSort( ids );

    ui->textEdit_personas->setText("");
    for(int e = 0; e < ids.length(); e++) {
        QString str =  QString::fromStdString(to_string(ids.at(e)));
        ui->textEdit_personas->append(str);
        ui->textEdit_personas->append("\n");
    }
}




