#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle: public Shape{
    private:
        double radius;
    public:
        Circle();
        Circle(double r, double x_, double y_);
        double getRadius() const;
        void setRadius(double r);
        string draw() override;
};

Circle::Circle(){
    radius = 1;
}

Circle::Circle(double r, double x_, double y_): Shape(x_, y_){
    radius = r;
}

double Circle::getRadius() const{
    return radius;
}

void Circle::setRadius(double r){
    radius = r;
}

string Circle::draw(){
    return Shape::draw() + ": CIRCLE";
}

#endif