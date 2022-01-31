#include <iostream>
#include "Fecha.h"
#include "Empleado.h"
#include "Fecha.cpp"
#include "Empleado.cpp"

using namespace std;

int main(){
    Fecha fPepe(19,5),
          fRocio(1,1);
    
    Empleado emp1("Pepe", 10000, fPepe),
             emp2("Rocio", 12000, fRocio);

    //Impresión de los datos de los empleados
    emp1.printData();
    emp2.printData();

    // +15% salario a Pepe
    emp1.subeSueldo(15);

    //Impresión sueldo y nombre de Pepe
    cout << "Nombre: " << emp1.getNombreEmp() << endl;
    cout << "Sueldo: " << emp1.getSueldoEmp() << endl;

    //Impresión cumpleaños de Rocio
    cout << "Cumpleaños(DD/MM) Rocio: " << emp2.getFecha().printFecha() << endl;

    // +5% salario a Pepe
    emp1.subeSueldo(5);

    //Impresión sueldo y nombre de Pepe
    cout << "Nombre: " << emp1.getNombreEmp() << endl;
    cout << "Sueldo: " << emp1.getSueldoEmp() << endl;
    
    return 0;
}