//

#include "SciFi.h"

SciFi::SciFi(string Nombre_Libro,string Autor_Libro,int NO_Paginas_Libro,string Codigo_Libro,int Año_Libro): Biblioteca(Nombre_Libro, Autor_Libro, NO_Paginas_Libro, Codigo_Libro){

    Year = Año_Libro;

}

void SciFi::Informacion(){
    Biblioteca::Informacion();
    cout<<"que ese desarolla en el año ["<<Year<<"]"<<endl;
    
}

SciFi::~SciFi(){

}