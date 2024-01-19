//Segunda Clase | Usuario

/*

	Clase: Usuario
	Descripcion: Esta clase se encarga de Gestionar
				la informacion de las cuentas de 
				Usuario

	La Clase Usuario Tiene los Siguientes Metodos:
		- Guarda informacio y carga informacion desde un archivo tipo .CSV
		- Muestra Informacion sobre las cuentas de Usuario.
		- agrega Usuario 
		- Dar las cuentasd e Usarios

	Uso:
		Usuario()
		Cargar_Inventario()
		Mostrar_Inventario()

	Nota
		para manejar esta clase se tiene que hacer de forma manual

*/

//para ser usado
#ifndef __Usuario_h__
#define __Usuario_h__

//librerrias a usar
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Usuario{

	private:
		
		// Nombre;Apellido;Documento
		vector<vector<string>> Matriz_Usuarios;
		vector<string> Vector_Usuario;

	public:

		// variables tipo
		string Nombre_User, Apellido_User, Document_User, tmp_text;

		//elemento Char
		char element_Char;

		//valores int
		int Contador_Punto_coma;

		//elementos tipo fstram
		ifstream Cargar_Usuarios;
		ofstream Guardar_Usuario;

		//constructor
		Usuario();

		//mostrar
		void Mostrar_Cuentas();

		//Agregar Usuario
		void Agregar_Cuenta();
		bool Confirmar_Usuario();

		//Lectura Guardado de Usuario
		void Cargar_Cuentas();
		void Guardar_Cuentas();

		//BUscar
		void Buscar_Cuenta();

		// get y Set
		
		vector<vector<string>> Get_Cuentas_Usuarios();
		
		// void SetUsuario();


};

// declaracion final
#endif