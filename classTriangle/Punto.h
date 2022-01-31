#ifndef PUNTO_H
#define PUNTO_H
#include <string>

using namespace std;

class Punto{
    private:
        double x,
               y;
    public:
        Punto();
        Punto(double x, double y);
        double distancia(Punto p);
        double getX();
        double getY();
        void setX(double x1);
        void setY(double y1);
        void trasladar(double delta_x, double delta_y);
        void imprimir();
        string toString();
};

#endif