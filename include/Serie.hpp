//Codigo desaroyado por: Jorge Rojas - A01745334
#ifndef SERIE_H
#define SERIE_H
#include "Contenido.hpp"

	
class Serie : public Contenido {
	private:
		int capitulo;
		int temporada;

	public:
		Serie();
		Serie(string t, float d, int c, int capitulo, int temporada);

		int getCapitulo(){ return capitulo;}
		int getTemporada(){ return temporada;}
		void setCapitulo(int capitulo);
		void setTemporada(int temporada);
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