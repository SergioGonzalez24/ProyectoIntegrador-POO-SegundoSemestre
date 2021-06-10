//Realizado por Jorge Rojas, A01745334

#include "../include/Serie.hpp"  
#include "../include/Contenido.hpp"
#include <string>
#include <iostream>

using namespace std;

Serie::Serie() {}
Serie::Serie(string t, float d, int c, int capitulo, int temporada) {
    this-> capitulo = capitulo;
    this-> temporada = temporada;

}

void Serie::setCapitulo(int capitulo) {
    this->capitulo = capitulo;

}
void Serie::setTemporada(int temporada) {
    this->temporada = temporada;
}
void Serie::mostrarDatos() { 
    Contenido::mostrarDatos();
    cout << "Ca[pitulo: "<<getCapitulo()<< endl;
    cout << "Temporada: "<<getTemporada()<< endl;
}