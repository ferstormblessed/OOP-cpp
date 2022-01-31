#include <iostream>

using namespace std;

#include "Territorio.h"
#include "Pais.h"
#include "Estado.h"


int main(){
    Territorio* territorios[5];

    territorios[0] = new Territorio("Westeros", 1000000000);
    territorios[1] = new Pais("México", 200000, "Español", "pesos");
    territorios[2] = new Pais("USA", 300000, "Ingles", "dolares");
    territorios[3] = new Estado("Jalisco", 40000, 1000);
    territorios[4] = new Estado("CDMX", 5000, 2000);

    for (int i = 0; i < sizeof(territorios); i++){
        cout << *territorios[i];
    }

    return 0;
}