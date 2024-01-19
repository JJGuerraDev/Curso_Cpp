// Hija de Bibliteca, elemento extra, Magia
 #ifndef __Fantacia_h__
 #define __Fantacia_h__

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