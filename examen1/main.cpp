#include <iostream>
#include "Cancion.h"
#include "Cancion.cpp"
#include "PlayList.h"
#include "PlayList.cpp"
#include <string>

using namespace std;

int main(){
    Cancion cancion1("Space Oddity", 1130, "Rock"),
            cancion2("Purple Haze", 360, "Rock");
    
    PlayList playList("Mis favoritos");

    playList.agregarCancion(cancion1);
    playList.agregarCancion(cancion2);

    playList.imprime(playList);

    return 0;
}