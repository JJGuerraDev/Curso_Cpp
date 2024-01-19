//

#include "Biblioteca.h" 

Biblioteca::Biblioteca(string Nombre_Libro,string Autor_Libro,int NO_Paginas_Libro,string Codigo_Libro){

    Nombre = Nombre_Libro;
    Autor = Autor_Libro;
    No_Paginas = NO_Paginas_Libro;
    Codigo = Codigo_Libro;

}

void Biblioteca::Informacion(){

    cout<<"el libro ["<<Nombre<<"]"<<endl;
    cout<<"del autor ["<<Autor<<"]"<<endl;
    cout<<"con codigo de indentificacio ["<<Codigo<<"]"<<endl;
    cout<<"con la cantidad de paginas ["<<No_Paginas<<"]"<<endl;

}

Biblioteca::~Biblioteca(){
}