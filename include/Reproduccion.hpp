//Realizado por Sergio Gonzalez - A01745446

#ifndef REPRODUCCION_H
#define REPRODUCCION_H
#include <string>

using std::string;

	
class Reproduccion  {
	private:
		bool reproduccion;
		float velReproduccion;
		
	public:
		Reproduccion();

		string isReproducido(bool reproduccion);

		void reproducir();
		void pausar();
		void adelantar(int valOpt);
		void retroceder(int valOpt);
		void repNormal();
};
#endif