// declaracion de elementos de usuario

// llamado de h
#include "Usuario.h"

//contructor
Usuario::Usuario(){
/*
	Contructor
*/
}

//Mostrar las cuentas guardas
void Usuario::Mostrar_Cuentas(){

	/*
		Metodo: Mostrar_Cuentas()
		Descripcion: Encargado en Mostrar las cuentas de los Usuarios

		Parametros:
			- Matriz_Usuario: es donde se almacena todas Cuentas de Uuario

		Retorno: Ninguno

	*/

	for(int i = 0; i< int (Matriz_Usuarios.size()); i++){

		cout<<"cuenta [No."<<i<<"] ; ["<<Matriz_Usuarios[i][0]<<"] ; ["<<Matriz_Usuarios[i][1]<<"] ; ["<<Matriz_Usuarios[i][2]<<"]"<<endl;

	}

}

//Agregar cuentas de Usuario
void Usuario::Agregar_Cuenta(){

	/*
		Metodo: Agregar_Inventario()
		Descripcion: este metodo se encarga de registrar Usuarios Nuevos
					 al invetario de la biblioteca, pasando por un bucle
					 que impide que se suba informacion incorrecta

		Parametros:
			- nombre_Usuario: este es el espacio donde se guardan de forma
							  temporal el String del Nombre del Usuario
			- Apellido_Usuario: este es el espacio donde se guardan de forma
								temporal el String del Apellido del Usuario
			- Documento_Usuario: este es el espacio donde se guardan de forma
								 temporal el String del Documento del Usuario				
			- Vector_Usuario: este es donde se crea el vetor de informacion
				|			  para despues ser eviado a Matriz_Usuario
			- Matriz_Usuario: aqui es donde se almacena toda la informacion de
							  los Usuarios
	*/

	do{
		cin.ignore();

		string nombre_Usuario,Apellido_Usuari,Documento_Usuario;

		cout<<"Ingrese Su nombre para la cuenta"<<endl;
		getline(cin,nombre_Usuario);
		Vector_Usuario.push_back(nombre_Usuario);

		cout<<"Ingrese su apellido para la cuenta"<<endl;
		getline(cin,Apellido_Usuari);
		Vector_Usuario.push_back(Apellido_Usuari);

		cout<<"Ingrese su documento para la cuenta"<<endl;
		getline(cin,Documento_Usuario);
		Vector_Usuario.push_back(Documento_Usuario);
	}while(Confirmar_Usuario() == false);

	Matriz_Usuarios.push_back(Vector_Usuario);
	Guardar_Cuentas();

}

// Cofirmar la cuenta ingresada
bool Usuario::Confirmar_Usuario(){

	/*
		Metodo: Confirmar_Usuario
		Descricion: se encargar de realizar un paso intermedio entre
					el ingreso de informacion de un Usuari y que el 
					Usuaru sea agregado

		Parametros:
			- ELeccion: se encaga de tomar la decision del usuario
						Luego desviar la eleccion entre el continuar
						o no con la informacion dada
		
		Retorno: retorna un valor tipo Bool que termina el bucle de registrar_Usuario()
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

void Usuario::Buscar_Cuenta(){

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
								Usuarios 
			-Elemento_comparativo: es el elemento que toma los sub-string
									para despues compararlos con el
									Elemento_Buscado
		
		Retorno:Ninguno
	*/

	//Variables
		int eleccion, Tipo;
		string Elemento_Buscado, Elemento_Comparativo;

	// Ingreso Infrormacion
		cout<<"¿por que elemento quiere buscar?"<<endl;
		cout<<"[1] Nombre"<<endl;
		cout<<"[2] Apellido"<<endl;
		cout<<"[3] Documento"<<endl;
		cin>>eleccion;

	//division por tipo
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
				cout<<"ser ealizara la busqueda por Apellido"<<endl;
				cout<<"escriba el Apellido o un fragmento de este"<<endl;
				getline(cin,Elemento_Buscado);
				Tipo = 1;
				break;

			case 3:
				cin.ignore();
				cout<<"ser ealizara la busqueda por Documento"<<endl;
				cout<<"escriba el documento o un fragmento de este"<<endl;
				getline(cin,Elemento_Buscado);
				Tipo = 2;
				break;
		}

	// la busqueda
	for(int F = 0; F< int (Matriz_Usuarios.size());F++){
			for(int I = 0; I < int(Matriz_Usuarios[F][Tipo].size()); I++){
				for(int L = 0; L<int(Matriz_Usuarios[F][Tipo].size()-I);L++){
					Elemento_Comparativo = Matriz_Usuarios[F][Tipo].substr(I,L);
					if(Elemento_Comparativo == Elemento_Buscado){
						cout<<"Se encontro"<<endl;
						cout<<"["<<Matriz_Usuarios[F][0]<<"] ; ["<<Matriz_Usuarios[F][1]<<"] ; ["<<Matriz_Usuarios[F][2]<<"]"<<endl;
					}

				}
			}
		}


}

//Cargar cuentas de Usuario desde .csv
void Usuario::Cargar_Cuentas(){

	/*
		Metodo: Cargar_uentas()
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

	int contador_lineas = 0;
	string nombre_Usuario,Apellido_Usuari,Documento_Usuario,linea_tmp;

	Cargar_Usuarios.open("Registro_usuarios.csv");

	if(Cargar_Usuarios.fail()){
		cout<<"Error"<<endl;
	}

	while(!Cargar_Usuarios.eof()){

		getline(Cargar_Usuarios,linea_tmp);

		Contador_Punto_coma = 0;
		Nombre_User.clear();
		Apellido_User.clear();
		Document_User.clear();

		for(int i = 0; i < int (linea_tmp.length()); i++){
			
			element_Char = linea_tmp[i];

			if((Contador_Punto_coma == 0) && (element_Char != ';') && (contador_lineas > 0)){

				Nombre_User += linea_tmp[i];

			}else if((Contador_Punto_coma == 1) && (element_Char != ';') && (contador_lineas > 0)){

				Apellido_User += linea_tmp[i];

			}else if((Contador_Punto_coma == 2) && (element_Char != ';') && (contador_lineas > 0)){

				Document_User += linea_tmp[i];

			} 
			
			if(element_Char == ';'){
				
				Contador_Punto_coma += 1;

			}

			if((Contador_Punto_coma == 1)&&(element_Char == ';')){

				Vector_Usuario.push_back(Nombre_User);


			}else if((Contador_Punto_coma == 2)&&(element_Char == ';')){

				Vector_Usuario.push_back(Apellido_User);

			}else if((i == int (linea_tmp.length())-1)&&(Contador_Punto_coma>0)){

				Vector_Usuario.push_back(Document_User);

				Matriz_Usuarios.push_back(Vector_Usuario);
				Vector_Usuario.clear();

			}
	
		}

		contador_lineas ++;

		//cout<<"["<<Contador_Punto_coma<<"] ; ["<<contador_lineas<<"]"<<endl;
		//cout<<"["<<Nombre_User<<"] ; ["<<Apellido_User<<"] ; ["<<Document_User<<"] ; ["<<contador_lineas<<"]"<<endl;


	}


}

//guardar informacion
void Usuario::Guardar_Cuentas(){

	/*
		Metodo: Gueradar_Cuentas()
		Descripcion: Este metodo se encarga de guardar la informacion contenida
					 en la Matriz_Usuari e un archivo .csv

		Parametros:
			- contador_lineas: es usado para moverse atravez de Matriz_Usuari
								en el while
			-Guardar_Usuari: es una variable tipo ofstream, encargado para 
							guardar el contenido de la Matriz_Usuario en el
							archibo .csv
			- Matriz_Usuario: aqui es donde se almacena toda la informacion de
							los Usuarios

		Retorno: Ninguno
	*/

	int contador_lineas = 1;

	Guardar_Usuario.open("Registro_usuarios.csv");

	if(Guardar_Usuario.fail()){
		cout<<"Error 404"<<endl;
	}

	while(contador_lineas != int (Matriz_Usuarios.size())){

		Guardar_Usuario<<"Nombre;Apellido;Documento"<<endl;
		Guardar_Usuario<<Matriz_Usuarios[contador_lineas][0]<<";"<<Matriz_Usuarios[contador_lineas][1]<<";"<<Matriz_Usuarios[contador_lineas][2]<<endl;

		contador_lineas++;

	}

	Guardar_Usuario.close();

}

//elemento Get
vector<vector<string>> Usuario::Get_Cuentas_Usuarios(){

	/*
		Metodo: Get_Inventario()
		Descripcion: Este retorna el contenido de Matriz_Libro

		retorno: Matriz_Usuario
	*/

	return Matriz_Usuarios;
}