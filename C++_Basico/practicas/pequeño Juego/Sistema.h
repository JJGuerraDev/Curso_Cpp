//clase principal Juego

#ifndef __Sistema_h__
#define __Sistema_h__

#include <vector>
#include <variant>
#include <iostream>
#include <string>
#include <random>
#include <cmath>

#define usinged int seed = 10

using namespace std;


class Sistema{
	private:
	
	//Tmp
	vector<int> Tmp_int;
	vector<string> Tmp_String;


	//Activacion
	bool Flag_Inicio;

	// Moldes Internos
	int No_Rooms, Dificultad;
	vector<vector<int>> Map_Game;
	//inteciones
	int Intercion_Usuario, Accion_Usuario;

	public:
	
	// de fondo
	Sistema(bool);

	vector<int> Generator(int,int);
	void Recorer(vector<vector<variant <int, string>>>);

	//para el usuario
	vector<int> Configuracion();
	void Bienvenida();
	void ingreso_Datos();
	void inicio();
	void Cerrar()

	//Destructor
	~Sistema();


};


#endif