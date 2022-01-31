#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Cancion.h"
#include <string>

using namespace std;

class PlayList{
    private:
        int size;
        string nombre;
        Cancion canciones[20];
    public:
        PlayList(string nPlayList);
        void agregarCancion(Cancion song);
        int duracionTotal();
        void imprime(PlayList nPlayList);
};

#endif