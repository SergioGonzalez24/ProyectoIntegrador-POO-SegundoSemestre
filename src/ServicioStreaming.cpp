#include "../include/ServicioStreaming.hpp"
#include "../include/Usuario.hpp"
#include "../include/Contenido.hpp"
#include <iostream>


ServicioStreaming::ServicioStreaming() {
    nombre = "Netflix";
}

ServicioStreaming::ServicioStreaming(string nServicio, string nUsr, string idUsr,string t, float d, int c) {
    this-> nombre = nServicio;
    datosUsuario = Usuario(nUsr, idUsr);
    datosContenido = Contenido(t,d,c);
}

void ServicioStreaming::setDatosUsuario(string nUsr, string idUsr) {
    datosUsuario.setNombreUsuario(nUsr);
    datosUsuario.setIdUsuario(idUsr);
}

void ServicioStreaming::setDatosContenido(string t, float d, int c) {
    datosContenido.setCalificacion(c);
    datosContenido.setTitulo(t);
    datosContenido.setDuracion(d);

}



