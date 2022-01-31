#ifndef Envio_h_
#define Envio_h_

#include "Persona.h"

class Envio{
    private:
        Persona remitente, 
                destinatario;
        double costoEstandar;
    public:
        Envio();
        Envio(Persona remitente_, Persona destinatario_, double costoEstandar_);
        Persona getRemitente() const;
        Persona getDestinatario() const;
        double getCostoEstandar() const;
        void setRemitente(Persona remitente_);
        void setDestinatario(Persona destinatario_);
        void setCostoEstandar(double costoEstandar_);
        virtual double calculaCosto() = 0;
};

Envio::Envio(){
    Persona remitente;
    Persona destinatario;
    costoEstandar = 0;
}

Envio::Envio(Persona remitente_, Persona destinatario_, double costoEstandar_){
    remitente = remitente_;
    destinatario = destinatario_;
    costoEstandar = costoEstandar_;
}

Persona Envio::getRemitente() const{
    return remitente;
}

Persona Envio::getDestinatario() const{
    return destinatario;  
}

double Envio::getCostoEstandar() const{
    return costoEstandar;
}

void Envio::setRemitente(Persona remitente_){
    remitente = remitente_;
}

void Envio::setDestinatario(Persona destinatario_){
    destinatario = destinatario_;
}

void Envio::setCostoEstandar(double costoEstandar_){
    costoEstandar = costoEstandar_;
}

double Envio::calculaCosto(){
    return costoEstandar;
}

#endif