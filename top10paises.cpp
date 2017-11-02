#include "top10paises.h"
#include "ui_top10paises.h"

Top10paises::Top10paises(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Top10paises)
{
    ui->setupUi(this);
}

Top10paises::~Top10paises()
{
    delete ui;
}

void Top10paises::cambiar_pecadores(QString str)
{
    ui->Qtitulo->setText("Top 10 países más pecadores");
    ui->Qtext->clear();
    ui->Qtext->appendPlainText(str);
}

void Top10paises::cambiar_salvados(QString str)
{
    ui->Qtitulo->setText("Top 5 países menos pecadores");
    ui->Qtext->clear();
    ui->Qtext->appendPlainText(str);
}
