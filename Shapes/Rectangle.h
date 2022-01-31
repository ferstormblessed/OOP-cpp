#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle: public Shape{
    private:
        double alto,
               ancho;
    public:
        Rectangle();
        Rectangle(double a, double b, double x_, double y_);
        double getAlto() const;
        double getAncho() const;
        void setAlto(double a);
        void setAncho(double b);
        string draw() override;
};

Rectangle::Rectangle(){
    alto = 1;
    ancho = 1;
}

Rectangle::Rectangle(double a, double b, double x_, double y_): Shape(x_, y_){
    alto = a;
    ancho = b;
}

double Rectangle::getAlto() const{
    return alto;
}

double Rectangle::getAncho() const{
    return ancho;
}

void Rectangle::setAlto(double a){
    alto = a;
}

void Rectangle::setAncho(double b){
    ancho = b;
}

string Rectangle::draw(){
    return Shape::draw() + ": RECTANGLE";
}

#endif