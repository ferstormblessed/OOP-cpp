#include <iostream>
#include <cmath>
#include "Triangle.h"
#include "Punto.h"
#include "Punto.cpp"
#include <string>

using namespace std;

//Methods
Triangle::Triangle(Punto v1, Punto v2, Punto v3){
    this -> v1 = v1;
    this -> v2 = v2;
    this -> v3 = v3;
}

double Triangle::area(){
    double area,
           a,
           b,
           c,
           s;
    a = this -> v1.distancia(this -> v2);
    b = this -> v1.distancia(this -> v3);
    c = this -> v2.distancia(this -> v3);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s -b) * (s - c));
    return area;
}

double Triangle::perimetro(){
    double perimetro,
           a,
           b,
           c;
    a = this -> v1.distancia(this -> v2);
    b = this -> v1.distancia(this -> v3);
    c = this -> v3.distancia(this -> v2);
    perimetro = a + b + c;
    return perimetro;
}

void Triangle::imprimir(){
    cout <<"Triangulo con coordenadas " << this -> v1.toString() <<", " << this ->v2.toString() << " y " << this -> v3.toString() << endl;
}

bool Triangle::isEquilatero(){
    double a,
           b,
           c;
    bool equilatero = false;
    a = this -> v1.distancia(this -> v2);
    b = this -> v1.distancia(this -> v3);
    c = this -> v3.distancia(this -> v2);
    if (a == b && b == c){
        equilatero = true;
    }
    return equilatero;
}

void Triangle::trasladarTriangle(double x, double y){
    this ->v1.trasladar(x, y);
    this ->v2.trasladar(x, y);
    this ->v3.trasladar(x, y);
}
