// Escribe aquí la clase Vendedor

// usa estos cout para COMPLETAR el despliegue de los datos de un vendedor
// recuerda que un vendedor es también un Empleado
//    cout << " %comision " << porcentajeComision;
//    cout << " ventas " << ventas << endl;


#ifndef Vendedor_h
#define Vendedor_h

#include "Empleado.h"

//Escribe tu clase Vendedor
class Vendedor: public Empleado{
    private:
        double porcentajeComision,
               ventas;
    public:
        Vendedor();
        Vendedor(int ide, double suel, double porcentaje, double ventas_);
        double getPorcentaje() const;
        double getVentas() const;
        void setPorcentaje(double porcentaje);
        void setVentas(double ventas_);
        void muestra();
        double calculaPago();
};

Vendedor::Vendedor(){
    porcentajeComision = 0;
    ventas = 0;
}

Vendedor::Vendedor(int ide, double suel, double porcentaje, double ventas_): Empleado(ide, suel){
    porcentajeComision = porcentaje;
    ventas = ventas_; 
}

double Vendedor::getPorcentaje() const{
    return porcentajeComision;
}

double Vendedor::getVentas() const{
    return ventas;
}

void Vendedor::setPorcentaje(double porcentaje){
    porcentajeComision = porcentaje;
}

void Vendedor::setVentas(double ventas_){
    ventas = ventas_;
}

void Vendedor::muestra(){
    Empleado::muestra();
    cout << " %comision " << porcentajeComision;
    cout << " ventas " << ventas << endl;
}

double Vendedor::calculaPago(){
    return Empleado::calculaPago() + porcentajeComision * ventas;
}

#endif //Vendedor_h