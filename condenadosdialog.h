#ifndef CONDENADOSDIALOG_H
#define CONDENADOSDIALOG_H

#include <QDialog>
#include "ventanacondenar.h"

namespace Ui {
class CondenadosDialog;
}

class CondenadosDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CondenadosDialog(QWidget *parent = 0);
    ~CondenadosDialog();
    Infierno* infierno;

    void asignarComponentes(Infierno* infierno);
private:
    Ui::CondenadosDialog *ui;
};

#endif // CONDENADOSDIALOG_H
