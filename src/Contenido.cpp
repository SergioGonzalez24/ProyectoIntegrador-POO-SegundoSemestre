//Realizado por Jorge Rojas, A01745334

#include "../include/Contenido.hpp"
#include <iostream>

//Constructores
Contenido::Contenido(){
    titulo = "Video";
    duracion = 3000;
}
Contenido::Contenido(string t, int d){
    this-> titulo = t;
    this-> duracion = d;
}

//Calificación
void Contenido::setCalificacion(int c){
    this-> calificacion = c;
}