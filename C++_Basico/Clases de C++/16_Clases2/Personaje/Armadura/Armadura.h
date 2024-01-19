// Clase Armadura [Padre]

#ifndef __Armadura_H__
#define __Armadura_H__

#include <iostream>
#include <string>
using namespace std;

class Armadura{
    protected:
    string Nombre;
    int Defensa, Duracion;
    int Ataque;

    public:
    Armadura(string,int,int);
    void setNombre(string);
    void setDefensa(int);
    void setDuracion(int);
    virtual void Mostrar() = 0;
    virtual bool Damage(int) = 0;
    ~Armadura();

};

#endif