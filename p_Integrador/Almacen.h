//Se crea la clase Almacen, se establecenn sus atributos y métodos
//Salvador Fernando Camacho Hernández A0163477  
//Fecha de creación 30/11/2020 Ultima modificación 04/12/2020

#ifndef ALMACEN_H
#define ALMACEN_H

#include "ProductoAlmacen.h"
#include <string>

using namespace std;

class Almacen{
    private:
        ProductoAlmacen productos[20];
        int size;
    public:
        Almacen();
        Almacen(string filePath);
        void setProdAl(int index, ProductoAlmacen newProduct);
        void setSizeAl(int _size);
        ProductoAlmacen& getProdAl(int index);
        int getSizeAl();
};

#endif