//

#include "Ingenieria.h"

Ingenieria::Ingenieria(string Nombre_Libro,string Autor_Libro,int NO_Paginas_Libro,string Codigo_Libro, string Materia_libro):Biblioteca(Nombre_Libro, Autor_Libro, NO_Paginas_Libro, Codigo_Libro){
    Materia = Materia_libro;
}

void Ingenieria::Informacion(){
    Biblioteca::Informacion();
    cout<<"de la Materia ["<<Materia<<"]"<<endl;
}

Ingenieria::~Ingenieria(){
    
}