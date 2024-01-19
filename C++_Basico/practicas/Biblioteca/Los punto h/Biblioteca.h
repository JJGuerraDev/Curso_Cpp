//Clase [Padre], elementos a usar Nombre, Autor, No_Paginas, Codigo
 #define __Biblioteca_h__
 #ifdef __Biblioteca_h__
 

#include <iostream>
#include <string>
using namespace std;

class Biblioteca{
protected:
    
    string Nombre, Autor, Codigo;
    int No_Paginas;


public:
    Biblioteca(string,string,int,string);
    virtual void Informacion();
    ~Biblioteca();
};

#endif

// Biblioteca::Biblioteca(/* args */)
// {
// }

// Biblioteca::~Biblioteca()
// {
// }
