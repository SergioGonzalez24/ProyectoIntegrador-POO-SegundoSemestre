//Realizado por Jorge Rojas, A01745334

#include "../include/Contenido.hpp"
#include <iostream>

//Constructores
Contenido::Contenido(){
    titulo = "Video";
    duracion = 3000;
    calificacion = 1;
}
Contenido::Contenido(string t, float d, int c){
    this-> titulo = t;
    this-> duracion = d;
    this-> calificacion = c;
}

//Calificación
void Contenido::setCalificacion(int c){
    this-> calificacion = c;
}

void Contenido::setTitulo(string t){
    this-> titulo = t;
}

void Contenido::setDuracion(float d){
    this-> duracion = d;
}




void Contenido::mostrarDatos() {
    cout << "Titulo: " << getTitulo() << endl;
    cout << "Duracion: " << getDuracion() << endl;
    cout << "Calificacion: " << getCalificacion() << endl;
}