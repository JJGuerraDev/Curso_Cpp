// llamar clase
#include "Biblioteca.h"

// main

int main(void){

	// Clase Libro

		// Libro* Inventario_Libros = new Libro();

		// Inventario_Libros->Cargar_Inventario();

		// Inventario_Libros->Mostrar_Inventario();

		// Inventario_Libros->Agregar_Inventario();

		// Inventario_Libros->Guardar_Invetario();

	// Clase Usuario 

		// Usuario* Cuentas_Usuarios = new Usuario();

		// Cuentas_Usuarios->Cargar_Cuentas();

		// Cuentas_Usuarios->Agregar_Cuenta();

		// Cuentas_Usuarios->Mostrar_Cuentas();

		//Cuentas_Usuarios->Guardar_Cuentas();


	// Clase Biblioteca

		// Biblioteca* Registro_Herramienta = new Biblioteca();

		// Registro_Herramienta->Cargar_Registros();

		// Registro_Herramienta->Agregar_Registro();

		// Registro_Herramienta ->Mostrar_Registro();

		//Registro_Herramienta->Guardar_Registros();


	//Clase Biblioteca + Libro

		// Biblioteca* Registro_Herramienta = new Biblioteca();

		// Registro_Herramienta->Invetario_Libros();

		// Libro* Inventario_Libros = new Libro();

	// Clase Biblioteca (Usuario + Libro)

		Biblioteca* Registro_Biblioteca = new Biblioteca();

		//Registro_Biblioteca->Cargar_Cuentas();

		Registro_Biblioteca->Menu_Principal();


	return 0;

}