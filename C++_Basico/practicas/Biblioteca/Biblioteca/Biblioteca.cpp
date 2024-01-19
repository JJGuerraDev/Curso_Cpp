// constructores de Biblioteca

// llamado de la clase Biblioteca
#include "Biblioteca.h"


// contructor
Biblioteca::Biblioteca(){

	/*
		Contructor
	*/

}

//Menu Principal
void Biblioteca::Menu_Principal(){

	/*
		Metodo:Menu_Principal()
		Descricion: este metodo Hecho para interactuar con el usuario
					para despues llamar otro metodo dependiendo de lo
					indicado por el usuari
		
		Parametros:
			- Opcion: se guarda aqui la intruccion ingresada por el usuario

		Retorna: No tiene retornos
	*/

	//Elementos de fondo
		Cargar_Registros();
		Cargar_Cuentas();
		Cargar_Inventario();

	//Interaccion
		cout<<"Bienvenido Usuario"<<endl;
		cout<<"¿que desea Realizar?"<<endl;
		cout<<"[1] Gestion de Libros"<<endl;
		cout<<"[1] Gestion de Usuarios"<<endl;
		cout<<"[3] Gestion de prestamos"<<endl;
		cout<<"[4] Salir del Programa"<<endl;
		cin>>Opcion;

		switch(Opcion){
			case 1:
				Gestion_libros();
				break;

			case 2:
				Gestion_Cuentas();
				break;
			
			case 3:
				Gestion_Registros();
				break;

			case 4:
				end_Program();
				break;

		}
	

}

// Gestion de Libros
void Biblioteca::Gestion_libros(){

	/*
		Metodo: Gestion_Libro()
		Descricion: este metodo Hecho para interactuar con el usuario
					para despues llamar otro metodo realcionado a la
					Clase Libro
		
		Parametros:
			- Opcion: se guarda aqui la intruccion ingresada por el usuario

		Retorna: No tiene retornos
	*/

	bool Flag_Repeticion = true;

	while(Flag_Repeticion != false){
		//elementos de interacion
			cout<<"Gestion de Libros"<<endl;
			cout<<"[1] ver listado de libros"<<endl;
			cout<<"[2] Registrar Libro"<<endl;
			cout<<"[3] Buscar libro"<<endl;
			cout<<"[4] regresar al Menu"<<endl;
			cin>>Opcion;

		//desviacion
			switch(Opcion){
				case 1:
					llamar_Mostrar_Inventario();
					break;

				case 2:
					Agregar_Inventario();
					break;

				case 3:
					Buscar_Libro();
					break;

				case 4:
					Guardar_Invetario();
					Menu_Principal();
					Flag_Repeticion = false;
					break;

			}
	}


}

// Gestion de Libros
void Biblioteca::Gestion_Cuentas(){

	/*
		Metodo: Gestion_Libro()
		Descricion: este metodo Hecho para interactuar con el usuario
					para despues llamar otro metodo realcionado a la
					Clase Usuario
		
		Parametros:
			- Opcion: se guarda aqui la intruccion ingresada por el usuario

		Retorna: No tiene retornos
	*/
	
	bool Flag_Repeticion = true;

	while(Flag_Repeticion != false){
		//elementos de interacion
			cout<<"Gestion de Libros"<<endl;
			cout<<"[1] ver listado de Usuarios"<<endl;
			cout<<"[2] Registrar Usuario"<<endl;
			cout<<"[3] Buscar Usuario"<<endl;
			cout<<"[4] regresar al Menu"<<endl;
			cin>>Opcion;

		//Desviacion
			switch(Opcion){
				case 1:
					llamar_Mostrar_Cuentas();
					break;

				case 2:
					Agregar_Cuenta();
					break;

				case 3:
					Buscar_Cuenta();
					break;

				case 4:
					Guardar_Cuentas();
					Menu_Principal();
					Flag_Repeticion = false;
					break;

			}
	}
}	

void Biblioteca::Gestion_Registros(){

	/*
		Metodo: Gestion_Libro()
		Descricion: este metodo Hecho para interactuar con el usuario
					para despues llamar otro metodo realcionado a la
					Clase Biblioteca
		
		Parametros:
			- Opcion: se guarda aqui la intruccion ingresada por el usuario

		Retorna: No tiene retornos
	*/

	bool Flag_Repeticion = true;
	
	while(Flag_Repeticion != false){
		//elementos de interacion
			cout<<"Gestion de Prestamos"<<endl;
			cout<<"[1] ver Registro de Prestamos"<<endl;
			cout<<"[2] Registrar PRestamo"<<endl;
			cout<<"[3] Buscar en el registro"<<endl;
			cout<<"[4] regresar al Menu"<<endl;
			cin>>Opcion;

		//Desviaciones
			switch(Opcion){
				case 1:
					llamar_Mostrar_Registro();
					break;

				case 2:
					Realizar_Prestamos();
					break;

				case 3:
				Buscar_Registro();
					break;

				case 4:
					Menu_Principal();
					Flag_Repeticion = false;
					Guardar_Registros();
					break;

			}
	}

}

//Realizacion de Prestamo
void Biblioteca::Realizar_Prestamos(){

	/*
		Metodo: Agregar_Prestamo()
		Descripcion: este metodo se encarga de registrar prestamos Nuevos
					 al Registro de la biblioteca, pasando por un bucle
					 que impide que se suba informacion incorrecta

		Parametros:
			- Opcion_1: este guia para elegir la informa del Usuario
			- Opcion_2: este guia para elegir la informa del Libro
			- Vector_Registro: este es donde se crea el vetor de informacion
				|			  para despues ser eviado a Matriz_Registro
			- Matriz_Registro: aqui es donde se almacena toda la informacion de
							  los Prestamos
	*/
	
	// para la prueva
		Cargar_Inventario();
		Cargar_Cuentas();

	// preparar elemetos
		Invetario_Libros();
		Listado_Cuentas();

	// Variables
		vector<string> Para_Registrar;
		int Opcion_1, Opcion_2;

	do{
	
		//iligiendo elementos
			cout<<"Selecione el Usuario Solicitante"<<endl;
			Mostrar_Cuentas();
			cin>>Opcion_1;
	
			cout<<"Selecione el libro Solicitado"<<endl;
			Mostrar_Inventario();
			cin>>Opcion_2;
	
		// Configurando elementos
			
			Para_Registrar.push_back(Matriz_Cuentas_Usuarios[Opcion_1][2]);
			Para_Registrar.push_back(Matriz_Cuentas_Usuarios[Opcion_1][0]);
			Para_Registrar.push_back(Matriz_Cuentas_Usuarios[Opcion_1][1]);
			Para_Registrar.push_back(Matriz_Inventario_Libros[Opcion_2][0]);
	
	}while(Confirmar_Registro() == false);

		Agregar_Registro(Para_Registrar);

}

bool Biblioteca::Confirmar_Registro(){
	
	/*
		Metodo: Confirmar_Registro()

		Descricion: se encargar de realizar un paso intermedio entre
					el ingreso de informacion de un Prestamo y que el 
					Prestamo sea agregado

		Parametros:
			- ELeccion: se encaga de tomar la decision del usuario
						Luego desviar la eleccion entre el continuar
						o no con la informacion dada


		Retorno: Ninguno

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

//llamar el mostrar registro
void Biblioteca::llamar_Mostrar_Registro(){

	/*
		Metodo: llamar_Mostrar_Registros()
		Descripcion: de llamar el metodo de la clase Libro Mostrar_Registro

		Parametros:
			No hay parametros

		Retorno: Ninguno

	*/

	cin.ignore();
	
	cout<<"[Registro de Prestamos]"<<endl;

	Mostrar_Registro();

	cout<<"[Preciona enter para salir]"<<endl;
	cin.ignore();

}

//llamar el mostrar Usuarios
void Biblioteca::llamar_Mostrar_Cuentas(){

	/*
		Metodo: llamar_Mostrar_Cuentas()
		Descripcion: de llamar el metodo de la clase Libro Mostrar_Cuentas

		Parametros:
			No hay parametros

		Retorno: Ninguno

	*/

	cin.ignore();

	cout<<"[Listado de Cuentas]"<<endl;

	Mostrar_Cuentas();

	cout<<"[Preciona enter para salir]"<<endl;
	cin.ignore();

}

//llamar el mostrar libros
void Biblioteca::llamar_Mostrar_Inventario(){

	/*
		Metodo: llamar_Mostrar_Inventario()
		Descripcion: de llamar el metodo de la clase Libro Mostrar_Inventario

		Parametros:
			No hay parametros

		Retorno: Ninguno

	*/

	cin.ignore();
	
	cout<<"[Inventario Libros]"<<endl;

	Mostrar_Inventario();

	cout<<"[Preciona enter para salir]"<<endl;
	cin.ignore();

}

//Mostrar Registro
void Biblioteca::Mostrar_Registro(){

	/*
		Metodo: Mostrar_Cuentas()
		Descripcion: Encargado en Mostrar los registros de prestamos

		Parametros:
			- Matriz_Registros: es donde se almacena todos los prestamos registrados

		Retorno: Ninguno

	*/
	
	for(int i = 0; i < int (Matriz_Registro.size()); i++){

		cout<<"registro [No."<<i<<"] ["<<Matriz_Registro[i][0]<<"] ; ["<<Matriz_Registro[i][1]<<"] ; ["<<Matriz_Registro[i][2]<<"] ; ["<<Matriz_Registro[i][3]<<"]"<<endl;

	}

}

//Agregar elementos al registro
void Biblioteca::Agregar_Registro(){

	/*
		Metodo: Gueradar_Registro()
		Descripcion: Este metodo se encarga de guardar la informacion contenida
					 en la Matriz_Usuari e un archivo .csv

		Parametros:
			- contador_lineas: es usado para moverse atravez de Matriz_Usuari
								en el while
			-Guardar_Registro: es una variable tipo ofstream, encargado para 
							guardar el contenido de la Matriz_Registro en el
							archibo .csv
			- Matriz_Registro: aqui es donde se almacena toda la informacion de
							los Prestamos

		Retorno: Ninguno
	*/

	string Documento_Usuario,Nombre_Usuario,Apellido_Usuario,Nombre_Libro;

	Vector_Registro.clear();

	cout<<"Ingrese el Documento del solicitante"<<endl;
	getline(cin,Documento_Usuario);
	Vector_Registro.push_back(Documento_Usuario);

	cout<<"Ingrese el Nombre del solicitante"<<endl;
	getline(cin,Nombre_Usuario);
	Vector_Registro.push_back(Nombre_Usuario);

	cout<<"Ingrese el Apellido del solicitante"<<endl;
	getline(cin,Apellido_Usuario);
	Vector_Registro.push_back(Apellido_Usuario);

	cout<<"Ingrese el NOmbre del libro solicitado"<<endl;
	getline(cin,Nombre_Libro);
	Vector_Registro.push_back(Nombre_Libro);

	Matriz_Registro.push_back(Vector_Registro);

}

void Biblioteca::Agregar_Registro(vector<string> Elementos){

	Vector_Registro.push_back(Elementos[0]);
	Vector_Registro.push_back(Elementos[1]);
	Vector_Registro.push_back(Elementos[2]);
	Vector_Registro.push_back(Elementos[3]);

	Matriz_Registro.push_back(Vector_Registro);

	Mostrar_Registro();

}

//Carpeta
void Biblioteca::Buscar_Registro(){

	/*
		Metodo: Buscar_Cuentas()
		Descricion: se encarga de realizar una Comparacion entre lo
					Solicitado con el contenido en el inventario de 
					Cuentas, para despues enseñar lo encontrado.

		Parametros:
			-Eleccion: es el que toma la decision de usuario e interactua con
						Switch case
			-Tipo: es el encargado de indicar que tipo de elemento del Usuari
					se requiere
			-Elemento_Buscado: es el elmeneto introducido por el usuario para
								que posteriormnete sea buscado en entre los 
								Registro 
			-Elemento_comparativo: es el elemento que toma los sub-string
									para despues compararlos con el
									Elemento_Buscado
		
		Retorno:Ninguno
	*/

	//variables
		int eleccion, Tipo;
		string Elemento_Buscado, Elemento_Comparativo;

	//interacion
		cout<<"¿por que elemento quiere buscar?"<<endl;
		cout<<"[1] Documento del usuario"<<endl;
		cout<<"[2] Nombre del usuario"<<endl;
		cout<<"[3] Apellido del usuario"<<endl;
		cout<<"[4] Libro Solicitado"<<endl;
		cin>>eleccion;

	//Desviacion
		switch(eleccion){
			case 1:
				cin.ignore();
				cout<<"ser ralizara la busqueda por Documento de Usuari"<<endl;
				cout<<"escriba el documento o un fragmento de este"<<endl;
				getline(cin,Elemento_Buscado);
				Tipo = 0;
				break;
			
			case 2:
				cin.ignore();
				cout<<"se ralizara la busqueda por Nombre de Usaurio"<<endl;
				cout<<"escriba el documento o un fragmento de este"<<endl;
				getline(cin,Elemento_Buscado);
				Tipo = 1;
				break;

			case 3:
				cin.ignore();
				cout<<"se ralizara la busqueda por apellido de Usuario"<<endl;
				cout<<"escriba el documento o un fragmento de este"<<endl;
				getline(cin,Elemento_Buscado);
				Tipo = 2;
				break;
			
			case 4:
				cin.ignore();
				cout<<"se ralizara la busqueda por Nombre del Libro"<<endl;
				cout<<"escriba el documento o un fragmento de este"<<endl;
				getline(cin,Elemento_Buscado);
				Tipo = 3;
				break;
		}

	//Busqueda
		for(int F = 0; F< int (Matriz_Registro.size());F++){
				for(int I = 0; I < int(Matriz_Registro[F][Tipo].size()); I++){
					for(int L = 0; L<int(Matriz_Registro[F][Tipo].size()-I);L++){
						Elemento_Comparativo = Matriz_Registro[F][Tipo].substr(I,L);
						if(Elemento_Comparativo == Elemento_Buscado){
							cout<<"Se encontro"<<endl;
							cout<<"["<<Matriz_Registro[F][0]<<"] ; ["<<Matriz_Registro[F][1]<<"] ; ["<<Matriz_Registro[F][2]<<"] ; ["<<Matriz_Registro[F][3]<<"]"<<endl;
						}

					}
				}
			}

}

//Cargar elementos guardados
void Biblioteca::Cargar_Registros(){

	/*
		Metodo: Cargar_Registros()
		Descripcion: es el que se encarga de recuperar la informacion
					 del Archivo .CSV pasandolo al Programa.

		Parametros:
			-contador_separadores: cueta los punto y coma ";"
			-contador_lineas: se encarga de cambiar de linea de informacion
							  del libro.
			- nombre_Usuario: este es el espacio donde se guardan de forma
							  temporal el String del Nombre del Usuario
			- Apellido_Usuario: este es el espacio donde se guardan de forma
								temporal el String del Apellido del Usuario
			- Documento_Usuario: este es el espacio donde se guardan de forma
								 temporal el String del Documento del Usuario
			- linea_tmp: toma y almacena una linea del archivo .CSV
			- element_text: toma caracter por caracter para compararlos
							con el punto y coma ";"
	*/

	//Variables
		int contador_lineas = 0, Contador_Separadores;
		string Documento_Usuario,Nombre_Usuario,Apellido_Usuario,Nombre_Libro,linea_tmp;
		char element_char;
	// trabando con Fstream
		Carga_Registro.open("Historial_Registro.csv");
		if(Carga_Registro.fail()){
			cout<<"Error 404"<<endl;
		}
		// Bucle principal
			while(!Carga_Registro.eof()){
				getline(Carga_Registro,linea_tmp);
				Contador_Separadores = 0;
				Documento_Usuario.clear();
				Nombre_Usuario.clear();
				Apellido_Usuario.clear();
				Nombre_Libro.clear();
				for(int i=0; i< int (linea_tmp.length()); i++){
					element_char = linea_tmp[i];
					if((Contador_Separadores == 0) && (element_char != ';') && (contador_lineas > 0)){
						Documento_Usuario += linea_tmp[i];
					}else if((Contador_Separadores == 1) && (element_char != ';') && (contador_lineas > 0)){
						Nombre_Usuario += linea_tmp[i];
					}else if((Contador_Separadores == 2) && (element_char != ';') && (contador_lineas > 0)){
						Apellido_Usuario += linea_tmp[i];
					}else if((Contador_Separadores == 3) && (element_char != ';') && (contador_lineas > 0)){
						Nombre_Libro += linea_tmp[i];}
					if(element_char == ';'){
						Contador_Separadores++;}
					if((Contador_Separadores == 1)&&(element_char == ';')){
						Vector_Registro.push_back(Documento_Usuario);
						Vector_Registro[0] = Documento_Usuario;
					}else if((Contador_Separadores == 2)&&(element_char == ';')){
						Vector_Registro.push_back(Nombre_Usuario);
						Vector_Registro[1] = Nombre_Usuario;
					}else if((Contador_Separadores == 3)&&(element_char == ';')){
						Vector_Registro.push_back(Apellido_Usuario);
						Vector_Registro[2] = Apellido_Usuario;
					}else if((i == int (linea_tmp.length())-1)&&(Contador_Separadores > 0)&&(Nombre_Libro.size() > 3)){
						Vector_Registro.push_back(Nombre_Libro);
						Vector_Registro[3] = Nombre_Libro;
						Matriz_Registro.push_back(Vector_Registro);
						Vector_Registro.clear();}
				}
				contador_lineas ++;
			}
}

void Biblioteca::Guardar_Registros(){

	/*
		Metodo: Guardar_Registro()
		Descripcion: Este metodo se encarga de guardar la informacion contenida
					 en la Matriz_Resgistro e un archivo .csv

		Parametros:
			- contador_lineas: es usado para moverse atravez de Matriz_Usuari
								en el while
			-Guardar_Registros: es una variable tipo ofstream, encargado para 
							guardar el contenido de la Matriz_Registro en el
							archibo .csv
			- Matriz_Registros: aqui es donde se almacena toda la informacion de
							los Registros

		Retorno: Ninguno
	*/

	int contador_lineas = 0;

	Guardar_Registro.open("Historial_Registro.csv");

	if (Guardar_Registro.fail()){

		cout<<"Error 404"<<endl;

	}
	
	
	while (contador_lineas != int(Matriz_Registro.size())){
		
		Guardar_Registro<<Matriz_Registro[contador_lineas][0]<<";"<<Matriz_Registro[contador_lineas][1]<<";"<<Matriz_Registro[contador_lineas][2]<<";"<<Matriz_Registro[contador_lineas][3]<<endl;

		contador_lineas++;

	}
	

}

// Guardar elemetos de la clase Libro
void Biblioteca::Invetario_Libros(){

	/*
		Metodo: Invewntario_Libros()
		Descripcion: Este metodo obtiene la informacion de los libros en el inventario

		Parametros:
			- Matriz_Inventario_Libros: es donde se guarda la informacion del inventario de libros 

		Retorno: Ninguno
	*/

	for(int i = 0; i < int (Get_Inventario().size()); i++){

		for(int y = 0; y < int(Get_Inventario()[i].size()); y++){

			Vector_Libro_Informacion.push_back(Get_Inventario()[i][y]);
		}

		Matriz_Inventario_Libros.push_back(Vector_Libro_Informacion);
		Matriz_Inventario_Libros[i][0] = Get_Inventario()[i][0];
		Matriz_Inventario_Libros[i][1] = Get_Inventario()[i][1];

	}

}

// Guardar elemetos de la clase Usuario
void Biblioteca::Listado_Cuentas(){

	/*
		Metodo: Invewntario_Libros()
		Descripcion: Este metodo obtiene la informacion de los libros en el inventario

		Parametros:
			- Matriz_Cuentas_Usuarios: es donde se guarda la informacion de las cuentas de Usuario 

		Retorno: Ninguno
	*/

	Cargar_Cuentas();

	for(int F=0;F< int (Get_Cuentas_Usuarios().size()); F++){
		
		for(int C=0;C< int (Get_Cuentas_Usuarios()[F].size());C++){
			
			Vector_Cuenta_Informacion.push_back(Get_Cuentas_Usuarios()[F][C]);

		}
		
		Matriz_Cuentas_Usuarios.push_back(Vector_Cuenta_Informacion);

		Matriz_Cuentas_Usuarios[F][0] = Get_Cuentas_Usuarios()[F][0];
		Matriz_Cuentas_Usuarios[F][1] = Get_Cuentas_Usuarios()[F][1];
		Matriz_Cuentas_Usuarios[F][2] = Get_Cuentas_Usuarios()[F][2];

	}

}

//salida del programa
void Biblioteca::end_Program(){
	
	//despedida



}