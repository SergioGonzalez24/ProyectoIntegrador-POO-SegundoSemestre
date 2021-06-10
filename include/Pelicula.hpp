//Realizado por Jorge Rojas, A01745334

#ifndef PELICULA_H
#define PELICULA_H
#include "Contenido.hpp"

#include <string>
using namespace std;

class Pelicula : public Contenido {

    private:
    
        string genero;

    public:
        Pelicula(string t, float d, int c, string g);

        void setGenero(string g);
        void info();

};

#endif