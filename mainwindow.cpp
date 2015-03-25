#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "venta.h"
#include <vector>
#include <iostream>
#include "carro.h"

using std::cout;
using std::endl;

MainWindow::MainWindow(vector<carro*>* car,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ca=car;
    ui->setupUi(this);
    QPixmap pic1("/home/dariocardona/proyecto/sim.jpeg");
    ui->lb_pic1->setPixmap(pic1);


}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    login log(ca,0);
    log.setModal(true);
    log.exec();
}

void MainWindow::on_pushButton_clicked()
{
    cout << "antes de imprimir en boton iniciar" << endl;
   venta log(ca,0);
   for(int i = 0; i<ca->size(); i++){
        cout << "C_a en maninwindow: " << ((carro*)ca->at(i))->getmarca() << endl;
   }
   log.setModal(true);
   log.exec();



}

void MainWindow::on_pushButton_3_destroyed()
{
    for(int i=0; i<ca->size();i++){
            delete ca->at(i);
       }
        this->close();
}
