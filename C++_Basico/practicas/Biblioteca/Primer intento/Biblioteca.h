//Clase [Padre], elementos a usar Nombre, Autor, No_Paginas, Codigo
#ifndef __Biblioteca_h__
#define __Biblioteca_h__
 

#include <iostream>
#include <vector>
#include <variant>
#include <string>
#include <typeinfo>
using namespace std;

string Nombre, Autor, Codigo, Hubicacion;
int No_Paginas, Tipo;
int tmp_int;
string tmp_string;
vector<vector<variant<int,string>>> tmp_Vect;
vector<variant<int,string>> tmp_SVect;

class Biblioteca{
	protected:

		//
		string Nombre_Libro, Autor_Libro, Codigo_Libro, Hubicacion_Libro, Estad;
		int No_Paginas_Libro, Tipo_Libro;
    
		//Libros
    	vector<vector<variant<int,string>>> Registro;
		//vector<Biblioteca> Libreria;

    	//usuario
    	int interacion;


	public:

		//Variables temporales

    	Biblioteca(string Nombre_Libro_tmp,string Autor_Libro_tmp,string Codigo_Libro_tmp,int Nopag_Libro){
			Nombre = Nombre_Libro_tmp;
			Autor_Libro = Autor_Libro_tmp;
			Codigo_Libro = Codigo_Libro_tmp;
			No_Paginas_Libro = Nopag_Libro;
		}
		Biblioteca(); 
    	virtual void Informacion(); // ya esta
    	int Menu(); // ya esta
		void Archivo(vector<vector<variant<int,string>>>); //ya esta
    	vector<variant<int,string>> Registrar();
		Biblioteca archivar(vector<variant<int,string>>);
		void SetRegistro(vector<variant<int,string>>); // ya esta
    	vector<vector<variant<int,string>>> Getregistro(); // ya esta
    	int buscar();
    	~Biblioteca();
};

#endif

// Biblioteca::Biblioteca(/* args */)
// {
// }

// Biblioteca::~Biblioteca()
// {
// }
