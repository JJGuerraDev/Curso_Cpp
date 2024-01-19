//

#include "SciFi.h"

SciFi::SciFi(string Nombre_Libro_tmp,string Autor_Libro_tmp,string Codigo_Libro_tmp, int Nopag_Libro, int Año_Libro): Biblioteca(Nombre_Libro, Autor_Libro, NO_Paginas_Libro, Codigo_Libro){

    Year = Año_Libro;

}

void SciFi::Informacion(){
    Biblioteca::Informacion();
    cout<<"que ese desarolla en el año ["<<Year<<"]"<<endl;
    
}

SciFi::~SciFi(){

}