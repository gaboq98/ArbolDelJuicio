#include "ventanaconsultas.h"
#include "ui_ventanaconsultas.h"

ventanaConsultas::ventanaConsultas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventanaConsultas)
{
    ui->setupUi(this);
    buttonGroup = new QButtonGroup(this);

    buttonGroup->addButton(ui->consu_apellido);
    buttonGroup->setId(ui->consu_apellido, 0);

    buttonGroup->addButton(ui->consu_continente);
    buttonGroup->setId(ui->consu_continente, 1);

    buttonGroup->addButton(ui->consu_creencia);
    buttonGroup->setId(ui->consu_creencia, 2);

    buttonGroup->addButton(ui->consu_paises);
    buttonGroup->setId(ui->consu_paises, 3);

    buttonGroup->addButton(ui->consu_profesion);
    buttonGroup->setId(ui->consu_profesion, 4);

    pecadores = new Lista();
}

ventanaConsultas::~ventanaConsultas()
{
    delete ui;
}

void ventanaConsultas::asignarComponentes(Mundo *_mundo)
{
    this->mundo = _mundo;
    Nodo *temp = mundo->personas->primerNodo;
    while(temp != NULL) {
        pecadores->insertarPecador(temp->persona);
        temp = temp->siguiente;
    }

    string apellidos[2000] = mundo->archivos->apellidos;
    string pais[100] = mundo->archivos->paises;
    string creencias[10] = mundo->archivos->creencias;
    string profesiones[50] = mundo->archivos->profesiones;
    string continentes[5] = {"America", "Europa", "Asia", "Oceania", "Africa"};

    QStringList listaPaises;
    QStringList listaApellidos;
    QStringList listaContinentes;
    QStringList listaCreencias;
    QStringList listaProfesiones;

    for(int i = 0; i < 2000; i++){
        if(i < 100) {
            if(i < 50) {
                if(i < 10) {
                    if(i < 5) {
                        listaContinentes.append(QString::fromStdString(continentes[i]));
                    }
                    listaCreencias.append(QString::fromStdString(creencias[i]));
                }
                listaProfesiones.append(QString::fromStdString(profesiones[i]));
            }
            listaPaises.append(QString::fromStdString(pais[i]).mid(1));
        }
        listaApellidos.append(QString::fromStdString(apellidos[i]));
    }

    ui->apellidos_comboBox->addItems(listaApellidos);
    ui->paises_comboBox->addItems(listaPaises);
    ui->continentes_comboBox->addItems(listaContinentes);
    ui->creencias_comboBox->addItems(listaCreencias);
    ui->profesiones_comboBox->addItems(listaProfesiones);
}


void ventanaConsultas::on_pushButton_clicked()
{
    int id = buttonGroup->checkedId();
    ui->plainTextEdit->appendPlainText(QString::number(id));
    switch (id) {
        //Nodo *temp = pecadores->primerNodo;
        case 0:
        /*
            while(temp != NULL) {
                temp = temp->siguiente;
            }
            */
            break;
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        default:
            break;
    }
}
