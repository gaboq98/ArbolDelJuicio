#ifndef DIALOGCONSULTAFAMILIA_H
#define DIALOGCONSULTAFAMILIA_H
#include "ventanaconsultas.h"
#include <QTreeWidgetItem>

#include <QDialog>

namespace Ui {
class DialogConsultaFamilia;
}

class DialogConsultaFamilia : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConsultaFamilia(QWidget *parent = 0);
    ~DialogConsultaFamilia();
    Mundo* mundo;
    void addSon(QTreeWidgetItem* item, Persona* p);
    void addRoot(Persona* p);
    QTreeWidgetItem* createItem(Persona* p, bool isRoot);
    void asignarComponentes(Mundo* mundo);

private slots:
    void on_consultar_button_clicked();

private:
    Ui::DialogConsultaFamilia *ui;
};

#endif // DIALOGCONSULTAFAMILIA_H
