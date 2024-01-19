// clase hija de Biblioteca 

#ifndef __Ingenieria_h__
#define __Ingenieria_h__

#include <iostream>
#include <string>
#include "Biblioteca.h"
using namespace std;

    string Materia_tmp;

class Ingenieria : public Biblioteca{
    private:

        string Materia;

    public:

        Ingenieria(string,string,int,string,string);
        void Informacion()override;
        ~Ingenieria();
};


#endif