#ifndef VENTANACONDENAR_H
#define VENTANACONDENAR_H

#include <QDialog>

namespace Ui {
class VentanaCondenar;
}

class VentanaCondenar : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaCondenar(QWidget *parent = 0);
    ~VentanaCondenar();

private:
    Ui::VentanaCondenar *ui;
};

#endif // VENTANACONDENAR_H
