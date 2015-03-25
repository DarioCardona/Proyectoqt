#ifndef LOGIN_H
#define LOGIN_H
#include <vector>
#include <QDialog>
#include "carro.h"
#include "camioneta.h"
#include "turismo.h"
#include "pickups.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(vector<carro*>* car = 0,QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::login *ui;
     vector<carro*>* ca;
};

#endif // LOGIN_H
