//Se crea la clase Carrito, se establecenn sus atributos y métodos
//Salvador Fernando Camacho Hernández A0163477  
//Fecha de creación 30/11/2020 Ultima modificación 04/12/2020

#ifndef CARRITO_H
#define CARRITO_H

#include <string>
#include "ProductoCarrito.h"

using namespace std;

class Carrito{
    private:
        string cliente;
        ProductoCarrito productos[10];
        int size;
    public:
        Carrito();
        Carrito(int _size, string _cliente);
        void setCliente(string _cliente);
        void setProdCar(int index, ProductoCarrito newProduct);
        void setSizeCar(int _size);
        string getCliente();
        ProductoCarrito& getProdCar(int index);
        int getSizeCar();
        double total();
};

#endif