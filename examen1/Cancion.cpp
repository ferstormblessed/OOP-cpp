#include "Cancion.h"
#include <string>
#include <iostream>

using namespace std;

Cancion::Cancion(){
    this -> nombre = "Sin nombre";
    this -> duracion = 0;
    this -> categoria = "Sin categoria";
}

Cancion::Cancion(string nombre, int duracion, string categoria){
    this -> nombre = nombre;
    this -> duracion = duracion;
    this -> categoria = categoria;
}

int Cancion::getDuracion(){
    return this -> duracion;
}

string Cancion::getCategoria(){
    return this -> categoria;
}

void Cancion::imprime(){
    cout << "Cancion:" << this -> nombre << "," << this -> duracion << " seg,Categoria:" << this -> categoria << endl;
}