//Realizado por Jorge Rojas, A01745334

#ifndef CONTENIDO_H
#define CONTENIDO_H

#include <string>
using namespace std;

class Contenido {

    protected:
        string titulo;
        float duracion;
        int calificacion;
        
    public:
        Contenido();
        Contenido(string t, float d, int c);

        void setCalificacion(int c);
        void setTitulo(string t);
        void setDuracion(float d);
        
        int getCalificacion(){return calificacion;}
        string getTitulo(){return titulo;}
        float getDuracion(){return duracion;}
        virtual void mostrarDatos();
        

};

#endif