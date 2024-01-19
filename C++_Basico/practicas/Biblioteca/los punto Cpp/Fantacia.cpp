//


#include <string>
#include "Fantacia.h"
//#include "Biblioteca.h"


Fantacia::Fantacia(string Nombre_Libro,string Autor_Libro,int NO_Paginas_Libro,string Codigo_Libro, string Magia_Libro) : Biblioteca(Nombre_Libro, Autor_Libro, NO_Paginas_Libro, Codigo_Libro){

    Magia = Magia_Libro;

}

void Fantacia::Informacion(){
    Biblioteca::Informacion();
    cout<<"con el sistema de magia ["<<Magia<<"]"<<endl;
}

Fantacia::~Fantacia(){
    
}