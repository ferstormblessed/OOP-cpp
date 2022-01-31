#include <iostream>
#include "ProductoAlmacen.h"
#include <string>

using namespace std;

//Constructor de ProductoAlmacen, inicializa las variables id, nombre, precio y existencia a 0 o strings vacias.
ProductoAlmacen::ProductoAlmacen(){
    this -> id = "";
    this -> nombre = "";
    this -> precio = 0.0;
    this -> existencia = 0;
}

//Constructor de ProductoAlmacen, inicializa las variables id, nombre, precio y existencia a los valores que le pasa el usuario.
ProductoAlmacen::ProductoAlmacen(string _id, string _nombre, double _precio, int _existencia){
    this -> id = _id;
    this -> nombre = _nombre;
    this -> precio = _precio;
    this -> existencia = _existencia;
}

//Este método recibe una string y lo asigna a la variable id
void ProductoAlmacen::setID(string _id){
    this -> id = _id;
}

//Este método recibe una string y lo asigna a la variable nombre
void ProductoAlmacen::setNombre(string _nombre){
    this -> nombre = _nombre;
}

//Este método recibe un double y lo asigna a la variable precio
void ProductoAlmacen::setPrecio(double _precio){
    this -> precio = _precio;
}

//Este método recibe un número entero y lo asigna a la variable existencia
void ProductoAlmacen::setExistencia(int _existencia){
    this -> existencia = _existencia;
}

//Este método regresa el valor de la variable id
string ProductoAlmacen::getID(){
    return this -> id;
}

//Este método regresa el valor de la variable nombre
string ProductoAlmacen::getNombre(){
    return this -> nombre;
}

//Este método regresa el valor de la variable precio
double ProductoAlmacen::getPrecio(){
    return this -> precio;
}

//Este método regresa el valor de la variable existencia
int ProductoAlmacen::getExistencia(){
    return this -> existencia;
}

//Este método impreme los atributos del objeto con el siguiente formato: id,nombre,precio,existencia
void ProductoAlmacen::printProduct(){
    cout << this -> id << "," << this -> nombre << "," << this -> precio << "," << this -> existencia << endl;
}
