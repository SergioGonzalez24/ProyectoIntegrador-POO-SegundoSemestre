<<<<<<< HEAD
//Codigo desaroyado por: Jorge Rojas - A01745334
=======
//Realizado por Jorge Rojas, A01745334

>>>>>>> 5b6162f6cab93ce10f3528fa6a0df921aabd93f1
#ifndef PELICULA_H
#define PELICULA_H
#include <string>
#include "../include/Contenido.hpp"
#include "../include/Reproduccion.hpp" 
using namespace std;
	
class Pelicula : public Contenido {
	private:
		string genero;
	public:
		Pelicula();
		Pelicula(string t, float d, int c, string genero);
		
		
		string getGenero(){ return genero;}
		void setGenero(string genero);
		virtual void mostrarDatos();
};
#endif