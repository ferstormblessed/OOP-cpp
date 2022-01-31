#ifndef Sobre_h_
#define Sobre_h_

#include "Envio.h"

class Sobre: public Envio{
    private:
        double largo,
               ancho,
               cargoAdicional;
    public:
        Sobre();
        Sobre(Persona remitente_, Persona destinatario_, double costoEstandar_, double largo_, double ancho_, double cargoAdicional_);
        double getLargo() const;
        double getAncho() const;
        double getCargoAdicional() const;
        void setLargo(double largo_);
        void setAncho(double ancho_);
        void setCargoAdicional(double cargoAdicional_);
        double calculaCosto();
};

Sobre::Sobre(){
    largo = 0;
    ancho = 0;
    cargoAdicional = 0;
}

Sobre::Sobre(Persona remitente_, Persona destinatario_, double costoEstandar_, double largo_, double ancho_, double cargoAdicional_): Envio(remitente_, destinatario_, costoEstandar_){
    if (largo_ <= 25 || ancho_ <= 30){
        largo = largo_;
        ancho = ancho_;
        cargoAdicional = 0;
    }
    else if (largo_ > 25 || ancho_ > 30){
        largo = largo_;
        ancho = ancho_;
        cargoAdicional = cargoAdicional_;
    }
}

double Sobre::getLargo() const{
    return largo;
}

double Sobre::getAncho() const{
    return ancho;
}

double Sobre::getCargoAdicional() const{
    return cargoAdicional;
}

void Sobre::setLargo(double largo_){
    largo = largo_;
}

void Sobre::setAncho(double ancho_){
    ancho = ancho_;
}

void Sobre::setCargoAdicional(double cargoAdicional_){
    cargoAdicional = cargoAdicional_;
}

double Sobre::calculaCosto(){
    if (largo > 25 || ancho > 30){
        return Envio::calculaCosto() + cargoAdicional;
    }
    else{
        return Envio::calculaCosto();
    }
}

#endif