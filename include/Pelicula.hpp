#ifndef PELICULA_H
#define PELICULA_H
#include <string>
#include "../include/Contenido.hpp"
using namespace std;
	
class Pelicula : public Contenido {
	private:
		string genero;
	public:
		Pelicula();
		Pelicula(string t, float d, int c, string genero);

		string genero() { return genero;}

		virtual void mostrarDatos();

};
#endif