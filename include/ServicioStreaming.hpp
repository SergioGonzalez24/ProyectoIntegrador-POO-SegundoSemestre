//Relizado por Sergio Gonzalez - A01745446

#ifndef STREAMING_H
#define STREAMING_H
#include "Usuario.hpp"
#include "Contenido.hpp"
#include <string>

using std::string;
	
class ServicioStreaming  {
	private:
		string nombre;
		Usuario datosUsuario;
		Contenido datosContenido;

	public:
		ServicioStreaming();
		ServicioStreaming(string nServicio, string nUsr, string idUsr,string t, float d, int c);

		void setDatosContenido(string t, float d, int c);
		void setDatosUsuario(string nUsr, string idUsr);



};
#endif