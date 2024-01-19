// Hija de Bibliteca, elemento extra, Magia
 #define __Fantacia_h__
 #ifdef __Fantacia_h__

#include <iostream>
#include <string> 
#include "Biblioteca.h"
using namespace std;

class Fantacia : public Biblioteca{
    private:

    string Magia;

    public:
    Fantacia(string,string,int,string,string);
    void Informacion() override;
    ~Fantacia();
};

#endif