// Clase hija de biblioteca
#ifndef __Ciencias_h__
#define __Ciencias_h__

#include "Biblioteca.h"

class Ciencias : public Biblioteca{
private:

    string Area;

public:

    Ciencias(string,string,int,string,string);
    void Informacion() override;
    ~Ciencias();
};

#endif