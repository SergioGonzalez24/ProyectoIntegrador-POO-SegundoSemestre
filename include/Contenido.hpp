//Realizado por Jorge Rojas, A01745334

#ifndef CONTENIDO_H
#define CONTENIDO_H
#include "Reproduccion.hpp"

#include <string>
using namespace std;

class Contenido {

    protected:
        string titulo;
        float duracion;
        int calificacion;
        
    public:
        Contenido();
        Contenido(string t, int d);
        void setCalificacion(int c);
        int getCalificacion(){return calificacion;}
        

};

#endif