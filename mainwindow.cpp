#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Mundo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Mundo *m = new Mundo();
    m->imprimir();

}

MainWindow::~MainWindow()
{
    delete ui;
}
