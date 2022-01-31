#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "Circle.h"
#include "Rectangle.h"
#include "Poligono.h"

int main(){

    /*
    // Apuntadores o Punteros es un tipo especial de variable que guarda direcciones de memoria
    int* ptrInt; // Declaro un puntero
    int a = 5;
    ptrInt = &a; // Guardo la dirección de memoria de la variable "a"

    cout << "Dirección de memoria ptrInt: " << ptrInt << endl;
    cout << "Dirección de memoria de 'a': " << &a << endl;
    cout << "Valor al que apunta 'ptrInt': " << *ptrInt << endl;

    int* ptrInt2;
    ptrInt2 = new int(10); // Con memoria dinamica
    cout << "Dirección de memoria ptrInt: " << ptrInt2 << endl;
    cout << "Dirección de memoria de 'a': " << *ptrInt2 << endl;
    */

    Shape* shapes[5];
    shapes[0] = new Circle(2,0,0);
    shapes[1] = new Rectangle(2,4,0,0);
    shapes[2] = new Poligono(3,0,0);
    shapes[3] = new Shape(0,0);
    shapes[4] = new Circle(5,0,0);

    for (int i = 0; i < 5; i++){
        cout << shapes[i] -> draw() << endl;
    }

    vector <Shape*> shapes2;
    shapes2.push_back(new Circle(3,1,2));
    shapes2.push_back(new Rectangle(3,1,2,3));
    shapes2.push_back(new Shape(4,6));

    cout << endl << "----------- CON VECTOR -----------" << endl << endl;

    for (int i = 0; i < shapes2.size(); i++){
        cout << shapes2[i] -> draw() << endl;
    }
    
    //Puedes ver todos los métodos de vector en:
    // https://www.tutorialspoint.com/cpp_standard_library/vector.htm

    return 0;
}