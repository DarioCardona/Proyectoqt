#include "venta.h"
#include "ui_venta.h"
#include <vector>
#include "carro.h"
#include"pickups.h"
#include"turismo.h"
#include"camioneta.h"
#include <string>
#include <QStringList>
#include <iostream>
using namespace std;

venta::venta(vector<carro*>* car, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::venta)
{
    ui->setupUi(this);
    ca=car;
    QPixmap pic2("/home/dariocardona/proyecto/fam.jpeg");
    ui->lb_pic->setPixmap(pic2);
}

venta::~venta()
{
    delete ui;
}

void venta::on_pushButton_clicked()
{
     ui->cb_car->clear();
    string show;
    if(ui->rb_camioneta->isChecked()){
        show="Camioneta";
    } else if(ui->rb_turismo->isChecked()){
        show="Turismo";
    } else if(ui->rb_pickup->isChecked()){
        show="Pick-up";
    }
    int cont=0;


    for(int i=0;i<ca->size();i++){
        carro* temporal;
        temporal=ca->at(i);

        if(temporal->gettipo()==(show)){
            cout<<"entro "<<endl;
            cont++;
           // Lista.append(QString(temporal->toString().c_str()));
           ui->cb_car->addItem((temporal->toString()).c_str());
        }
       // ui->cb_car->addItems(Lista);

    }
    if(cont==0){

        ui->cb_car->addItem("Lo sentimos no hay de ese tipo de carro");
    }
}

void venta::on_pushButton_2_clicked()
{

    ca->erase(ca->begin()+ui->cb_car->currentIndex());
    ui->cb_car->clear();
}

void venta::on_pushButton_3_clicked()
{
    this->close();
}
