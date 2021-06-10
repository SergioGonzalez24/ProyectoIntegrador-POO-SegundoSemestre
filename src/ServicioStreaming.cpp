#include "../include/ServicioStreaming.hpp"

#include "../include/Contenido.hpp"
#include <iostream>


ServicioStreaming::ServicioStreaming() {
    nombre = "Netflix";
}

ServicioStreaming::ServicioStreaming(string nServicio, string t, float d, int c) {
    this-> nombre = nServicio;

    datosContenido = Contenido(t,d,c);
}


void ServicioStreaming::setDatosContenido(string t, float d, int c) {
    datosContenido.setCalificacion(c);
    datosContenido.setTitulo(t);
    datosContenido.setDuracion(d);

}



