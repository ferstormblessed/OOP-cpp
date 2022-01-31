#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Fecha.h"
#include <string>

using namespace std;

class Empleado{
    private:
        string nombreEmp;
        double sueldoEmp;
        Fecha cumpleAniosEmp;
    public:
        Empleado(string nombre, double sueldo, Fecha fecha);
        string getNombreEmp();
        double getSueldoEmp();
        Fecha getFecha();
        void setNombreEmp(string nombre);
        void setSueldoEmp(double sueldo);
        void setFecha(Fecha fecha);
        void subeSueldo(double porcentaje);
        void printData();
};

#endif