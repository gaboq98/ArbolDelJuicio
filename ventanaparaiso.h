#ifndef VENTANAPARAISO_H
#define VENTANAPARAISO_H
#include <QtCore>
#include <QtGui>
#include <QMainWindow>

namespace Ui {
class VentanaParaiso;
}

class VentanaParaiso : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaParaiso(QWidget *parent = 0);
    ~VentanaParaiso();
    void agregarRaiz(QString nombre, QString descripcion);
    void agregarHijo(QTreeW ,QString nombre, QString descripcion);

private:
    Ui::VentanaParaiso *ui;
};

#endif // VENTANAPARAISO_H
