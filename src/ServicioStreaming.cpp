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
    usr1.setNombreUsuario(nUsr);
    usr1.setIdUsuario(idUsr);




}
