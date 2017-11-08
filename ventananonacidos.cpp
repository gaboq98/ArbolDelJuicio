#include "ventananonacidos.h"
#include "ui_ventananonacidos.h"

VentanaNoNacidos::VentanaNoNacidos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaNoNacidos)
{
    ui->setupUi(this);
}

VentanaNoNacidos::~VentanaNoNacidos()
{
    delete ui;
}

void VentanaNoNacidos::agregarComponentes(Paraiso *p)
{
    paraiso = p;
}

void VentanaNoNacidos::on_crear_clicked()
{
    ui->textEdit_no_nacidos->setText("");
    for(int i = 0; i < paraiso->no_nacidos.length(); i++){
        QString str =  QString::fromStdString(to_string(paraiso->no_nacidos.at(i)) + "\n\n" );
        ui->textEdit_no_nacidos->append(str);
    }
}





