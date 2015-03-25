#include "camioneta.h"
#include "carro.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

camioneta::camioneta(string marca2, double precio2 ,  string modelo2 , int ano2,  string color2,  string tamano,  int cantidad_asientos)
:carro (marca2,precio2,modelo2,ano2,color2),tamano(tamano),cantidad_asientos(cantidad_asientos)
{

}

camioneta::~camioneta()
{

}

string camioneta::toString()const{
    stringstream ss;
            ss << "Tipo: "  << gettipo() << carro::toString() << " ,Tamaño: " << tamano <<" Cantidad de asientos "<<cantidad_asientos;
            return ss.str();
}
string camioneta::gettipo()const{
    return "Camioneta";
}
string camioneta::gettamano()const{
    return tamano;
}
int camioneta::getcantidad_asiento()const{
    return cantidad_asientos;
}
void camioneta::settamano(string r){
    this->tamano=r;
}

void camioneta::setcantidad_asiento(int r){
    if (cantidad_asientos < 2)
            throw "El precio no puede ser negativo";
    this->cantidad_asientos=r;
}


