#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Punto.h"
#include <string>

using namespace std;

class Triangle{
    private:
        Punto v1,
              v2,
              v3;
    public:
        Triangle(Punto v1, Punto v2, Punto v3);
        double area();
        double perimetro();
        bool isEquilatero();
        void trasladarTriangle(double delta_x, double delta_y);
        void imprimir();
};

#endif