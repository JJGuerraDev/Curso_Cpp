//

#include "Ciencias.h"

Ciencias::Ciencias(string Nombre_Libro_tmp,string Autor_Libro_tmp,string Codigo_Libro_tmp, int Nopag_Libro, string Area_Libro) : Biblioteca(Nombre_Libro_tmp, Autor_Libro_tmp, Codigo_Libro_tmp, Nopag_Libro){
    Area = Area_Libro;
}



Ciencias::~Ciencias(){
    
}