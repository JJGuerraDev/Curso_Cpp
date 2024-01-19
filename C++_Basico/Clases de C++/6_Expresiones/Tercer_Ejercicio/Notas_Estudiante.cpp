#include<iostream>
using namespace std;

int main(void){

    //definir Variables
    float Nota_Practica, Nota_Participacion, Nota_Teorica, Nota_final;

    //ingreso de informacion
    cout<<"ingrese por favor la nota de Practica"<<endl;
    cin>>Nota_Practica;
    cout<<"ingrese por favor la nota de Participacion"<<endl;
    cin>>Nota_Participacion;
    cout<<"ingrese por favor la nota de Teoria"<<endl;
    cin>>Nota_Teorica;

    // operaciones
    Nota_Practica *= 0.30;
    Nota_Teorica *= 0.60;
    Nota_Participacion *= 0.10;
    Nota_final = Nota_Participacion + Nota_Practica + Nota_Teorica;

    //mostrar informacion
    cout<<"\n la nota final es "<<Nota_final<<endl;
    return 0;
}