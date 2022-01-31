#include "PlayList.h"
#include "Cancion.h"
#include <string>
#include <iostream>

using namespace std;

PlayList::PlayList(string nPlayList){
    this -> nombre = nPlayList;
    this -> size = 0;
}

void PlayList::agregarCancion(Cancion song){
    this -> canciones[this -> size] = song;
    this -> size ++;
}

int PlayList::duracionTotal(){
    int segTotal = 0;
    for (int i = 0; i< this -> size; i++){
        segTotal += this -> canciones[i].getDuracion();
    }
    return segTotal;
}

void PlayList::imprime(PlayList nPlayList){
    cout << "Play List " << this -> nombre << endl;
    for (int i = 0; i< this -> size; i++){
        this -> canciones[i].imprime();
    }
    cout << "La duración total de la Play List en segundos es " << nPlayList.duracionTotal() << endl;
}

/*
Profesor en el metodo imprime de playlist no se me ocurrió otra manera de hacer que funcionara. El programa hace lo que se le pide, pero se que es una manera "fea" de hacerlo.
*/