#include <iostream>
#include <string>
using namespace std;

#include "Perro.h"
#include "Gato.h"

int main(){
//  ***Sigue los pasos de la sección "Instructions" para construir este programa***
//    Este sería el menú, si se desplegara, pero déjalo como comentario, es sólo guía para ti.
//    cout << "a) mostrar los 3 datos de ejemplo " << endl;
//    cout << "b) pedir al usuario los datos y mostrarlos " << endl;
//    cout << "opcion? " << endl;
    string option;
    cin >> option;

    if(option == "a"){
        Animal* arrayA[3];
        arrayA[0] = new Gato("Silvestre", 1947);
        arrayA[1] = new Perro("Fido", 2008);
        arrayA[2] = new Gato("Tom", 1940);

        for (int i = 0; i < 3; i++){
            arrayA[i] -> muestra();
            arrayA[i] -> habla();
        }
    } 
    else if (option == "b"){
        for (int i = 0; i < 3; i++){
            string mascota, 
                   nombre;
            int anio;
            cin >> mascota >> nombre >> anio;
            if (mascota == "g"){
                Gato pet(nombre, anio);
                pet.muestra();
                pet.habla();
            }
            else if (mascota == "p"){
                Perro pet(nombre, anio);
                pet.muestra();
                pet.habla();
            }
        }
    }
    else{
        cout << "opcion?" << endl;
    }
    return 0;
    
}
