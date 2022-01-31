#ifndef FECHA_H
#define FECHA_H

#include <string>

using namespace std;

class Fecha{
    private:
        int dia,
            mes;
    public:
        Fecha();
        Fecha(int dia, int mes);
        int getDia();
        int getMes();
        void setDia(int dia);
        void setMes(int mes);
        string printFecha();
};

#endif