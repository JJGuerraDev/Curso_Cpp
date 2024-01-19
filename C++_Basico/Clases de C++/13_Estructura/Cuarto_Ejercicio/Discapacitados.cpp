#include<iostream>
#include<string.h>
using namespace std;

struct Discapacitados{
    int Discapacidad[250];
    int Cantidad_discapacidades=0;
}Data_Discapacitados;

struct Personas{
    char Nombre[45];
    char Sexo[25];
    bool Discapacitado;
    // struct Discapacitados Discapacidad;
}Data_Persona[250];

int main(void){
    //tmp
    char tmp[1], Respuesta[2], afirmacion1[]="Si", afirmacion2[]="SI", afirmacion3[]="si";
    int Ciclos=0;

    //ingreso de imformacion
    cout<<"ingrese cuantas personas revisara [Max 25]"<<endl;
    cin>>Ciclos;
    cin.getline(tmp,1,'\n');

    for(int P=0; P<Ciclos; P++){
        cout<<"Nombre de la persona"<<endl;
        cin.getline(Data_Persona[P].Nombre,45,'\n');
        cout<<"Sexo de la persona"<<endl;
        cin.getline(Data_Persona[P].Sexo,25,'\n');
        cout<<"si la persona es dicapacitada [No = 0] [Si = Numero>0]"<<endl;
        cin>>Data_Persona[P].Discapacitado;
        cin.getline(tmp,1,'\n');
        
        if (Data_Persona[P].Discapacitado == true){
            Data_Discapacitados.Cantidad_discapacidades ++;
            Data_Discapacitados.Discapacidad[Data_Discapacitados.Cantidad_discapacidades-1] = P;
        }
    }

    //Imprimir Datos
    for(int P=0; P<Data_Discapacitados.Cantidad_discapacidades; P++){
        cout<<"persona con incapacitada ["<<P<<"]"<<endl;
        cout<<"Nombre ["<<Data_Persona[Data_Discapacitados.Discapacidad[P]].Nombre<<"]"<<endl;
        cout<<"Sexo ["<<Data_Persona[Data_Discapacitados.Discapacidad[P]].Sexo<<"]"<<endl;
        cout<<"Nombre [Si]"<<endl;
    }

    return 0;
}