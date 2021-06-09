#ifndef STREAMING_H
#define STREAMING_H
#include "Usuario.hpp"
#include <string>

using std::string;
	
class ServicioStreaming  {
	private:
		string nombre;

		Usuario nombreUsuario;
		Usuario idUsuario;

	public:
		ServicioStreaming();
		ServicioStreaming(string nServicio, string nUsr, string idUsr);
		virtual string getNombreStream() {return nombre;}
};
#endif