// Clase Mascota [Padre] -> Clase perro [Hija] / Clase Gato [Hija]

#include<iostream>
#include<string>
using namespace std;

class Mascota{
private:
    string Nombre;
    string Especie;
    int Edad;

public:
    Mascota(string,string,int);
    virtual void Mostrar();
};

class Perro : public Mascota{
    private:
    string Raza;
    int Paseo;

    public:
    Perro(string,string,int,string,int);
    void Mostrar_Perro();
};

class Gatos : public Mascota{
    private:
    string Raza;
    int duerme;

    public:
    Gatos (string,string,int,string,int);
    void Mostrar_Gatos();
};

Mascota::Mascota(string Nombre_Mascota, string Especie_Mascota, int Edad_Mascota){
    
    Nombre = Nombre_Mascota;
    Especie = Especie_Mascota;
    Edad = Edad_Mascota;

}

void Mascota::Mostrar(){

    cout<<"La mascota llamado(a) ["<<Nombre<<"]"<<endl;
    cout<<"es de la Especie ["<<Especie<<"]"<<endl;
    cout<<"tiene ["<<Edad<<" años]"<<endl;
}

Perro::Perro(string Nombre_Mascota, string Especie_Mascota, int Edad_Mascota, string Raza_Perro, int Paseo_Perro) : Mascota(Nombre_Mascota,Especie_Mascota,Edad_Mascota){
    
    Raza = Raza_Perro;
    Paseo = Paseo_Perro;
}

void Perro::Mostrar_Perro(){
    
    Mascota::Mostrar();
    cout<<"de la Raza ["<<Raza<<"]"<<endl;
    cout<<"y Pasea ["<<Paseo<<"] a la semana"<<endl;

}

Gatos::Gatos(string Nombre_Mascota, string Especie_Mascota, int Edad_Mascota, string Raza_Gato, int Duerme_Gato) : Mascota(Nombre_Mascota,Especie_Mascota,Edad_Mascota){
    
    Raza = Raza_Gato;
    duerme = Duerme_Gato;

}

void Gatos::Mostrar_Gatos(){
    Mascota::Mostrar();
    cout<<"es de la Raza ["<<Raza<<"]"<<endl;
    cout<<"Y Duerme ["<<duerme<<"] Horas al dia"<<endl;
}

int main(void){

    Mascota M1 = Mascota("Shiro","Conejo",8);
    Perro P1 = Perro("Merlin","Canino",12,"Frespuder",14);
    Gatos G1 = Gatos("Orion","Felino",5,"Pixie Bob", 14);

    M1.Mostrar();
    cout<<endl;
    P1.Mostrar_Perro();
    cout<<endl;
    G1.Mostrar_Gatos();

    return 0;
}