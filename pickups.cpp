#include "pickups.h"
#include "carro.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;


pickups::pickups( string marca2, double precio2 ,  string modelo2 , int ano2,  string color2,  string tipo_cabina,  string traccion)
    :carro (marca2,precio2,modelo2,ano2,color2),tipo_cabina(tipo_cabina),traccion(traccion)
{
    //this->precio=precio;
    //this->modelo=modelo;
    //this->marca=marca;
   // this->ano=ano;
    //this->color=color;
   // this->traccion=traccion;
    //this->tipo_cabina=tipo_cabina;
}

pickups::~pickups()
{

}

string pickups::toString()const{
    stringstream ss;
        ss << "Tipo: "  << gettipo() << carro::toString() << " ,Tipo de cabina: " << tipo_cabina <<" Traccion "<<traccion;
        return ss.str();
}
string pickups::gettipo()const{
    return "Pick-up";
}
string pickups::gettipo_cabina()const{
    return tipo_cabina;
}
string pickups::gettraccion()const{
    return traccion;
}
void pickups::settipo_cabina(string r){
    this->tipo_cabina=r;
}

void pickups::settraccion(string r){
    this->traccion=r;
}


