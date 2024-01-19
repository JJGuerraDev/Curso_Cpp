// Hija de Bibliteca, elemento extra, Magia
 #ifndef __Fantacia_h__
 #define __Fantacia_h__

#include <iostream>
#include <string> 
#include "Biblioteca.h"
using namespace std;

string Magia_tmp;

class Fantacia : public Biblioteca{
    private:

    string Magia;

    public:
    Fantacia(string,string,string,int,string);
    void Informacion() override;
    ~Fantacia();
};

#endif