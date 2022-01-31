#ifndef ENEAGONO_H
#define ENEAGONO_H

#include "Punto.h"

using namespace std;

class Eneagono{
    private:
        Punto vertices[9];
    public:
        Eneagono(Punto v1, Punto v2, Punto v3, Punto v4, Punto v5, Punto v6, Punto v7, Punto v8, Punto v9);
        double perimetro();
        void trasladarEneagono(double delta_x, double delta_y);
        void imprimir();
};

#endif