#ifndef PERRO_H_
#define PERRO_H_

#include "Animal.h"

class Perro: public Animal{
    public:
        Perro(string nom, int aNac);
        void habla();
        void muestra();
};

Perro::Perro(string nom, int aNac): Animal(nom, aNac){}

void Perro::habla(){
    cout << "GUAU" << endl;
}

void Perro::muestra(){
    cout << "Soy el perro " << Animal::getNombre() << " tengo " << Animal::calculaEdad() << " años" << endl;
}

#endif