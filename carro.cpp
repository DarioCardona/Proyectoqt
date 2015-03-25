#include "carro.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
carro::carro(string marca, double precio, string modelo, int ano, string color)
{
    this->precio=precio;
    this->modelo=modelo;
    this->marca=marca;
    this->ano=ano;
    this->color=color;
}

carro::carro(const carro& other)
    :carro(other){

}

carro::~carro()
{

}



string carro::toString()const{
    stringstream ss;
        ss << "Marca: "  << marca << ", Modelo:" << " ,Precio: L. " << precio <<" Año: "<<ano<<" Color: "<<color;
        return ss.str();
}

double carro::getprecio()const{
    return precio;
}
int carro::getano()const{
    return ano;
}

string carro::getmodelo()const{
    return modelo;
}
string carro::getcolor()const{
    return color;
}

string carro::getmarca()const{
    return marca;
}

void carro::setprecio( double r){
    if (precio < 0)
            throw "El precio no puede ser negativo";
    this->precio = r;
}

void carro::setmodelo( string r){
    this->modelo= r;
}

void carro::setmarca( string r){
    this->marca= r;
}

void carro::setcolor( string r){
    this->color= r;
}

void carro::setano( int r){
    this->ano= r;
}



