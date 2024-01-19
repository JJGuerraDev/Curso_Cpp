// Clase Padre elementos [Cantidad][No patas][alimentacion][Nombre]
#ifndef __Zoologico_h__
#define __Zoologico_h__

#include <iostream>
#include <string>
using namespace std;

class Zoologico {
	private:

	int cantidad, No_Patas;
	string Alimentacion, Nombre;

	public:
	
	Zoologico(string,int,string,int);
	void virtual Informacion();
	~Zoologico();

};


#endif