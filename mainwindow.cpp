#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QHash<QString , int> hash_paises;
    mundo = new Mundo();
    mundo->hash_paises = &(hash_paises);
    ventana_personas = new ventanaPersonas();
    ventana_apellidos = new VentanaConsultaApellido();
    mapa_mundi = new MapaMundi();
    ventana_top = new Top10paises();
    on_tabWidget_tabBarClicked(1);

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
}

void MainWindow::on_no_nacidos_button_clicked()
{
    char* command = "curl smtp://smtp.gmail.com:587 -v --mail-from \"americaSkrtSkrt@gmail.com\" --mail-rcpt \"josuecanales0@gmail.com\" --ssl -u personas.continente.europa@gmail.com:estructurasdatos -T \"correo.txt\" -k --anyauth";
        WinExec(command, SW_HIDE);

}

void MainWindow::on_top_pecadores_button_clicked()
{
    /*
    QList<int> vals = hash.values();
    qSort( vals );
    foreach( int val, vals )
    {
        QList<QString> keys = hash.keys( val );
        qSort( keys );
        foreach( QString key, keys )
        {
            qDebug() << val << ":" << key;
        }
    }
    */
    ventana_top->cambiar_pecadores();
    ventana_top->show();
}

void MainWindow::on_top_santos_button_clicked()
{
    ventana_top->cambiar_salvados();
    ventana_top->show();
}
