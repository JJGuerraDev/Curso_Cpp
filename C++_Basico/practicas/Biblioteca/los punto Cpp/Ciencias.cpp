//

#include "Ciencias.h"

Ciencias::Ciencias(string Nombre_Libro,string Autor_Libro,int NO_Paginas_Libro,string Codigo_Libro, string Area_Libro) : Biblioteca(Nombre_Libro, Autor_Libro, NO_Paginas_Libro, Codigo_Libro){
    Area = Area_Libro;
}

void Ciencias::Informacion(){
    Biblioteca::Informacion();
    cout<<"del area ["<<Area<<"]"<<endl;
}

Ciencias::~Ciencias(){
    
}