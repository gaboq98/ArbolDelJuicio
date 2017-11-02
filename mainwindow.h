#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <windows.h>
#include <QMainWindow>
#include "ventanapersonas.h"
#include "mapamundi.h"
#include "ventanaconsultaapellido.h"
#include "top10paises.h"


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
    Top10paises* ventana_top;
    Mundo* mundo;
    QHash<QString , int> hash_paises;


private slots:
    void on_tabWidget_tabBarClicked(int index);

    void on_mapa_button_clicked();

    void on_pushButton_clicked();

    void on_no_nacidos_button_clicked();

    void on_top_pecadores_button_clicked();

    void on_top_santos_button_clicked();

    void on_pecadores_button_clicked();

    void on_nacimiento_button_clicked();

    void on_pecar_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
