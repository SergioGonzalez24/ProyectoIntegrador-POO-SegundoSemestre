//Realizado por Sergio Gonzalez - A01745446

#ifndef REPRODUCCION_H
#define REPRODUCCION_H
#include <string>

using std::string;

	
class Reproduccion  {
	private:
		bool reproduccion;
		
	public:
		Reproduccion();

		string isReproducido(bool reproduccion);
		
		void reproducir();
		void pausar();
		void siguienteVideo();
		void anteriorVideo();
};
#endif