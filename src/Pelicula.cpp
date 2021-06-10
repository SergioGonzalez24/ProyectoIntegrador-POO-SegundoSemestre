//Realizado por Jorge Rojas, A01745334

#include "../include/Pelicula.hpp" 
#include <iostream>
#include <string>
#include "../include/Contenido.hpp" 

using namespace std;
	
Pelicula::Pelicula() {}
Pelicula::Pelicula(string t, float d, int c, string genero) {
    this->genero = genero;
}

void Pelicula::setGenero(string genero) {
    this-> genero = genero;
}

void Pelicula::mostrarDatos() {
    Contenido::mostrarDatos();
    cout << "Genero : " << getGenero(); 
}