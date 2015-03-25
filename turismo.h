#ifndef TURISMO_H
#define TURISMO_H
#include "carro.h"
#include <string>


class turismo :public carro
{
    int cantidad_pasajeros;
    int cantidad_puertas;
public:
    turismo(string, double, string, int, string, int,int);
    ~turismo();
    virtual string toString()const;
    virtual string gettipo()const;
    int getcantidad_pasajeros()const;
    int getcantidad_puertas()const;
    void setcantidad_pasajeros(int);
    void setcantidad_puertas(int);
};

#endif // TURISMO_H

