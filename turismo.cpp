#include "turismo.h"
#include "carro.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

turismo::turismo(string marca3, double precio3 ,  string modelo3 , int ano3,  string color3,  int cantidad_pasajeros,  int cantidad_puertas)
 :carro (marca3,precio3,modelo3,ano3,color3),cantidad_pasajeros(cantidad_pasajeros),cantidad_puertas(cantidad_puertas)
{

}

turismo::~turismo()
{

}
 string turismo::toString()const{
     stringstream ss;
     ss << "Tipo: "  << gettipo() << carro::toString() << " ,Cantidad de pasajeros: " << cantidad_pasajeros <<" Cantidad de puertas "<<cantidad_puertas;
     return ss.str();
}
string turismo::gettipo()const{
              return "Turismo";
                 }
int turismo::getcantidad_pasajeros()const{
                return cantidad_pasajeros;
                 }
int turismo::getcantidad_puertas()const{
                return cantidad_puertas;
                 }
void turismo::setcantidad_pasajeros(int r){
    if (cantidad_pasajeros < 2)
            throw "El precio no puede ser negativo";
                   this->cantidad_pasajeros=r;
                 }

void turismo::setcantidad_puertas(int r){
    if (cantidad_puertas < 2)
            throw "El precio no puede ser negativo";
                  this->cantidad_puertas=r;
                 }


