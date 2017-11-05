#include "mapamundi.h"
#include "ui_mapamundi.h"

MapaMundi::MapaMundi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MapaMundi)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    setDefault();
}

MapaMundi::~MapaMundi()
{
    delete ui;

}

void MapaMundi::cambiar_color(int r, int g, int b, int i){
    if(i == AMERICA){
        ui->fondo_america->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
    }else if(i == AFRICA){
        ui->fondo_africa->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
        ui->fondo_africa1->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
    }else if(i == ASIA){
        ui->fondo_asia->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
        ui->fondo_asia1->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
        ui->fondo_asia3->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
        ui->fondo_asia4->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
        ui->fondo_asia5->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
        ui->fondo_asia6->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
    }else if(i == EUROPA){
        ui->fondo_europa->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
        ui->fondo_europa1->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
    }else{
        ui->fondo_oceania->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
        ui->fondo_oceania3->setStyleSheet("background-color: rgb(" +QString::number(r) + ","+ QString::number(g) + "," + QString::number(b) + ")");
    }
}

QString to_str(int i){
    if(i == 0)
        return "AMERICA";
    if(i == 1)
        return "AFRICA";
    if(i == 4)
        return "ASIA";
    if(i == 3)
        return "OCEANIA";
    return "EUROPA";
}


void MapaMundi::aumentar(int *r, int *g, int *b)
{
    if(*g == 0 && *b == 0 && *r != 255){
            *r -= 40;
            if(*r < 0){
                *r= 0;
            }
    }else if(*g == 255 && *r > 0 && *r == *b){
        *r -= 40;
        *b -= 40;
        if(*r < 0){
            *r = *b = 0;
            *g -= 1;
        }
    }else if(*r < 255 ){
        *r += 40;
        if (*r > 255){
            *r = 255;
        }
    }else if(*g > 0 && *r == 255){
        *g -= 40;
        if(*g < 0){
            *g = 0;
            *r -= 1;
        }
    }
}

void MapaMundi::ordenar()
{
    Continente* aux[5];
    ListaCont* sort = new ListaCont();
    for(Continente* c: continentes){
        sort->insertar(c);
    }
    NodoCont* n = sort->pn;
    QString ranking = "";
    for(int i = 0; i < 5; i++){
        ranking += to_str(n->c->nombre).append(":").append(QString::number(n->c->cantidad_pecados)).append("\n") ;
        aux[i] = n->c;
        n = n->siguiente;
    }
    QString str = "\n\n\n\n";
    ui->label->setText(str.append(ranking));
    colorear(aux);
}

void MapaMundi::colorear(Continente *c[])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j=0; j < posiciones[i]; j++ )
        {
            colorear(c[i]->nombre);
        }
    }
}

void MapaMundi::colorear(int opcion)
{
    int *r,*g,*b;
    if(opcion == AMERICA){
        r = &r_am; g = &g_am; b = &b_am;
    }else if(opcion == AFRICA){
        r = &r_af; g = &g_af; b = &b_af;
    }else if(opcion == ASIA){
        r = &r_as; g = &g_as; b = &b_as;
    }else if(opcion == EUROPA){
        r = &r_eu; g = &g_eu; b = &b_eu;
    }else{
        r = &r_oc; g = &g_oc; b = &b_oc;
    }
    aumentar(r,g,b);
    cambiar_color(*r,*g,*b,opcion);
}

void MapaMundi::setDefault()
{
    QString white = "background-color: rgb(255,255,255)";
    ui->fondo_africa->setStyleSheet(white);
    ui->fondo_africa1->setStyleSheet(white);
    ui->fondo_america->setStyleSheet(white);
    ui->fondo_asia->setStyleSheet(white);
    ui->fondo_asia1->setStyleSheet(white);
    ui->fondo_asia3->setStyleSheet(white);
    ui->fondo_asia4->setStyleSheet(white);
    ui->fondo_asia5->setStyleSheet(white);
    ui->fondo_asia6->setStyleSheet(white);
    ui->fondo_europa->setStyleSheet(white);
    ui->fondo_europa1->setStyleSheet(white);
    ui->fondo_oceania->setStyleSheet(white);
    ui->fondo_oceania3->setStyleSheet(white);
    r_am = r_eu = r_af = r_oc = r_as = g_am = g_eu = g_af = g_oc = g_as = b_am = b_eu = b_af = b_oc = b_as = 255;
}
