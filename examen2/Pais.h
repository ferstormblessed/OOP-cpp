#ifndef PAIS_H_
#define PAIS_H_

#include <iostream>
using namespace std;

#include "Territorio.h"

class Pais: public Territorio{
    private:
        string idioma, 
               moneda;
    public:
        Pais();
        Pais(string, double, string, string);
        string getIdioma();
        string getMoneda();
        void setIdioma(string);
        void setMoneda(string);
        string obtenerDatos();
};

Pais::Pais(){
    idioma = "";
    moneda = "";
}

Pais::Pais(string nombre_, double superficie_, string idioma_, string moneda_): Territorio(nombre_, superficie_){
    idioma = idioma_;
    moneda = moneda_;
}

string Pais::getIdioma(){
    return idioma;
}

string Pais::getMoneda(){
    return moneda;
}

void Pais::setIdioma(string idioma_){
    idioma = idioma_;
}

void Pais::setMoneda(string moneda_){
    moneda = moneda_;
}

string Pais::obtenerDatos(){
    return Territorio::obtenerDatos() + " idioma: " + idioma + " moneda: " + moneda;
}

#endif