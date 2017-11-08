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
