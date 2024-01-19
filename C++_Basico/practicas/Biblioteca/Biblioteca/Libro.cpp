//contructores de Libro

//llamar Clase
#include "Libro.h"

//Constructores

Libro::Libro(){
/*
	Contructor
*/
}

//Mostrar_Inventario la informacion al usuario
void Libro::Mostrar_Inventario(){

	/*
		Metodo: Mostrar_Iventario
		Descripcion: Encargado en Mostrar los elementos del inventario de los libros

		Parametros:
			- Matriz_Libro: es donde se almacena toda la informacion de los libros

		Retorno: Ninguno

	*/

	for(int i = 0; i< int (Matriz_Libro.size()); i++){

		cout<<"el libro [No."<<i<<"] ; ["<<Matriz_Libro[i][0]<<"] ; ["<<Matriz_Libro[i][1]<<"]"<<endl;

	}

}

//ingreso de informacion de libro
void Libro::Agregar_Inventario(){

	/*
		Metodo: Agregar_Inventario()
		Descripcion: este metodo se encarga de registrar Libros Nuevos
					 al invetario de la biblioteca, pasando por un bucle
					 que impide que se suba informacion incorrecta

		Parametros:
			- nombre_libro: este es el espacio donde se guardan de forma
							temporal el String del Nombre del libro
			- nombre_autor: este es el espacio donde se guardan de forma
							temporal el String del Autor del libro
			- Vector_Libro: este es donde se crea el vetor de informacion
				|			para despues ser eviado a Matriz_Libro
			- Matriz_Libro: aqui es donde se almacena toda la informacion de
							los libros
	*/

	string nombre_libro, nombre_autor;

	do{
	
		cin.ignore();

		Vector_Libro.clear();

		cout<<"Porfavor ingrese el nombre del libro"<<endl;
		getline(cin,nombre_libro);
		//cout<<"["<<nombre_libro<<"]"<<endl;

		cout<<"Porfavor ingrese el nombre del Autor"<<endl;
		getline(cin,nombre_autor);

		Vector_Libro.push_back(nombre_libro);
		Vector_Libro.push_back(nombre_autor);
	
	}while(Confirmar_Libro() == false);


	Matriz_Libro.push_back(Vector_Libro);
	Guardar_Invetario();

	//temporal
	Mostrar_Inventario();

}

//Buscar libro
void Libro::Buscar_Libro(){

	/*
		Metodo: Buscar_Libro()
		Descricion: se encarga de realizar una Comparacion entre lo
					Solicitado con el contenido en el inventario de 
					Libros, para despues enseñar lo encontrado.

		Parametros:
			-Eleccion: es el que toma la decision de usuario e interactua con
						Switch case
			-Tipo: es el encargado de indicar que tipo de elemento del libro
					se requiere
			-Elemento_Buscado: es el elmeneto introducido por el usuario para
								que posteriormnete sea buscado en entre los 
								libros 
			-Elemento_comparativo: es el elemento que toma los sub-string
									para despues compararlos con el
									Elemento_Buscado
		
		Retorno:Ninguno
	*/

	//Variables
		int eleccion, Tipo;
		string Elemento_Buscado, Elemento_Comparativo;

	// clasificar busqueda
		cout<<"¿por que elemento quiere buscar?"<<endl;
		cout<<"[1] Nombre"<<endl;
		cout<<"[2] Autor"<<endl;
		cin>>eleccion;

	// preparando elementos
		switch(eleccion){
			case 1:
				cin.ignore();
				cout<<"ser ealizara la busqueda por nombre"<<endl;
				cout<<"escriba el Nombre o un fragmento de este"<<endl;
				getline(cin,Elemento_Buscado);
				Tipo = 0;
				break;

			case 2:
				cin.ignore();
				cout<<"ser ealizara la busqueda por Autor"<<endl;
				cout<<"escriba el Autor o un fragmento de este"<<endl;
				getline(cin,Elemento_Buscado);
				Tipo = 1;
				break;
		}

	// Realizar busqueda
		for(int F = 0; F< int (Matriz_Libro.size());F++){
			for(int I = 0; I < int(Matriz_Libro[F][Tipo].size()); I++){
				for(int L = 0; L<int(Matriz_Libro[F][Tipo].size()-I);L++){
					Elemento_Comparativo = Matriz_Libro[F][Tipo].substr(I,L);
					if(Elemento_Comparativo == Elemento_Buscado){
						cout<<"Se encontro"<<endl;
						cout<<"["<<Matriz_Libro[F][0]<<"] ; ["<<Matriz_Libro[F][1]<<"]"<<endl;
					}

				}
			}
		}

}

//confirmacion de libro
bool Libro::Confirmar_Libro(){

	/*
		Metodo: Confirmar_Libro
		Descricion: se encargar de realizar un paso intermedio entre
					el ingreso de informacion de un Libro y que el 
					libro sea agregado

		Parametros:
			- ELeccion: se encaga de tomar la decision del usuario
						Luego desviar la eleccion entre el continuar
						o no con la informacion dada
		
		Retorno: retorna un valor tipo Bool que termina el bucle de registrar_libro()
				o manteiendolo


	*/

	int Eleccion;

	cout<<"¿esta seguro que la Informacion esta Bien?"<<endl;
	cout<<"[1] Si, Registralo"<<endl;
	cout<<"[2] No, Volver a hacer"<<endl;
	cin>>Eleccion;

	switch(Eleccion){
		case 1:
			return true;
			break;

		case 2:
			return false;
			break;
	}
	
	return false;
}

// Cargar informacion
void Libro::Cargar_Inventario(){

	/*
		Metodo: Cargar_Inventario()
		Descripcion: es el que se encarga de recuperar la informacion
					 del Archivo .CSV pasandolo al Programa.

		Parametros:
			-contador_separadores: cueta los punto y coma ";"
			-contador_lineas: se encarga de cambiar de linea de informacion
							  del libro.
			- nombre_libro: este es el espacio donde se guardan de forma
							temporal el String del Nombre del libro
			- nombre_autor: este es el espacio donde se guardan de forma
							temporal el String del Autor del libro
			- linea_tmp: toma y almacena una linea del archivo .CSV
			- element_text: toma caracter por caracter para compararlos
							con el punto y coma ";"
	*/

	int contador_separadores = 0, contador_lineas = 0;
	string nombre_libro, nombre_autor,linea_tmp;
	char element_text;

	Cargar_Libro.open("Inventario Libros.csv");

	if(Cargar_Libro.fail()){
		cout<<"Error"<<endl;
	}

	while(!Cargar_Libro.eof()){

		getline(Cargar_Libro,linea_tmp);
		
		contador_separadores = 0;
		nombre_libro.clear();
		nombre_autor.clear();
		
		for(int i = 0; i < int (linea_tmp.length()); i++){		
			
			element_text = linea_tmp[i];
			
			if((contador_separadores == 0) && (element_text != ';') && (contador_lineas > 0)){			
				nombre_libro += linea_tmp[i];

			}else if((contador_separadores == 1) && (element_text != ';') && (contador_lineas > 0)){			
				nombre_autor += linea_tmp[i];
			
			}else if((element_text == ';') ){
				Vector_Libro.push_back(nombre_libro);
				contador_separadores += 1;
			
			}
			if(( i == int (linea_tmp.length())-1) && (contador_separadores>0)){				
			// }else if((linea_tmp[i] == '\n') || (linea_tmp[i] == '\r')){
				
				Vector_Libro.push_back(nombre_autor);
				Matriz_Libro.push_back(Vector_Libro);
				Vector_Libro.clear();
						
			}
		
		}

		contador_lineas ++;
	}
	
}

// guardar informacion del inventario
void Libro::Guardar_Invetario(){

	/*
		Metodo: Gueradar_Invetario()
		Descripcion: Este metodo se encarga de guardar la informacion contenida
					 en la Matriz_Libro e un archivo .csv

		Parametros:
			- contador_lineas: es usado para moverse atravez de Matriz_libro
								en el while
			-Guardar_Libro: es una variable tipo ofstream, encargado para 
							guardar el contenido de la Matriz_Libro en el
							archibo .csv
			- Matriz_Libro: aqui es donde se almacena toda la informacion de
							los libros

		Retorno: Ninguno
	*/

	int contador_lineas = 0;

	Guardar_Libro.open("Inventario Libros.csv");

	if(Guardar_Libro.fail()){
		cout<<"Error 404"<<endl;
	}

	while(contador_lineas != int (Matriz_Libro.size())){

		//Guardar_Libro<<"Nombre;Autor"<<endl;
		Guardar_Libro<<Matriz_Libro[contador_lineas][0]<<";"<<Matriz_Libro[contador_lineas][1]<<endl;

		contador_lineas++;

	}

	Guardar_Libro.close();

}

// set
// void Libro::Setinfo(){}

// Get
vector<vector<string>> Libro::Get_Inventario(){

	/*
		Metodo: Get_Inventario()
		Descripcion: Este retorna el contenido de Matriz_Libro

		retorno: Matriz_Libro
	*/

	return Matriz_Libro;
}