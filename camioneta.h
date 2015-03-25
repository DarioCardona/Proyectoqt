#ifndef CAMIONETA_H
#define CAMIONETA_H
#include "carro.h"
#include <string>


class camioneta : public carro
{
    string tamano;
    int cantidad_asientos;
public:
    camioneta(string, double, string, int, string, string,int);
    ~camioneta();

    virtual string toString()const;
    virtual string gettipo()const;
    string gettamano()const;
    int getcantidad_asiento()const;
    void settamano(string);
    void setcantidad_asiento(int);
};

#endif // CAMIONETA_H
