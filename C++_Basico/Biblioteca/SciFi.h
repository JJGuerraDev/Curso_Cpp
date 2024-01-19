// Clase Hija de Biblioteca

#ifndef __Scifi_h__
#define __Scifi_h__

#include "Biblioteca.h"

class SciFi : Biblioteca{
    private:
     
     int Year;

    public:

    SciFi(string,string,int,string,int);
    void Informacion() override;
    ~SciFi();
};

#endif