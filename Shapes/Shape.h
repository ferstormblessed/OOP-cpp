#ifndef SHAPE_H_
#define SHAPE_H_

class Shape{
    private:
        int x,
            y;
    public:
        Shape();
        Shape(double x_, double y_);
        int getX() const;
        int getY() const;
        void setX(double x_);
        void setY(double y_);
        virtual string draw();
};

Shape::Shape(){
    x = 0;
    y = 0;
}

Shape::Shape(double x_, double y_){
    x = x_;
    y = y_;
}

int Shape::getX() const{
    return x;
}

int Shape::getY() const{
    return y;
}

void Shape::setX(double x_){
    x = x_;

}

void Shape::setY(double y_){
    y = y_;
}

string Shape::draw(){
    return "I'm a shape";
}

#endif
