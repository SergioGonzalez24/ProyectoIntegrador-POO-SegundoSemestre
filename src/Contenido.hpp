//Realizado por Jorge Rojas, A01745334

#ifndef CONTENIDO_H
#define CONTENIDO_H

#include <string>
using namespace std;

class Contenido {
    private:
        
    protected:
        string titulo;
        int duracion;
        
    public:
        Contenido();
        Contenido(string t, int d);

};

#endif