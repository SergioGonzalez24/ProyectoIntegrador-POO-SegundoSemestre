#include "../include/Reproduccion.hpp" 
#include <iostream>
#include <string>

using std::string;
	
Reproduccion::Reproduccion() {
    reproduccion = true;
}

string Reproduccion::isReproducido(bool reproduccion) {

    string repStatus;

    if (reproduccion == true) {
        repStatus = "PLAY";
    }

    else {
        repStatus = "PAUSA";
    } 

    return "Actualmente la reproduccion se encuentra en ("+repStatus+")";
}

void Reproduccion::reproducir(){
    reproduccion = true;
}
void Reproduccion::pausar() {
    reproduccion = false;
}




