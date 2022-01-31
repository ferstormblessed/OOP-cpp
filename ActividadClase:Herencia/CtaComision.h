/*Escribe la clase CtaComision
  No olvides todos los elementos con los que debe contar: constructores, getters, setters
  y las funciones que deberás sobreescribir para este tipo de cuenta
  
  Usa las siguientes líneas para mostrar los datos de una cuenta por comision.
  CtaBanc:: mostrar(); Recuerda que hace esta línea de código.
  cout <<"Comision: " << comision << endl;*/

#ifndef CtaComision_h
#define CtaComision_h

#include "CtaBanc.h"

//Tu clase
class CtaComision: public CtaBanc{
    private:
        double comision;
    public:
        CtaComision();
        CtaComision(double c, int n, double s);
        double getComision();
        void setComision(double c);
        bool retira(double cant);
        void mostrar();
};

CtaComision::CtaComision(){
    comision = 0;
}

CtaComision::CtaComision(double c, int n, double s): CtaBanc(n, s){
    comision = c;
}

double CtaComision::getComision(){
    return comision;
}

void CtaComision::setComision(double c){
    comision = c;
}

bool CtaComision::retira(double cant){
    double cantidad;
    cantidad = cant + comision;
    CtaBanc::retira(cantidad);
}

void CtaComision::mostrar(){
    CtaBanc::mostrar();
    cout <<"Comision: " << comision << endl;
}

#endif //CtaComision_h