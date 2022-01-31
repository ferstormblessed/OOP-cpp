#include <iostream>
#include "Empleado.h"
#include "Fecha.h"
#include <string>

using namespace std;

Empleado::Empleado(string nombre, double sueldo, Fecha fecha){
    this -> nombreEmp = nombre;
    this -> sueldoEmp = sueldo;
    this -> cumpleAniosEmp = fecha;
}

string Empleado::getNombreEmp(){
    return this -> nombreEmp;
}

double Empleado::getSueldoEmp(){
    return this -> sueldoEmp;
}

Fecha Empleado::getFecha(){
    return this -> cumpleAniosEmp;
}

void Empleado::setNombreEmp(string nombre){
    this -> nombreEmp = nombre;
}

void Empleado::setSueldoEmp(double sueldo){
    this -> sueldoEmp = sueldo;
}

void Empleado::setFecha(Fecha fecha){
    this -> cumpleAniosEmp = fecha;
}

void Empleado::subeSueldo(double porcentaje){
    if (porcentaje > 0 && porcentaje <= 10){
        this -> sueldoEmp = this -> sueldoEmp + (this -> sueldoEmp * porcentaje / 100);
    }
    else{
        cout << "Porcentaje inválido, no hay incremento salarial" << endl;
    }
}

void Empleado::printData(){
    cout << "Empleado: " << this -> nombreEmp << ", Sueldo: " << this -> sueldoEmp << ", Cumpleaños(DD/MM): " << this -> cumpleAniosEmp.printFecha() << endl;
}
