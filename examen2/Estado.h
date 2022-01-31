#ifndef ESTADO_H_
#define ESTADO_H_

#include <iostream>
using namespace std;

#include "Territorio.h"

class Estado: public Territorio{
    private:
        double presupuesto;
    public:
        Estado();
        Estado(string, double, double);
        double getPresupuesto();
        void setPresupuesto(double);
        string obtenerDatos();
};

Estado::Estado(){
    presupuesto = 0;
}

Estado::Estado(string nombre_, double superficie_, double presupuesto_): Territorio(nombre_, superficie_){
    presupuesto = presupuesto_;
}

double Estado::getPresupuesto(){
    return presupuesto;
}

void Estado::setPresupuesto(double presupuesto_){
    presupuesto = presupuesto_;
}

string Estado::obtenerDatos(){
    return Territorio::obtenerDatos() + " presupuesto:$" + to_string(presupuesto);
}

#endif