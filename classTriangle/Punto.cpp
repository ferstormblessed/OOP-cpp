#include <iostream>
#include "Punto.h"
#include <cmath>
#include <string>

using namespace std;

//Methods
Punto::Punto(){
    this -> x = 0.0;
    this -> y = 0.0;
}

Punto::Punto(double x, double y){
    this -> x = x;
    this -> y = y;
}

double Punto::getX(){
    return this -> x;
}

double Punto::getY(){
    return this -> y;
}

void Punto::setX(double x1){
    this -> x = x1;
}

void Punto::setY(double y1){
    this -> y = y1;
}

double Punto::distancia(Punto p){
    double distancia = sqrt(pow((p.x - this -> x),2) + pow((p.y - this -> y),2));
    return distancia;
}

void Punto::trasladar(double delta_x, double delta_y){
    this -> x += delta_x;
    this -> y += delta_y;
}

void Punto::imprimir(){
    cout << "P(" << this -> x << "," << this -> y << ")" << endl;
}

string Punto::toString(){
    return "P(" + to_string(this -> x) + "," + to_string(this -> y) + ")";
}
