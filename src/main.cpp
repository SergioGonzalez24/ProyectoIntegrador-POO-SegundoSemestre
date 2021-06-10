// Proyecto Integrador Programacion orientada a objetos

/* 
Codigo desaroyado por:
Sergio Gonzalez - A01745446
Jorge Rojas - A01745

Fecha de creacion 03/05/2021

Modelar un servicio de Streaming Utilizando OPP en c++
*/

#include <iostream>
#include <string>
#include "../include/Pelicula.hpp"
#include "../include/Contenido.hpp"
#include "../include/ServicioStreaming.hpp"
#include "../include/Reproduccion.hpp"
#include "../include/Serie.hpp"

using namespace std;

int main() {

    ServicioStreaming servicio;

    cout << "Bienvenido a " << servicio.getNombreServicio() << endl;

    cout << "Este es nuestro catalgo mas reciente: " << endl;
    cout << "Peliculas: \nShrek,Star Wars,Mama Mia,Star Treck,Terminator" << endl;
    cout << "Series: \nDragon Ball Z,Flash,Doctor Who,Sherlock,One Punch Man" << endl;

    cout << "Ingrese los datos de lo que desea ver :" << endl;

        cout << endl;
        cout << "Titulo: " ;
        string titulo;
        cin >> titulo;
        cout << endl;
        cout << "Duracion: " ;
        float duracion;
        cin >> duracion;
        cout << endl;
        cout << "Calificacion: " ;
        int calificacion;
        cin >> calificacion;
        cout << endl;
        Contenido cont1(titulo,duracion,calificacion);

    int op;
    cout << "Seleccione la siguiebte opcion para determinar si es pelicula o serie \n(Peliculas --> 1\nSeries --> 2" << endl;
    cin >> op;

    if (op == 1) {
    
        cout << "Ingrese el genero de la pelicula: " ;
        string genero;
        cin >> genero;
        cout << endl;

        Pelicula pelicula1(titulo,duracion,calificacion,genero);
        pelicula1.mostrarDatos();
    }

    else if(op == 2) {
    
        cout << "Ingrese la temporada de la Serie: " ;
        int temporada;
        cin >> temporada;
        cout << endl;
            
        cout << "Ingrese la el capitulo de la Serie: " ;
        int capitulo;
        cin >> capitulo;
        cout << endl;

        Serie serie1(titulo,duracion,calificacion,capitulo,temporada);
        serie1.mostrarDatos();
    }
    
    cout << "Gracias y vuelva pronto";
    return 0;
}