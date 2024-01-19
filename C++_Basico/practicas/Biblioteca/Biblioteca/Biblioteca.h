// clase heredera de Libro y Usuario, pero incapas de manipularalas [sin protect]

/*

	Clase: Biblioteca
	Hereda: Libro Usuario
	Descripcion: Esta clase se encarga de Gestionar
				la informacion de las Clases Usuario
				libro y un registro

	La Clase Biblioteca Tiene los Siguientes Metodos:
		- Guarda informacio y carga informacion desde un archivo tipo .CSV
		- Muestra Informacion sobre los Registro.
		- agrega Registros de prestamo 
		- interactura con sus clases padre

	Uso:
		Biblioteca()
		Menu_Principal()

	Nota
		todos sus metodos estan conectasd de forma directa o inidrecamtente con otros

*/

//LLamar para usar en Include
#ifndef __Biblioteca_h__
#define __Biblioteca_h__

//llamar las otras Clases
#include "Libro.h"
#include "Usuario.h"

// aqui va otras bibliotecas
#include <vector>

// elementos a usar

//clase de gestion, llamada Biblioteca
class Biblioteca : public Libro, public Usuario{
	
	private:

	// matrix
	vector<vector<string>> Matriz_Registro;
	
	//Vector
	vector<string> Vector_Registro;

	public:

	//variables

		//tipo Vector
		vector<string> Vector_Libro_Informacion;
		vector<string> Vector_Cuenta_Informacion;
 
		//Tipo Matrix
		vector<vector<string>> Matriz_Inventario_Libros;
		vector<vector<string>> Matriz_Cuentas_Usuarios;

		//Tipo fstream
		ifstream Carga_Registro;
		ofstream Guardar_Registro;

		//tipo int
		int Opcion;

		// elementos tipo String
		string User_Nombre,User_Apellido,User_Document,User_Completo;

	//Metodos

		// constructor
		Biblioteca();

		//Interaciones
		void llamar_Mostrar_Inventario();
		void llamar_Mostrar_Cuentas();
		void llamar_Mostrar_Registro();
		void Realizar_Prestamos();

		//Organizacion definitiva
		void Menu_Principal();
		void Gestion_libros();
		void Gestion_Cuentas();
		void Gestion_Registros();

		//buscar por Sub String
		void Buscar_Registro();

		//Salida del Programa
		void end_Program();
	
		//Mostrar a usuario
		void Mostrar_Registro();

		//agregar Registro
		void Agregar_Registro();
		void Agregar_Registro(vector<string>);
		bool Confirmar_Registro();
	
		//Cargar Registro Guardado
		void Cargar_Registros();
	
		//guardar Registros
		void Guardar_Registros();
	
		//Cargar elementos de la clase Libro
		void Invetario_Libros();
	
		// Cargar elementos de la clase Usuario
		void Listado_Cuentas();


};

//fin de la clase
#endif