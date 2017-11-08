#include "dialogconsultafamilia.h"
#include "ui_dialogconsultafamilia.h"

DialogConsultaFamilia::DialogConsultaFamilia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConsultaFamilia)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(5);
}

DialogConsultaFamilia::~DialogConsultaFamilia()
{
    delete ui;
}

void DialogConsultaFamilia::addSon(QTreeWidgetItem *item, Persona *p)
{
    QTreeWidgetItem* itm = createItem(p,false);
    item->addChild(itm);
    if(p->hijos.size() == 0)
    {
        return;
    }
    else
    {
        for(Persona *h: p->hijos)
        {
            addSon(itm, h);
        }
    }
}

QTreeWidgetItem* DialogConsultaFamilia::createItem(Persona *p, bool isRoot)
{
    QTreeWidgetItem* item;
    if(isRoot)
        item = new QTreeWidgetItem(ui->treeWidget);
    else
        item = new QTreeWidgetItem();
    item->setText(0, QString::fromStdString(p->nombre));
    item->setText(1, QString::fromStdString(p->apellido));
    item->setText(2, QString::number(p->id));
    item->setText(3, QString::fromStdString(p->profesion));
    item->setText(4, QString::fromStdString(p->creencia));
    return item;
}

void DialogConsultaFamilia::addRoot(Persona *p)
{
    QTreeWidgetItem* itm = createItem(p,true);
    for(Persona *h: p->hijos)
    {
        addSon(itm, h);
    }
    ui->treeWidget->addTopLevelItem(itm);
}

void DialogConsultaFamilia::on_consultar_button_clicked()
{
    ui->treeWidget->clear();
    if(ui->input->text() != "")
    {
        Nodo* nodo = mundo->personas->buscar(ui->input->text().toInt());
        if(nodo != nullptr)
        {
            Persona* p = nodo->persona;
            addRoot(p);
        }
        else
        {
            QTreeWidgetItem* item = new QTreeWidgetItem(ui->treeWidget);
            item->setText(0, "No");
            item->setText(1, "se");
            item->setText(2, "encontró");
            item->setText(3, "la");
            item->setText(4, "persona");
            ui->treeWidget->addTopLevelItem(item);
        }
    }
    else
    {
        QTreeWidgetItem* item = new QTreeWidgetItem(ui->treeWidget);
        item->setText(0, "No");
        item->setText(1, "se");
        item->setText(2, "encontró");
        item->setText(3, "la");
        item->setText(4, "persona");
        ui->treeWidget->addTopLevelItem(item);
    }
}

void DialogConsultaFamilia::asignarComponentes(Mundo *mundo)
{
    this->mundo = mundo;
}
