#include "agregarcarros.h"
#include "ui_agregarcarros.h"
#include <vector>
#include "carro.h"
#include"pickups.h"
#include"turismo.h"
#include"camioneta.h"
#include "qmessagebox.h"
#include <iostream>
using namespace std;

agregarcarros::agregarcarros(vector<carro*>* car,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregarcarros)
{
    ca=car;
    ui->setupUi(this);
    QPixmap pic2("/home/dariocardona/proyecto/3.0jpeg");
    ui->lb_pick->setPixmap(pic2);
    QPixmap pic3("/home/dariocardona/proyecto/fortuner.jpeg");
    ui->lb_cam->setPixmap(pic3);
    QPixmap pic4("/home/dariocardona/proyecto/civic.jpeg");
    ui->lb_tur->setPixmap(pic4);
}

agregarcarros::~agregarcarros()
{

    delete ui;
}

void agregarcarros::on_b_pickups_clicked()
{

    ca->push_back( new pickups(ui->ln_marca->text().toStdString(), ui->sp_precio->value(),ui->ln_modelo->text().toStdString()
                           , ui->sp_ano->value(),ui->ln_color->text().toStdString(),
                            ui->ln_cabina->text().toStdString(),
                               ui->ln_traccion->text().toStdString()) );
    QMessageBox::information(this, "Pick-up",ui->ln_marca->text(),ui->ln_modelo->text());
    ui->ln_marca->setText(NULL);
    ui->sp_precio->setValue(NULL);
    ui->ln_modelo->setText(NULL);
    ui->sp_ano->setValue(NULL);
    ui->ln_color->setText(NULL);
    ui->ln_cabina->setText(NULL);
    ui->ln_traccion->setText(NULL);

}

void agregarcarros::on_b_turismo_clicked()
{
    ca->push_back( new turismo(ui->ln_marca->text().toStdString(), ui->sp_precio->value(),ui->ln_modelo->text().toStdString()
                           , ui->sp_ano->value(),ui->ln_color->text().toStdString(),
                            ui->sp_pasajeros->value(),ui->sp_puertas->value()) );
  QMessageBox::information(this, "Turismo",ui->ln_marca->text(),ui->ln_modelo->text());

  ui->ln_marca->setText(NULL);
  ui->sp_precio->setValue(NULL);
  ui->ln_modelo->setText(NULL);
  ui->sp_ano->setValue(NULL);
  ui->ln_color->setText(NULL);
   ui->sp_pasajeros->setValue(NULL);
    ui->sp_puertas->setValue(NULL);
}

void agregarcarros::on_b_camioneta_clicked()
{
    ca->push_back( new camioneta (ui->ln_marca->text().toStdString(), ui->sp_precio->value(),ui->ln_modelo->text().toStdString()
                           , ui->sp_ano->value(),ui->ln_color->text().toStdString(),
                            ui->ln_tamao->text().toStdString(),ui->sp_acientos->value() ) );
    QMessageBox::information(this, "Camioneta",ui->ln_marca->text(),ui->ln_modelo->text());

    ui->ln_marca->setText(NULL);
    ui->sp_precio->setValue(NULL);
    ui->ln_modelo->setText(NULL);
    ui->sp_ano->setValue(NULL);
    ui->ln_color->setText(NULL);
    ui->sp_acientos->setValue(NULL);
    ui->ln_tamao->setText(NULL);

    cout<<ca->at(ca->size()-1)->toString()<<endl;
    cout<<ca->size()<<"tamaño"<<endl;
}

//void agregarcarros::on_Salir_clicked()
//{

//}

void agregarcarros::on_Salir_clicked()
{
    this->close();
}
