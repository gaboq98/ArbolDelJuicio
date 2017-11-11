#include "ventanaconsultas.h"
#include "ui_ventanaconsultas.h"

ventanaConsultas::ventanaConsultas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventanaConsultas)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
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
        totalPecados += temp->persona->total_pecados;
        pecadores->insertarPecador(temp->persona);
        temp = temp->siguiente;
    }

    string apellidos[1000] = mundo->archivos->apellidos;
    string pais[100] = mundo->archivos->paises;
    string creencias[10] = mundo->archivos->creencias;
    string profesiones[50] = mundo->archivos->profesiones;
    string continentes[5] = {"America", "Europa", "Asia", "Oceania", "Africa"};

    QStringList listaPaises;
    QStringList listaApellidos;
    QStringList listaContinentes;
    QStringList listaCreencias;
    QStringList listaProfesiones;

    for(int i = 0; i < 1000; i++){
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
    ui->continentes_comboBox->addItems(listaContinentes);
    ui->creencias_comboBox->addItems(listaCreencias);
    ui->paises_comboBox->addItems(listaPaises);
    ui->profesiones_comboBox->addItems(listaProfesiones);

}

double ventanaConsultas::porcentaje(int pecados)
{
    double result = (pecados * 100.0) / totalPecados;
    return abs(result);
}

void ventanaConsultas::on_pushButton_clicked()
{
    ui->plainTextEdit->setPlainText("");
    if(totalPecados == 0) {
        return;
    }
    int id = buttonGroup->checkedId();
    Nodo *temp = pecadores->primerNodo;
    switch (id) {
        case 0:     //Apellidos
            while(temp != NULL) {
                Persona *p = temp->persona;
                if(temp->persona->apellido.compare((ui->apellidos_comboBox->currentText().toStdString())) == 0) {
                    QString str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " |  "
                            + to_string(p->total_pecados) + "       " + to_string(porcentaje(p->total_pecados)) + "%");
                    ui->plainTextEdit->appendPlainText(str + "\n\n");
                }
                temp = temp->siguiente;
            }
            break;

        case 1:     //Continentes
            while(temp != NULL) {
                Persona *p = temp->persona;
                string current = ui->continentes_comboBox->currentText().toStdString();
                transform(current.begin(), current.end(), current.begin(), ::tolower);
                string continente = temp->persona->correoElectonico.substr(20, temp->persona->correoElectonico.length());
                if(continente.compare(current) == 0) {
                    QString str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " + to_string(p->hijos.size()) + " hijos" + " |  "
                            + to_string(p->total_pecados) + "       " + to_string(porcentaje(p->total_pecados)) + "%");
                    ui->plainTextEdit->appendPlainText(str + "\n\n");
                }
                temp = temp->siguiente;
            }
            break;

        case 2:     //Creencias
            while(temp != NULL) {
                Persona *p = temp->persona;
                if(temp->persona->creencia.compare((ui->creencias_comboBox->currentText().toStdString())) == 0) {
                    QString str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " |  "
                                                          + to_string(p->total_pecados) + "       " + to_string(porcentaje(p->total_pecados)) + "%");
                    ui->plainTextEdit->appendPlainText(str + "\n\n");
                }
                temp = temp->siguiente;
            }
            break;

        case 3:     //Paises
            while(temp != NULL) {
                Persona *p = temp->persona;
                if(temp->persona->pais.compare((ui->paises_comboBox->currentText().toStdString())) == 0) {
                    QString str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " |  "
                            + to_string(p->total_pecados) + "       " + to_string(porcentaje(p->total_pecados)) + "%");
                    ui->plainTextEdit->appendPlainText(str + "\n\n");
                }
                temp = temp->siguiente;
            }
            break;
        case 4:     //Profesiones
        while(temp != NULL) {
                Persona *p = temp->persona;
                if(temp->persona->profesion.compare((ui->profesiones_comboBox->currentText().toStdString())) == 0) {
                    QString str =  QString::fromStdString(to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " |  "
                            + to_string(p->total_pecados) + "       " + to_string(porcentaje(p->total_pecados)) + "%");
                    ui->plainTextEdit->appendPlainText(str + "\n\n");
                }
                temp = temp->siguiente;
            }
            break;

        default:
            break;
    }
}
