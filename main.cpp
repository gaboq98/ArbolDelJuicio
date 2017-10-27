#include <iostream>
#include "mainwindow.h"
#include <QApplication>
#include "Persona.h"


using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qRegisterMetaType<QVector<int> >("QVector<int>");
    qRegisterMetaType<QVector<Persona*> >("QVector<Persona*>");
    return a.exec();
}
