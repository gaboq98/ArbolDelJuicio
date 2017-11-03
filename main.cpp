#include <iostream>
#include "mainwindow.h"
#include <QApplication>
#include <time.h>
#include <Windows.h>
using namespace std;


int main(int argc, char *argv[])
{
    srand(GetTickCount());
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qRegisterMetaType<QVector<int> >("QVector<int>");
    qRegisterMetaType<QHash<string, int> >("QHah<string, int>");
    qRegisterMetaType<QHash<string, Lista*> >("QHah<string, Lista*>");
    qRegisterMetaType<QVector<Persona*> >("QVector<Persona*>");

    return a.exec();
}
