#include <iostream>
#include "Eneagono.h"
#include "Punto.h"
#include "Punto.cpp"
#include <cmath>

using namespace std;

Eneagono::Eneagono(Punto v1, Punto v2, Punto v3, Punto v4, Punto v5, Punto v6, Punto v7, Punto v8, Punto v9){
    this -> vertices[0] = v1;
    this -> vertices[1] = v2;
    this -> vertices[2] = v3;
    this -> vertices[3] = v4;
    this -> vertices[4] = v5;
    this -> vertices[5] = v6;
    this -> vertices[6] = v7;
    this -> vertices[7] = v8;
    this -> vertices[8] = v9;
}

double Eneagono::perimetro(){
    double perimetro = 0.0;
    for(int i = 0; i < 8; i++){
        perimetro += this -> vertices[i].distancia(this -> vertices[i + 1]);
    }
    perimetro += this -> vertices[0].distancia(this -> vertices[8]);
    return perimetro;
}

void Eneagono::trasladarEneagono(double delta_x, double delta_y){
    for (int i = 0; i < 9; i++){
        this -> vertices[i].trasladar(delta_x, delta_y); 
    }
}

void Eneagono::imprimir(){
    cout << "Eneagono con coordenadas: " << endl;
    for (int i = 0; i < 9; i++){
        cout << vertices[i].toString() << endl;
    }
}
