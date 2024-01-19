// Armadura [Padre] -> Armadura_Espinas [Hija]

#ifndef __Armadura_Espinas_h__
#define __Armadura_Espinas_h__

#include"Armadura.h"

class Armadura_Espinas : public Armadura{
    private:
    int Espinas;

    public:
    using Armadura::Armadura;
    Armadura_Espinas(string,int,int,int);
    void SetEspina(int);
    void Mostrar() override;
    bool Damage(int) override;
    ~Armadura_Espinas();

};

#endif