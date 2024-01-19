// Clase Hija de Biblioteca

#ifndef __Scifi_h__
#define __Scifi_h__

#include "Biblioteca.h"

int Year_tmp;

class SciFi : Biblioteca{
    private:
     
     int Year;

    public:

    SciFi(string,string,string,int,int);
    void Informacion() override;
    ~SciFi();
};

#endif