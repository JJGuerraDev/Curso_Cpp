//

#ifndef __Acuaticos_h__
#define ____Acuaticos_h__

#include "Zoologico.h"

class Acuaticos : public Zoologico{
	private:
	
		string especie;
		int Bajo_agua;
	
	public:

		Acuaticos(string,int,string,int,string,int);
		void Informacion() override;
		~Acuaticos();

};

#endif