// Clase hija de biblioteca
#define __Ciencias_h__
#ifdef __Ciencias_h__

#include "Biblioteca.h"

string Area_tmp;

class Ciencias : public Biblioteca{
    private:

    string Area;

    public:

        Ciencias(string,string,string,int,string);
        void Informacion() override;
        ~Ciencias();
};

#endif