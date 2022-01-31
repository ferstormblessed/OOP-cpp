#ifndef CANCION_H
#define CANCION_H
#include <string>

using namespace std;

class Cancion{
    private:
        string nombre,
               categoria;
        int duracion;
    public:
        Cancion();
        Cancion(string nombre, int duracion, string categoria);
        int getDuracion();
        string getCategoria();
        void imprime();
};

#endif