#ifndef PICKUPS_H
#define PICKUPS_H
#include "carro.h"
#include <string>

class pickups: public carro
{
    string tipo_cabina;
    string traccion;
public:
    pickups(string, double, string, int, string, string,string);
    ~pickups();
    virtual string toString()const;
    virtual string gettipo()const;
    string gettipo_cabina()const;
    string gettraccion()const;
    void settipo_cabina(string);
    void settraccion(string);
};

#endif // PICKUPS_H
