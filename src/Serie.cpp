//Realizado por Jorge Rojas, A01745334

#include "../include/Serie.hpp"
#include <iostream>

//Constructores
Serie::Serie(string t, int d, string n, string g, string cap, string tem){
    this-> titulo = t;
    this-> duracion = d;
    this-> nombre = n;
    this-> genero = g;
    this-> capitulo = cap;
    this-> temporada = tem;
}

void Reproduccion::reproducir(){
    cout << "Serie reproducida" << endl;
    reproduccion = true;
}
void Reproduccion::pausar() {
    cout << "Serie pausada" << endl;
    reproduccion = false;
}

void Reproduccion::adelantar(int valOpt) {
    if (valOpt == 1) {
        velReproduccion = 1.75;
    }
    else if (valOpt == 2) {
        velReproduccion = 2.0;
    }
    else {
       velReproduccion = 2.5; 
    }
}

void Reproduccion::retroceder(int valOpt) {

    if (valOpt == 1) {
        velReproduccion = -1.75;
    }
    else if (valOpt == 2) {
        velReproduccion = -2.0;
    }
    else {
       velReproduccion = -2.5; 
    }
}

void Reproduccion::repNormal() {
    velReproduccion = 1.0;

}

