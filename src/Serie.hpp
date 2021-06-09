//Realizado por Jorge Rojas, A01745334

#ifndef SERIE_H
#define SERIE_H
#include "Contenido.hpp"

#include <string>
using namespace std;

class Serie : public Contenido {
    private:
        string nombre;
        string genero;
        Contenido episodio; //Esto debería ser un array o algo así, basicamente una serie debe tener un conjunto de videos

    public:
        Serie(string t, int d, string n, string g);

};

#endif