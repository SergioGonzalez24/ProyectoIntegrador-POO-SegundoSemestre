//Realizado por Jorge Rojas, A01745334

#include "../include/Pelicula.hpp"
#include <iostream>
#include <string>

using namespace std;

//Constructores
Pelicula::Pelicula(string t, float d, int c, string g) : Contenido(string t, float d, int c){

    this-> genero = g;
}
