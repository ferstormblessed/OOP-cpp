#ifndef POLIGONO_H_
#define POLIGONO_H_

#include "Shape.h"

class Poligono: public Shape{
    private:
        int numeroDeLados;
    public:
        Poligono();
        Poligono(int n, double x_, double y_);
        int getN() const;
        void setN(int n);
        string draw();
};

Poligono::Poligono(){
    numeroDeLados = 3;
}

Poligono::Poligono(int n, double x_, double y_): Shape(x_, y_){
    numeroDeLados = n;
}

int Poligono::getN() const{
    return numeroDeLados;
}

void Poligono::setN(int n){
    numeroDeLados = n;
}

string Poligono::draw(){
    return Shape::draw() + ": POLIGONO";
}

#endif