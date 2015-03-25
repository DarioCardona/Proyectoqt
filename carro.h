#ifndef CARRO_H
#define CARRO_H
#include <string>
#include <iostream>

using namespace std;
class carro
{
    double precio;
    string modelo;
    string marca;
    int ano;
    string color;


public:
    carro(string ,double, string, int ,string);
    carro(const carro&);
    ~carro();
    virtual string toString()const;
    virtual string gettipo()const=0;
    double getprecio()const;
    string getmodelo()const;
    string getmarca()const;
    string getcolor()const;
    int getano()const;
    void setprecio(double);
    void setmodelo(string);
    void setmarca(string);
    void setano(int);
    void setcolor(string);
};

#endif // CARRO_H
