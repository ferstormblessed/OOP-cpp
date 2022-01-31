#ifndef Tiempo_h_
#define Tiempo_h_
/*
 Implementa los funciones faltantes de la Clase Tiempo
 El valor de hora puede ser cualquier valor positivo
 El valor de minutos debe ser un valor entre 0 y 59
 Al realizar cualquier operación, el tiempo (hora y minutos) debe quedar con valores válidos
 */

class Tiempo {
    public:
        Tiempo();
        Tiempo(int h, int m);
        void setHora(int h);
        void setMinu(int m);
        int getHora() const;
        int getMinu() const;
        /*1. Agrega las definiciones de los métodos siguientes:*/
        // Miembro de la clase. operador ++ incrementa el Tiempo en 1 minuto y regresa el tiempo
        Tiempo operator ++(); //Listo
        //Friend. operador -- decrementa el Tiempo en 1 minuto y regresa el tiempo
        // si la hora es 0:0 y se pide decrementar, regresa 0:0
        friend Tiempo operator --(Tiempo& time); //Listo
        // Miembro de la clase. operador > Compara si el primer Tiempo es mayor que el segundo
        bool operator >(Tiempo& t2); // Listo
        // Miembro de la clase. operador + Para sumar tiempo + minutos, regresa un tiempo como resultado
        Tiempo operator +(int min); //Listo
        // Friend. operador + Para sumar minutos + tiempo, regresa un tiempo como resultado
        friend Tiempo operator +(int min, Tiempo& t); //Listo
        // Miembro de la clase. operador + Suma t1 con t2 y regresa un tiempo con el resultado
        Tiempo operator +(Tiempo& t); //Listo
        // Friend. operador += Suma t1 con t2 y deja el resultado en t1, no regresa nada
        friend void operator +=(Tiempo& t1, Tiempo& t2);
        // Sobrecarga el operador de salida
        friend ostream& operator <<(ostream &, const Tiempo&);
    private:
        int hora;
        int minu;
};

Tiempo::Tiempo() {
    hora = 0;
    minu = 0;
}

Tiempo::Tiempo(int h, int m) {
    hora = h;
    minu = m;
}

void Tiempo::setHora(int h) {
    hora = h;
}

void Tiempo::setMinu(int m) {
    minu = m;
}

int Tiempo::getHora() const{
    return hora;
}

int Tiempo::getMinu() const{
    return minu;
}

// Escribe TODOS los métodos que faltan.

Tiempo Tiempo::operator++(){
    if (minu == 59){
        hora ++;
        minu = 0;
        return *this;
    }
    else {
        minu ++;
        return *this;
    }
}

Tiempo operator--(Tiempo& time){
    if (time.hora == 0 && time.minu == 0){
        return Tiempo(0,0);
    }
    else{
        time.minu -= 1;
        return Tiempo(time.hora, time.minu);
    }
}

bool Tiempo::operator>(Tiempo& t2){
    if (hora > t2.hora){
        return true;
    }
    else if (hora == t2.hora){
        if (minu > t2.minu){
            return true;
        }
        else if (minu == t2.minu){
            return false;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

Tiempo Tiempo::operator+(int min){
    int newHour = hora,
        newMin = min + minu;
    while (newMin > 59){
        newMin -= 60;
        newHour += 1;
    }
    return Tiempo(newHour, newMin);
    
}

Tiempo operator+(int min, Tiempo& t){
    int newHour = t.hora,
        newMin = min + t.minu;
    while (newMin > 59){
        newMin -= 60;
        newHour += 1;
    }
    return Tiempo(newHour, newMin);
}

Tiempo Tiempo::operator+(Tiempo& t){
    int newHour,
        newMin;
    if (minu + t.minu > 59){
        newHour = t.hora + hora + 1;
        newMin = t.minu + minu - 60;
    }
    else {
        newMin = t.minu + minu;
        newHour = t.hora + hora;
    }
    return Tiempo(newHour, newMin);
}

void operator +=(Tiempo& t1, Tiempo& t2){
    int newHour = t1.hora + t2.hora,
        newMin = t1.minu + t2.minu;
    while (newMin > 59){
        newMin -= 60;
        newHour += 1;
    }
    t1.setHora(newHour);
    t1.setMinu(newMin);
}

//Escribe el encabezado de esta función, es la que sobrecarga al operador <<
ostream& operator<< (ostream& salida, const Tiempo& t){
    salida <<t.hora<<":";
    if (t.minu<10)
        salida << "0" <<t.minu;
    else
        salida << t.minu;
    return salida;
}

#endif
