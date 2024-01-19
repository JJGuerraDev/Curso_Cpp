//

#ifndef __Terrestres_h__
#define ____Terrestres_h__

#include "Zoologico.h"

class Terrestres : public Zoologico{
	private:
	
		string especie;
		int No_Crias;
	
	public:

		Terrestres(string,int,string,int,string,int);
		void Informacion() override;
		~Terrestres();

};

#endif