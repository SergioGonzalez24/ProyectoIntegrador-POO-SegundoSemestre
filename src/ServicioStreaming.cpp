#include "../include/ServicioStreaming.hpp"
#include "../include/Usuario.hpp"
#include <iostream>


ServicioStreaming::ServicioStreaming() {
    nombre = "Netflix";
}

ServicioStreaming::ServicioStreaming(string nServicio, string nUsr, string idUsr) {
    this-> nombre = nServicio;
    datosUsuario = Usuario(nUsr, idUsr);
}



