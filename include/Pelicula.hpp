//Realizado por Jorge Rojas, A01745334

#ifndef PELICULA_H
#define PELICULA_H
#include "Contenido.hpp"

#include <string>
using namespace std;

class Pelicula : public Contenido {
    private:
        string genero;
        int duracionLarga;

    public:
        Pelicula(string t, int d, string g);

        virtual void reproducir();
		virtual void pausar();
		virtual void adelantar(int valOpt);
		virtual void retroceder(int valOpt);
		virtual void repNormal();

};

#endif