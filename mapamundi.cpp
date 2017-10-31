#include "mapamundi.h"
#include "ui_mapamundi.h"

MapaMundi::MapaMundi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MapaMundi)
{
    ui->setupUi(this);
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


void MapaMundi::aumentar(int r, int g, int b)
{
    if(g == 255 && r > 0 && r == b ){
        r -= 2;
        b -= 2;
        if(r < 0){
            r = b = 0;
            g -= 1;
        }
    }else if(r < 255){
        r += 2;
        if (r > 255){
            r = 255;
        }
    }else if(g > 0 && r == 255){
        g -= 2;
        if(g < 0){
            g = 0;
        }
    }else{
        r -= 2;
        if(r < 0){
            r = 0;
        }
    }
}
