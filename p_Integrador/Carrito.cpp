#include <iostream>
#include "Carrito.h"
#include <string>

using namespace std;

//Constructor de Carrito, inicializa las variable size a 0 y la variable cliente a una string vacia.
Carrito::Carrito(){
    this -> size = 0;
    this -> cliente = "";
}

//Constructor de Carrito, inicializa las variables size y carrito a los valores que le pasa el usuario.
Carrito::Carrito(int _size, string _cliente){
    this -> size = _size;
    this -> cliente = _cliente;
}

//Este método recibe una string y lo asigna a la variable cliente
void Carrito::setCliente(string _cliente){
    this -> cliente = _cliente;
}

//Este método recibe un número entero (index) y un objeto de tipo ProductoCarrito(newProduct) y asigna newProduct al carrito en la posición de index
void Carrito::setProdCar(int index, ProductoCarrito newProduct){
    this -> productos[index] = newProduct;
}

//Este método recibe un número entero y lo asigna a la variable size
void Carrito::setSizeCar(int _size){
    this -> size = _size;
}

//Este método regresa el valor de la variable cliente
string Carrito::getCliente(){
    return this -> cliente;
}

//Este método recibe un número entero (index) y regresa un objeto de tipo ProductoCarrito de la posición index del carrito.
ProductoCarrito& Carrito::getProdCar(int index){
    return this -> productos[index];
}

//Este método regresa el valor de la variable size
int Carrito::getSizeCar(){
    return this -> size;
}

//Este método regresa el valor de la suma de los subtotales de todos los productos del carrito.
double Carrito::total(){
    double total = 0;
    for (int i = 0; i < this -> size; i++){
        total += productos[i].subtotal();
    }
    return total;
}
