#include <iostream>
#include "mainwindow.h"
#include <QApplication>


using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    srand(time(0));
    MainWindow w;
    w.show();
    qRegisterMetaType<QVector<int> >("QVector<int>");
    return a.exec();
}
