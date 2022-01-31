#include <iostream>
#include "ProductoCarrito.h"

using namespace std;

//Constructor de ProductoCarrito, inicializa las varibles id, nombre, precio y cantidad a 0 o string vacias.
ProductoCarrito::ProductoCarrito(){
    this -> id = "";
    this -> nombre = "";
    this -> precio = 0.0;
    this -> cantidad = 0;
}

//Constructor de ProductoCarrito, inicializa las variables id, nombre, precio y cantidad a los valores que le pasa el usuario.
ProductoCarrito::ProductoCarrito(string _id, string _nombre, double _precio, int _cantidad){
    this -> id = _id;
    this -> nombre = _nombre;
    this -> precio = _precio;
    this -> cantidad = _cantidad;
}

//Este método recibe una string y lo asigna a la variable id
void ProductoCarrito::setID(string _id){
    this -> id = _id;
}

//Este método recibe una string y lo asigna a la variable nombre
void ProductoCarrito::setNombre(string _nombre){
    this -> nombre = _nombre;
}

//Este método recibe un double y lo asigna a la variable precio
void ProductoCarrito::setPrecio(double _precio){
    this -> precio = _precio;
}

//Este métodod recibe un número entero y lo asigna a la variable cantidad
void ProductoCarrito::setCantidad(int _cantidad){
    this -> cantidad = _cantidad;
}

//Este método regresa el valor de la variable id
string ProductoCarrito::getID(){
    return this -> id;
}

//Este método regresa el valor de la variable nombre
string ProductoCarrito::getNombre(){
    return this -> nombre;
}

//Este método regresa el valor de la variable precio
double ProductoCarrito::getPrecio(){
    return this -> precio;
}

//Este método regresa el valor de la variable cantidad
int ProductoCarrito::getCantidad(){
    return this -> cantidad;
} 

//Este método regresa el resultado de la multiplicación de la variable precio por la variable cantidad, para calcular el subtotal de un producto
double ProductoCarrito::subtotal(){
    return this -> precio * this -> cantidad;
}

//Este método impreme los atributos del objeto con el siguiente formato: id,nombre,precio,existencia
void ProductoCarrito::printProduct(){
    cout << this -> id << "," << this -> nombre << "," << this -> precio << "," << this -> cantidad << endl;
}