//

#include "Fantacia.h"


Fantacia::Fantacia(string Nombre_Libro_tmp,string Autor_Libro_tmp,string Codigo_Libro_tmp, int Nopag_Libro, string Magia_Libro) : Biblioteca(Nombre_Libro, Autor_Libro, NO_Paginas_Libro, Codigo_Libro){

    Magia = Magia_Libro;

}

void Fantacia::Informacion(){
    Biblioteca::Informacion();
    cout<<"con el sistema de magia ["<<Magia<<"]"<<endl;
}

Fantacia::~Fantacia(){
    
}