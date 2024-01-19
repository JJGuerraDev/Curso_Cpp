// Clase Persona [Padre] --> Clase Empleado [Hija], Clase Estudiante [Hija/Padre] --> Clase Universitario [Hija]

#include<iostream>
#include<string>
using namespace std;

class Persona{
private:
    string Nombre;
    int Edad;
    long Documento;
    
public:
    Persona(string,int,long);
    void Mostrar_Persona();

};

class Empleado : public Persona{
    private:
    string Empleo;

    public:
    Empleado(string,int,long,string);
    void Mostrar_Empleado();

};

class Estudiante : public Persona{
    private:
    long Codigo;
    int Semestre;

    public:
    Estudiante (string,int,long,long,int);
    void Mostrar_Estudiante();

};

class Universitario : public Estudiante{
    private:
    string Carera;

    public:
    Universitario(string,int,long,long,int,string);
    void Mostrar_Universitario();
};

Persona::Persona(string Nombre_Persona, int Edad_Persona, long Documento_Persona){
    Nombre = Nombre_Persona;
    Edad = Edad_Persona;
    Documento = Documento_Persona;
}

void Persona::Mostrar_Persona(void){
    cout<<"La persona con el documento ["<<Documento<<"]"<<endl;
    cout<<"Nombre: ["<<Nombre<<"]"<<endl;
    cout<<"edad ["<<Edad<<" años]"<<endl;
}

Empleado::Empleado(string Nombre_Persona, int Edad_Persona, long Documento_Persona, string Empleo_Empleado) : Persona(Nombre_Persona, Edad_Persona, Documento_Persona){

    Empleo = Empleo_Empleado;

}

void Empleado::Mostrar_Empleado(void){

    Mostrar_Persona();
    cout<<"y con el Trabajo ["<<Empleo<<"]"<<endl;

}

Estudiante::Estudiante(string Nombre_Persona, int Edad_Persona, long Documento_Persona, long Codigo_Estudiante, int Semestre_Estudiante) : Persona(Nombre_Persona, Edad_Persona, Documento_Persona){

    Codigo = Codigo_Estudiante;
    Semestre = Semestre_Estudiante;
    
}

void Estudiante::Mostrar_Estudiante(){

    Mostrar_Persona();
    cout<<"con Codigo de Estudiante ["<<Codigo<<"]"<<endl;
    cout<<"que esta en el Semestre ["<<Semestre<<"]"<<endl;
}

Universitario::Universitario(string Nombre_Persona, int Edad_Persona, long Documento_Persona, long Codigo_Estudiante, int Semestre_Estudiante, string Carera_Unirversitario) : Estudiante (Nombre_Persona, Edad_Persona, Documento_Persona, Codigo_Estudiante, Semestre_Estudiante){

    Carera = Carera_Unirversitario;

}

void Universitario::Mostrar_Universitario(){
    Mostrar_Estudiante();
    cout<<"que Realiza la Carera de ["<<Carera<<"]"<<endl;
}

int main(void){
    Persona P1 = Persona("Filip J. Fray",25,219053812);
    Empleado E1 = Empleado("Filip J. Fray",25,219053812,"Repartidor");
    Estudiante ES1 = Estudiante("Filip J. Fray",25,219053812,3222549,5);
    Universitario U1 = Universitario("Filip J. Fray",25,219053812,3222549,5,"Ing. Mecatronica");

    P1.Mostrar_Persona();
    cout<<endl;
    E1.Mostrar_Empleado();
    cout<<endl;
    ES1.Mostrar_Estudiante();
    cout<<endl;
    U1.Mostrar_Universitario();
    cout<<endl;
}