#ifndef SALVADOSDIALOG_H
#define SALVADOSDIALOG_H

#include <QDialog>
#include "dialogconsultafamilia.h"

namespace Ui {
class SalvadosDialog;
}

class SalvadosDialog : public QDialog
{
    Q_OBJECT

public:
    Paraiso* paraiso;
    GeneradorArchivos* archivos;
    explicit SalvadosDialog(QWidget *parent = 0);
    ~SalvadosDialog();
    void asignarComponetnes(Paraiso* p, GeneradorArchivos* a);
    void update();

private:
    Ui::SalvadosDialog *ui;
};

#endif // SALVADOSDIALOG_H
