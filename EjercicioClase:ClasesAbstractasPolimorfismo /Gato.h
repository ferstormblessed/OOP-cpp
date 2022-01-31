#ifndef GATO_H_
#define GATO_H_

#include "Animal.h"

class Gato: public Animal{
    public:
        Gato(string nom, int aNac);
        void habla();
        void muestra(); 
};

Gato::Gato(string nom, int aNac): Animal(nom,aNac){}

void Gato::habla(){
    cout << "MIAU" << endl;
}

void Gato::muestra(){
    cout << "Soy el gato " << Animal::getNombre() << " tengo " << Animal::calculaEdad() << " años" << endl;
}

#endif