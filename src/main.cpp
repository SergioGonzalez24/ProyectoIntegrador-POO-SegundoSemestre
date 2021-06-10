// Proyecto Integrador Programacion orientada a objetos

/* 
Codigo desaroyado por:
Sergio Gonzalez - A01745446
Jorge Rojas - A01745

Fecha de creacion 03/05/2021

Modelar un servicio de Streaming Utilizando OPP en c++
*/

#include <iostream>
#include <string>

#include "../include/Contenido.hpp"
#include "../include/Pelicula.hpp"
#include "../include/Serie.hpp"
#include "../include/ServicioStreaming.hpp"
#include "../include/Usuario.hpp"
#include "../include/Reproduccion.hpp"

using namespace std;

int main() {

    ServicioStreaming servicio;

    cout << "Bienvenido a " << servicio.getNombreStream() << endl;
    cout << "Ingrese su usuario: ";
    string usr;
    cin >> usr;
    cout << endl;
    cout << "Ingrese su ID: ";
    string id;
    cin >> id;
    cout << endl;
    servicio.setDatosUsuario(usr,id);

    




    return 0;
}