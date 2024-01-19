//Primera classe | Libros

/*

	Clase: Libro
	Descripcion: Esta clase se encarga de Gestionar
				la informacion de los libros en el
				inventario

	La Clase Libro Tiene los Siguientes Metodos:
		- Guarda informacio y carga informacion desde un archivo tipo .CSV
		- Muestra Informacion sobre los libros en el inventaro.
		- agrega Libros al Inventario
		- Dar el iventario

	Uso:
		Libro()
		Cargar_Inventario()
		Mostrar_Inventario()

	Nota
		para manejar esta clase se tiene que hacer de forma manual

*/

//para ser usado
#ifndef __Libro_h__
#define __Libro_h__

//librerrias a usar
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Libro{

	private:
		
		// Nombre del libro;Autor del Libro
		vector<vector<string>> Matriz_Libro;
		vector<string> Vector_Libro;


	public:
	
		// Variables
			// string's
			string LIbro_Informacion, tmp_text;

			// char
			char Element_text;

			// int's
			int Contador_punto_coma;

			//Fstream
			ofstream Guardar_Libro;
			ifstream Cargar_Libro;

		//Instrucciones
		
			//constructor
			Libro();

			// enseñar informacion
			void Mostrar_Inventario();

			//ingreso de nuevos libros
			void Agregar_Inventario();

			// Se encarga de leer la informacion de un archivo
			void Cargar_Inventario();

			//Guardar informacion en un archivo
			void Guardar_Invetario();

			//Buscar
			void Buscar_Libro();

			//Confirmar
			bool Confirmar_Libro();


			// Set y Get
			vector<vector<string>> Get_Inventario();
			//void Setinfo();

};


//cerrar lo usado
#endif