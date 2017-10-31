#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ventanapersonas.h"
#include "mapamundi.h"
#include "ventanaconsultaapellido.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    ventanaPersonas* ventana_personas;
    MapaMundi* mapa_mundi;
    VentanaConsultaApellido* ventana_apellidos;



private slots:
    void on_tabWidget_tabBarClicked(int index);

    void on_mapa_button_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
