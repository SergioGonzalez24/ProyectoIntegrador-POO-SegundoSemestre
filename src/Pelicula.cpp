//Realizado por Jorge Rojas, A01745334

#include "../include/Pelicula.hpp"
#include <iostream>

//Constructores
Pelicula::Pelicula(string t, int d, string g){
    this-> titulo = t;
    this-> duracion = d;
    this-> genero = g;
}

void Reproduccion::reproducir(){
    cout << "Pelicula reproducida" << endl;
    reproduccion = true;
}
void Reproduccion::pausar() {
    cout << "Pelicula pausada" << endl;
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
