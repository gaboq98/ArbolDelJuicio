#include "salvadosdialog.h"
#include "ui_salvadosdialog.h"

SalvadosDialog::SalvadosDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SalvadosDialog)
{
    ui->setupUi(this);
}

SalvadosDialog::~SalvadosDialog()
{
    delete ui;
}

void SalvadosDialog::asignarComponetnes(Paraiso *p, GeneradorArchivos *a)
{
    paraiso = p;
    archivos = a;
}

void SalvadosDialog::update()
{
    string result = "";
    string apellidos[1000] = archivos->apellidos;
    for(int i = 0; i < 1000; i++)
    {
        for(Persona* p: paraiso->personas)
        {
            if(apellidos[i].compare(p->apellido) == 0){
                result += tmp->persona->nombre + " " + tmp->persona->apellido + " "
                        + tmp->persona->pais  + " " + tmp->persona->creencia + "\n\n\n";
            }
        }
    }

}
