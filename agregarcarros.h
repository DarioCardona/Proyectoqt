#ifndef AGREGARCARROS_H
#define AGREGARCARROS_H
#include<vector>
#include "carro.h"
#include "turismo.h"
#include "camioneta.h"
#include"pickups.h"
#include <QDialog>

namespace Ui {
class agregarcarros;
}

class agregarcarros : public QDialog
{
    Q_OBJECT

public:
    explicit agregarcarros(vector<carro*>* c =0,QWidget *parent = 0);
    ~agregarcarros();

private slots:
    void on_b_pickups_clicked();

    void on_b_turismo_clicked();

    void on_b_camioneta_clicked();

    //void on_Salir_destroyed();

    void on_Salir_clicked();

private:
    Ui::agregarcarros *ui;
    vector<carro*>* ca = new vector<carro*>;
};

#endif // AGREGARCARROS_H
