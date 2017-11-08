#ifndef VENTANAPARAISO_H
#define VENTANAPARAISO_H
#include <QtCore>
#include <QtGui>
#include <QMainWindow>
#include "dialogconsultafamilia.h"


namespace Ui {
class VentanaParaiso;
}

class VentanaParaiso : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaParaiso(QWidget *parent = 0);
    ~VentanaParaiso();
<<<<<<< HEAD
    void agregarComponentes(Paraiso *p);
    Paraiso *paraiso;

private slots:
    void on_crear_clicked();
=======
    void agregarRaiz(QString nombre, QString descripcion);
    void agregarHijo(QString nombre, QString descripcion);
>>>>>>> 34f85b10c117d7d588662873335e2213dc5498ae

private:
    Ui::VentanaParaiso *ui;
};

#endif // VENTANAPARAISO_H
