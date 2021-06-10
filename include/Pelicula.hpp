//Realizado por Jorge Rojas, A01745334

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

		/*
		virtual void reproducir();
		virtual void pausar();
		virtual void adelantar(int valOpt);
		virtual void retroceder(int valOpt);
		virtual void repNormal();
*/
};
#endif