//Clase persona

#include<iostream>
#include <string>
using namespace std;

class Persona{
private:
    string Nombre;
    int Edad;

public:
    Persona (string, int);
    void Camarones();
    void Jugar();
};

Persona::Persona(string Nombre_Persona, int Edad_Persona){
    Nombre = Nombre_Persona;
    Edad = Edad_Persona;
}

void Persona::Camarones(){
    cout<<"le Traen una copa llena de Camarones a "<<Nombre<<" y la adoro"<<endl;
}

void Persona::Jugar(){
    cout<<"esta jugando un juego para +17 y tiene "<<Edad<<" años"<<endl;
}

int main(void){

    Persona P1 = Persona("Juanpis",21);

    P1.Camarones();
    P1.Jugar();

    return 0;
}