//Realizado por Sergio Gonzalez - A01745446

#ifndef REPRODUCCION_H
#define REPRODUCCION_H
	
class Reproduccion  {
	private:
		bool reproduccion;
		
	public:
		Reproduccion();

		bool isReproducido();
		void reproducir();
		void pausar();
		void siguienteVideo();
		void anteriorVideo();
};
#endif