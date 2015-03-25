#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    vector<carro*>* car=new vector<carro*>;
    MainWindow w(car,0);
    w.show();

    return a.exec();
}
