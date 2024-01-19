//

#include "Biblioteca.h"
#include "Ciencias.h"
#include "Ingenieria.h"
#include "SciFi.h"
#include "Fantacia.h" 

//Constructores

Biblioteca::Biblioteca(){

	//Definir y configurara
	interacion = Menu();

	switch(interacion){
		case 1:
			Archivo(Getregistro());
			break;

		case 2:	
		  archivar(Registrar());
		  break;
		
		default:
			break;
	}  


}

Fantacia::Fantacia(string Nombre_Libro_tmp,string Autor_Libro_tmp,string Codigo_Libro_tmp, int Nopag_Libro, string Magia_Libro) : Biblioteca(Nombre_Libro_tmp, Autor_Libro_tmp, Codigo_Libro_tmp, Nopag_Libro){

    Magia = Magia_Libro;

}



Ciencias::Ciencias(string Nombre_Libro_tmp,string Autor_Libro_tmp,string Codigo_Libro_tmp, int Nopag_Libro, string Area_Libro) : Biblioteca(Nombre_Libro_tmp, Autor_Libro_tmp, Codigo_Libro_tmp, Nopag_Libro){
    Area = Area_Libro;
}

int Menu(){
	 
	cout<<"Bienvenido al la Biblioteca"<<endl;
	cout<<"¿Que desea?"<<endl;
	cout<<"[1] ver los LIbros disponibles"<<endl;
	cout<<"[2] registrar un libro"<<endl;
	cout<<"[3] Buscar un libro"<<endl;
	cout<<"[0] Salir"<<endl;
	cin>>tmp_int;

	return tmp_int;

}

void Biblioteca::Archivo(vector<vector<variant<int,string>>> Archivo_Libros){
	cout<<"aqui estan todos los libros disponibles"<<endl;

	for(int Fila = 0; Fila < Archivo_Libros.size(); Fila++){
		cout<<"[";
		for(int Colum = 0; Colum < Archivo_Libros[Fila].size(); Colum++){
			
			if((Colum > 0)&&(Colum<(Archivo_Libros[Fila].size()-1))){
				cout<<", ";
			}
			
			if (typeid(Archivo_Libros[Fila][Colum]) == typeid(tmp_int)){
				
				tmp_int = get <int>(Archivo_Libros[Fila][Colum]);
				cout<<tmp_int;

			}else{

				tmp_string = get<string>(Archivo_Libros[Fila][Colum]);
				cout<<tmp_string;
			}
			 
		}
		cout<<"]"<<endl;
	}
}

vector<variant<int,string>> Biblioteca::Registrar(){

	cout<<"ingrese la informacion del libro a registrar"<<endl;
	
	// Nombre [0]
	cout<<"Como se llama el Libro?: ";
	getline(cin, Nombre);
	tmp_SVect.push_back(Nombre);
	
	// Autor [1]
	cout<<"\n Como se llama el autor del Libro?: ";
	getline(cin, Autor);
	tmp_SVect.push_back(Autor);
	
	// Codigo [2]
	cout<<"\n Cual es el codigo del libro?: ";
	getline(cin, Codigo);
	tmp_SVect.push_back(Codigo);
	
	// Numero Paginas [3]
	cout<<"\n Cuantas paginas tiene el libro?: ";
	cin>>No_Paginas;
	tmp_SVect.push_back(No_Paginas);
	
	// Hubicacion [4]
	cout<<"\n donde se encuentra el libro?: ";
	getline(cin, Hubicacion);
	tmp_SVect.push_back(Hubicacion);
	
	// tipo [5]
	cout<<"\n que tipo de libro es?: "<<endl;
	cout<<"[1] Fantacia"<<endl;
	cout<<"[2] Sci-Fi"<<endl;
	cout<<"[3] Ingenieria"<<endl;
	cout<<"[4] Ciencia"<<endl;
	cin>>Tipo;
	tmp_SVect.push_back(Tipo);
	switch(Tipo){
		case 1:
				cout<<"\n que tipo de magia tiene el libro el libro?: ";
				getline(cin, Magia_tmp);
				tmp_SVect.push_back(Magia_tmp);
			break;
		
		case 2:
				cout<<"\n en que año se desarrolla el libro libro?: ";
				cin>>Year_tmp;
				tmp_SVect.push_back(Year_tmp);
			break;

		case 3:
				cout<<"\n de que materia del a ingenieria es el libro?: ";
				getline(cin, Materia_tmp);
				tmp_SVect.push_back(Materia_tmp);
			break;

		case 4:
				cout<<"\n de que area de la ciencia es el libro?: ";
				getline(cin, Materia_tmp);
				tmp_SVect.push_back(Materia_tmp);
			break;

	}

	return tmp_SVect;

}

Biblioteca Biblioteca::archivar(vector<variant<int,string>> Convertir){
	int Tipo = get<int>(Convertir[5]);
	//
	string Nombre = get<string>(Convertir[0]);
	string ;
	string;
	string;
	int;

	switch (Tipo){
	case 1:
		Fantacia *element = new Fantacia();
		break;
	
	default:
		break;
	}
}

// elemento vistual y variantes

void Biblioteca::Informacion(){

	cout<<"el libro ["<<Nombre<<"]"<<endl;
	cout<<"del autor ["<<Autor<<"]"<<endl;
	cout<<"con codigo de indentificacio ["<<Codigo<<"]"<<endl;
	cout<<"con la cantidad de paginas ["<<No_Paginas<<"]"<<endl;

}

void Fantacia::Informacion(){
    Biblioteca::Informacion();
    cout<<"con el sistema de magia ["<<Magia<<"]"<<endl;
}

void SciFi::Informacion(){
    Biblioteca::Informacion();
    cout<<"que ese desarolla en el año ["<<Year<<"]"<<endl;
    
}

void Ingenieria::Informacion(){
    Biblioteca::Informacion();
    cout<<"de la Materia ["<<Materia<<"]"<<endl;
}

void Ciencias::Informacion(){
    Biblioteca::Informacion();
    cout<<"del area ["<<Area<<"]"<<endl;
}

//elementos Get y/o Set

vector<vector<variant<int,string>>> Biblioteca::Getregistro(){
	return Registro;
}

void Biblioteca::SetRegistro(vector<variant<int,string>> Agregar){
	Registro.push_back(Agregar);
}

Biblioteca::~Biblioteca(){
}