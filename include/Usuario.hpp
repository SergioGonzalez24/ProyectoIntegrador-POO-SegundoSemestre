#ifndef USUARIO_H
#define USUARIO_H
#include <string>

using std::string;
	
class Usuario  {
	private:
		string nombre;
		string id;

	public:
		Usuario();
		Usuario(string n, string id);

		void setNombreUsuario(string n);
		void setIdUsuario(string id);

};
#endif