#include "login.h"
#include "ui_login.h"
#include "agregarcarros.h"
#include <string.h>
#include <vector>
#include "carro.h"
#include"pickups.h"
#include"turismo.h"
#include"camioneta.h"
#include "qstring.h"
#include "qmessagebox.h"
using namespace std;
login::login(vector<carro*>* car,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ca=car;
    ui->setupUi(this);
}

login::~login()
{
    //delete ca;
    delete ui;
}

void login::on_pushButton_2_clicked()
{
   // string pass=ui->ln_pass->text().toStdString();
   // string name=ui->ln_name->text().toStdString();
    QString pass="daca";
    QString name="dario";

    if(ui->ln_pass->text()==pass && ui->ln_name->text()==name){
        agregarcarros log(ca);
        log.setModal(true);
        log.exec();
        ui->ln_name->setText(NULL);
        ui->ln_pass->setText(NULL);
    } else{
        QMessageBox::information(this, "Lo sentimos usted no es administrador",ui->ln_name->text());
        ui->ln_name->setText(NULL);
        ui->ln_pass->setText(NULL);
    }
}

void login::on_pushButton_clicked()
{
    this->close();
}
