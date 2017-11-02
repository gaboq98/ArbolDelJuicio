#ifndef TOP10PAISES_H
#define TOP10PAISES_H

#include <QDialog>

namespace Ui {
class Top10paises;
}

class Top10paises : public QDialog
{
    Q_OBJECT

public:
    explicit Top10paises(QWidget *parent = 0);
    ~Top10paises();
    void cambiar_pecadores(QString str);
    void cambiar_salvados(QString str);

private:
    Ui::Top10paises *ui;
};

#endif // TOP10PAISES_H
