#include "../include/ServicioStreaming.hpp"
#include "../include/Usuario.hpp"
#include <iostream>


ServicioStreaming::ServicioStreaming() {
    nombre = "Netflix";
}

ServicioStreaming::ServicioStreaming(string nServicio, string nUsr, string idUsr) {
    this-> nombre = nServicio;
    //ATORADO
    Usuario usr1(nUsr,idUsr);
    nombreUsuario = usr1.setNombreUsuario(nUsr);
    idUsuario = usr1.setIdUsuario(idUsr);




}
