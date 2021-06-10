//Relizado por Sergio Gonzalez - A01745446

#include "../include/Reproduccion.hpp" 
#include <iostream>
#include <string>

using std::string;
	
Reproduccion::Reproduccion() {
    reproduccion = true;
    velReproduccion = 1.0;
}

string Reproduccion::isReproducido(bool reproduccion) {

    string repStatus;

    if (reproduccion == true) {
        repStatus = "PLAY";
    }

    else {
        repStatus = "PAUSA";
    } 

    return "Actualmente la reproduccion se encuentra en ("+repStatus+") ";
}

void Reproduccion::reproducir(){
    reproduccion = true;
}
void Reproduccion::pausar() {
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



