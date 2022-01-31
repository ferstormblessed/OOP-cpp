//Se crea la clase ProductoCarrito, se establecenn sus atributos y métodos
//Salvador Fernando Camacho Hernández A0163477  
//Fecha de creación 30/11/2020 Ultima modificación 04/12/2020

#ifndef PRODUCTOCARRITO_H
#define PRODUCTOCARRITO_H

#include <string>

using namespace std;

class ProductoCarrito{
    private:
        string id;
        string nombre;
        double precio;
        int cantidad;
    public:
        ProductoCarrito();
        ProductoCarrito(string _id, string _nombre, double _precio, int _cantidad);
        void setID(string _id);
        void setNombre(string _nombre);
        void setPrecio(double _precio);
        void setCantidad(int _cantidad);
        string getID();
        string getNombre();
        double getPrecio();
        int getCantidad(); 
        double subtotal();
        void printProduct();
};

#endif