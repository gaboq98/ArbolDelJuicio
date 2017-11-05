#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mundo = new Mundo();
    infierno = new Infierno();
    mundo->hash_paises = &(hash_paises);
    ventana_personas = new ventanaPersonas();
    ventana_apellidos = new VentanaConsultaApellido();
    condenardialog = new CondenadosDialog();
    ventanaCondenar = new VentanaCondenar();
    mapa_mundi = new MapaMundi();
    ventana_top = new Top10paises();
    on_tabWidget_tabBarClicked(1);
    ui->cantidadPersonas->setMaximum(9999999);
    ventana_consultas = new ventanaConsultas(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    if(index == 0)
    {
        ui->tabWidget->setStyleSheet("background-color:rgb(170,170,255)");
    }
    else if(index == 1)
    {
        ui->tabWidget->setStyleSheet("background-color:rgb(255, 111, 31)");
    }
    else
    {
        ui->tabWidget->setStyleSheet("background-color:rgb(180, 0, 0)");
    }
}

void MainWindow::on_mapa_button_clicked()
{
    mapa_mundi->show();
}

void MainWindow::on_pushButton_clicked()
{
    ventana_apellidos->show();
    ventana_apellidos->asignarComponentes(mundo);
}

void MainWindow::on_no_nacidos_button_clicked()
{
    char* command = "curl smtp://smtp.gmail.com:587 -v --mail-from \"personas.continente.europa@gmail.com\" --mail-rcpt \"gaboq980@gmail.com\" --ssl -u personas.continente.europa@gmail.com:estructurasdatos -T \"correo.txt\" -k --anyauth";
        WinExec(command, SW_HIDE);
}


void MainWindow::on_top_pecadores_button_clicked()
{
    QList<int> vals = hash_paises.values();
    qSort( vals );
    int val;
    QString str;
    for(int i = vals.length()-1; i > vals.length() - 11; i--)
    {
        val = vals[i];
        {
            QList<QString> keys = hash_paises.keys( val );
            qSort( keys );
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
    qSort( vals );
    int i = 0;
    QString str;
    foreach( int val, vals )
    {
        if(i < 5)
        {
            QList<QString> keys = hash_paises.keys( val );
            qSort( keys );
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
    ventana_personas->asignarComponentes(mundo);
    ventana_personas->show();
}

void MainWindow::on_condenados_button_clicked()
{
    condenardialog->asignarComponentes(infierno);
    condenardialog->show();
}
