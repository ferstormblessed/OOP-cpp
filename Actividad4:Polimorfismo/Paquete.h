#ifndef Paquete_h_
#define Paquete_h_

#include "Envio.h"

class Paquete: public Envio{
    private:
        double pesoPaquete,
               costoKilogramo;
    public:
        Paquete();
        Paquete(Persona remitente_, Persona destinatario_, double costoEstandar_, double pesoPaquete_, double costoKilogramo_);
        double getPesoPaquete() const;
        double getCostoKilogramo() const;
        void setPesoPaquete(double pesoPaquete_);
        void setCostoKilogramo(double costoKilogramo_);
        double calculaCosto();
};

Paquete::Paquete(){
    pesoPaquete = 0;
    costoKilogramo = 0;
}

Paquete::Paquete(Persona remitente_, Persona destinatario_, double costoEstandar_, double pesoPaquete_, double costoKilogramo_): Envio(remitente_, destinatario_, costoEstandar_){
    if (pesoPaquete_ >= 0){
        pesoPaquete = pesoPaquete_;
    }
    else {
        pesoPaquete = 0;
    }

    if (costoKilogramo_ >= 0){
        costoKilogramo = costoKilogramo_;
    }
    else {
        costoKilogramo = 0;
    }
}

double Paquete::getPesoPaquete() const{
    return pesoPaquete;
}

double Paquete::getCostoKilogramo() const{
    return costoKilogramo;
}

void Paquete::setPesoPaquete(double pesoPaquete_){
    pesoPaquete = pesoPaquete_;
}

void Paquete::setCostoKilogramo(double costoKilogramo_){
    costoKilogramo = costoKilogramo_;
}

double Paquete::calculaCosto(){
    return Envio::calculaCosto() + pesoPaquete * costoKilogramo;
}

#endif