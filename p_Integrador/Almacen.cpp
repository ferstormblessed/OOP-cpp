#include <iostream>
#include <fstream>
#include <sstream>
#include "Almacen.h"
#include "ProductoAlmacen.h"
#include <string>

using namespace std;

//Constructor de Almacen, inicializa la variable size a 0
Almacen::Almacen(){
    this -> size = 0;
}

//Constructor de Almacen, recibe una string que es el nombre de un archivo a leer. Con un ciclo while llena el almacen con objetos ProductoAlmacen. Inicializa el size a 0.
Almacen::Almacen(string filePath){
    ifstream productosFile(filePath);
    string line,
           n_id,
           n_nombre,
           strPrecio,
           strExistencia;
    double n_precio;
    int n_existencia;
    this -> size = 0;

    while(!productosFile.eof()){
        getline(productosFile, line);
        stringstream dataStream(line);
        getline(dataStream,n_id, ',');
        getline(dataStream,n_nombre, ',');
        getline(dataStream,strPrecio, ',');
        n_precio = stod(strPrecio);
        getline(dataStream,strExistencia, ',');
        n_existencia = stoi(strExistencia);

        ProductoAlmacen p(n_id, n_nombre, n_precio, n_existencia);
        this -> productos[size] = p;
        size ++;
    }
    productosFile.close();
}

//Este método recibe un número entero (index) y un objeto de tipo ProductoAlmacen (newProduct). Asigna el objeto newProduct en la posición index.
void Almacen::setProdAl(int index, ProductoAlmacen newProduct){
    this -> productos[index] = newProduct;
}

//Este método recibe un número entero y los asigna a la variable size.
void Almacen::setSizeAl(int _size){
    this -> size = _size;
}

//Este método recibe un número entero (index) y regresa un objeto de tipo ProductoAlmacen de la posición index del almacen.
ProductoAlmacen& Almacen::getProdAl(int index){
    return this -> productos[index];
}

//Este método regresa el valor de la variable size.
int Almacen::getSizeAl(){
    return this -> size;
}

