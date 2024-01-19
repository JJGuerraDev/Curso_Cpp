// clase hija de Biblioteca 

#define __Ingenieria_h__
#ifdef __Ingenieria_h__

#include <iostream>
#include <string>
#include "Biblioteca.h"
using namespace std;

class Ingenieria : public Biblioteca{
    private:

    string Materia;

    public:

    Ingenieria(string,string,int,string,string);
    void Informacion()override;
    ~Ingenieria();
};


#endif