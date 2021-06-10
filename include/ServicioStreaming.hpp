//Relizado por Sergio Gonzalez - A01745446

#ifndef STREAMING_H
#define STREAMING_H

#include "Contenido.hpp"
#include <string>

using std::string;
	
class ServicioStreaming  {
	private:
		string nombre;

		Contenido datosContenido;

	public:
		ServicioStreaming();
		ServicioStreaming(string nServicio,string t, float d, int c);
		void setDatosContenido(string t, float d, int c);
};
#endif