#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Ordenar_elementos{
private:
    int Tipo;
    string Placa;
public:
    Vehiculo(string,int);
    void llegando();
    void Saliendo();
};

Vehiculo::Vehiculo(string Placa_Vehic,int Tip_Vehic){
    Tipo = Tip_Vehic;
    Placa = Placa_Vehic;
}

void Vehiculo::llegando(){
    cout<<"un vehiculo de Categoria "<<Tipo<<" con Placa "<<Placa<<" acava de parquear"<<endl;
}

void Vehiculo::Saliendo(){
    cout<<"un vehiculo de Placa "<<Placa<<" con de tipo "<<Tipo<<" hacava de salir del parquadero"<<endl;
}

int main(void){
    return 0;
}