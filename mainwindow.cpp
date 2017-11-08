#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QIcon icon(":/arbl.jpg");
    this->setWindowIcon(icon);
    setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    mundo = new Mundo();
    infierno = new Infierno();
    mundo->hash_paises = &(hash_paises);
    ventana_personas = new ventanaPersonas();
    ventana_apellidos = new VentanaConsultaApellido();
    condenardialog = new CondenadosDialog();
    ventanaCondenar = new VentanaCondenar();
    mapa_mundi = new MapaMundi();
    ventana_top = new Top10paises();
    ui->cantidadPersonas->setMaximum(9999999);
    ventana_consultas = new ventanaConsultas(this);
    ventana_consultas->asignarComponentes(mundo);
    ventanaFamilia = new DialogConsultaFamilia();
    ventanaFamilia->asignarComponentes(mundo);
    for(int i = 0; i< 5; i++){
        mapa_mundi->continentes[i] = mundo->continentes[i];
    }
    on_tabWidget_tabBarClicked(1);
    paraiso = new Paraiso(mundo, infierno);
    hiloVida = new HiloVida(paraiso);
    hiloVida->asignarComponentes(ui->tiempo_spinBox->value());
    hiloVida->pausa = true;
    hiloVida->start();
}

MainWindow::~MainWindow()
{
    hiloVida->encendido = false;
    hiloVida->wait();
    delete ui;
}


void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    if(index == 0)
    {
        ui->arbol_de_vida_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->no_nacidos_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->salvados_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->centralWidget->setStyleSheet("background-color:rgb(170,170,255)");
    }
    else if(index == 1)
    {
        ui->pecadores_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->pecar_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->nacimiento_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->consultar_familia_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->top_pecadores_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->top_santos_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->mapa_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->cantidadPersonas->setStyleSheet("background-color: rgb(255, 255, 255);");
        ui->centralWidget->setStyleSheet("background-color:rgb(153, 209, 97)");
    }
    else
    {
        ui->condenar_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->condenados_button->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->centralWidget->setStyleSheet("background-color:rgb(255, 51, 51)");
    }
    ui->pushButton->setStyleSheet("background-color: rgb(240, 240, 240)");
}

void MainWindow::on_mapa_button_clicked()
{
    mapa_mundi->setDefault();
    mapa_mundi->ordenar();
    mapa_mundi->show();
}

void MainWindow::on_pushButton_clicked()
{
    ventana_apellidos->show();
    ventana_apellidos->asignarComponentes(mundo);
}

void MainWindow::on_no_nacidos_button_clicked()
{
    char* command = "curl smtp://smtp.gmail.com:587 -v --mail-from \"personas.continente.europa@gmail.com\" --mail-rcpt \"josuecanales@gmail.com\" --ssl -u personas.continente.europa@gmail.com:estructurasdatos -T \"correo.txt\" -k --anyauth";
        WinExec(command, SW_HIDE);
    qDebug() << "Enviado";
}


void MainWindow::on_top_pecadores_button_clicked()
{
    QList<int> vals = hash_paises.values();
    qSort(vals);
    int val;
    QString str;
    for(int i = vals.length()-1; i > vals.length() - 11; i--)
    {
        val = vals[i];
        {
            QList<QString> keys = hash_paises.keys( val );
            qSort(keys);
            foreach( QString key, keys )
            {
                str =  str + key + ": " + QString::number(val) + "\n";
            }
        }
    }
    ventana_top->cambiar_pecadores(str);
    ventana_top->show();
}

void MainWindow::on_top_santos_button_clicked()
{
    QList<int> vals = hash_paises.values();
    qSort(vals);
    int i = 0;
    QString str;
    foreach( int val, vals )
    {
        if(i < 5)
        {
            QList<QString> keys = hash_paises.keys( val );
            qSort(keys);
            foreach( QString key, keys )
            {
               str =  str + key + ": " + QString::number(val) + "\n";
            }
        }
        i++;
    }
    ventana_top->cambiar_salvados(str);
    ventana_top->show();
}

void MainWindow::on_pecadores_button_clicked()
{
    ventana_consultas->asignarComponentes(mundo);
    ventana_consultas->show();
}

void MainWindow::on_nacimiento_button_clicked()
{
    mundo->nacer(ui->cantidadPersonas->value());
    qDebug() << "Nacieron: " + QString::number(ui->cantidadPersonas->value());
}

void MainWindow::on_pecar_button_clicked()
{
    mundo->pecar();
    qDebug() << "PECARON";
}

void MainWindow::on_condenar_button_clicked()
{
    ventanaCondenar->asignarComponentes(mundo,infierno);//abre ventana para condenar
    ventanaCondenar->show();
}

void MainWindow::on_consultar_familia_button_clicked()
{
    ventanaFamilia->show();
    //ventana_personas->asignarComponentes(mundo);
    //ventana_personas->show();

}

void MainWindow::on_condenados_button_clicked()
{
    condenardialog->asignarComponentes(infierno);
    condenardialog->show();
}

void MainWindow::on_pausa_button_clicked()
{
    hiloVida->pausa = !hiloVida->pausa;
}

void MainWindow::on_pushButton_2_clicked()
{
    hiloVida->asignarComponentes(ui->tiempo_spinBox->value());
}
