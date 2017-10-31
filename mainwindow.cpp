#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ventana_personas = new ventanaPersonas();
    ventana_apellidos = new VentanaConsultaApellido();
    mapa_mundi = new MapaMundi();


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
