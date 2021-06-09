#ifndef STREAMING_H
#define STREAMING_H
#include "Usuario.hpp"
#include <string>

using std::string;
	
class ServicioStreaming  {
	private:
		string nombre;
		Usuario datosUsuario;
	public:
		ServicioStreaming();
		ServicioStreaming(string nServicio, string nUsr, string idUsr);
		void setDatosUsuario(string nUsr, string idUsr);
		virtual string getNombreStream() {return nombre;}

};
#endif