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
    void agregarComponentes(Paraiso *p);
    Paraiso *paraiso;

private slots:
    void on_crear_clicked();

private:
    Ui::VentanaParaiso *ui;
};

#endif // VENTANAPARAISO_H
