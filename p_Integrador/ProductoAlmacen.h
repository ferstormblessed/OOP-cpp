//Se crea la clase ProductoAlmacen, se establecenn sus atributos y métodos
//Salvador Fernando Camacho Hernández A0163477  
//Fecha de creación 30/11/2020 Ultima modificación 04/12/2020

#ifndef PRODUCTOALMACEN_H
#define PRODUCTOALMACEN_H

#include <string>

using namespace std;

class ProductoAlmacen{
    private:
        string id;
        string nombre;
        double precio;
        int existencia;
    public:
        ProductoAlmacen();
        ProductoAlmacen(string _id, string _nombre, double _precio, int _existencia);
        void setID(string _id);
        void setNombre(string _nombre);
        void setPrecio(double _precio);
        void setExistencia(int _existencia);
        string getID();
        string getNombre();
        double getPrecio();
        int getExistencia();
        void printProduct();
};

#endif