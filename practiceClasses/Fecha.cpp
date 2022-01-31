#include <iostream>
#include "Fecha.h"
#include <string>

using namespace std;

Fecha::Fecha(){
    this -> dia = 0;
    this -> mes = 0;
}

Fecha::Fecha(int dia, int mes){
    this -> dia = dia;
    this -> mes = mes;
}

int Fecha::getDia(){
    return this -> dia;
}

int Fecha::getMes(){
    return this -> mes;
}

void Fecha::setDia(int dia){
    this -> dia = dia;
}

void Fecha::setMes(int mes){
    this -> mes = mes;
}

string Fecha::printFecha(){
    return to_string(this -> dia) + "/" + to_string(this -> mes);
}