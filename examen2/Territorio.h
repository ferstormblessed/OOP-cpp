#ifndef TERRITORIO_H_
#define TERRITORIO_H_

#include <iostream>
using namespace std;

class Territorio{
    private:
        string nombre;
        double superficie;
    public:
        Territorio();
        Territorio(string, double);
        string getNombre();
        double getSuperficie();
        void setNombre(string);
        void setSuperficie(double);
        virtual string obtenerDatos();
        friend ostream& operator <<(ostream&, Territorio&);
};

Territorio::Territorio(){
    nombre = "";
    superficie = 0;
}

Territorio::Territorio(string nombre_, double superficie_){
    nombre = nombre_;
    superficie = superficie_;
}

string Territorio::getNombre(){
    return nombre;
}

double Territorio::getSuperficie(){
    return superficie;
}

void Territorio::setNombre(string nombre_){
    nombre = nombre_;
}

void Territorio::setSuperficie(double superficie_){
    superficie = superficie_;
}

string Territorio::obtenerDatos(){
    return nombre  + " - " + to_string(superficie) + " m^2";
}

ostream& operator<<(ostream& salida, Territorio& territorio){
    salida << territorio.obtenerDatos() << endl;
    return salida;
}

#endif