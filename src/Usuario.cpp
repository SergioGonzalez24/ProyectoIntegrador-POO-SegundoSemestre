#include "../include/Usuario.hpp"
#include <iostream>
#include <string>

using namespace std;

Usuario::Usuario() {
    nombre = "John Smith";
    id = "1234";
	
}

Usuario::Usuario(string n, string id) {
    this-> nombre = n;
    this-> id = id;
}

void Usuario::setNombreUsuario(string n) {
    this-> nombre = n;
     
}
void Usuario::setIdUsuario(string id) {
    this-> id = id;  
}
	