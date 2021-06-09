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

		virtual void reproducir();
		virtual void pausar();
		virtual void adelantar(int valOpt);
		virtual void retroceder(int valOpt);
		virtual void repNormal();
};
#endif