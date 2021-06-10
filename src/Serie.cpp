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
