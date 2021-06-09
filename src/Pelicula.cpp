//Realizado por Jorge Rojas, A01745334

#include "Pelicula.hpp"
#include <iostream>

//Constructores
Pelicula::Pelicula(string t, int d, string g){
    this-> titulo = t;
    this-> duracion = d;
    this-> genero = g;
}