#ifndef VENTA_H
#define VENTA_H
#include<vector>
#include "carro.h"

#include <QDialog>

namespace Ui {
class venta;
}

class venta : public QDialog
{
    Q_OBJECT

public:
    explicit venta(vector<carro*>*,QWidget *parent = 0);
    ~venta();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::venta *ui;
     vector<carro*>* ca;
};

#endif // VENTA_H
