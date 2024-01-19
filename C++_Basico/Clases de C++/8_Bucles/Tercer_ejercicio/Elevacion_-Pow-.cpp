#include<iostream>
using namespace std;

int main(void){
    
    //definir variables
    int Base, Exponete, Potencia=1;

    //ingreso de informacion
    cout<<"ingrese porfavor el valor base"<<endl;
    cin>>Base;
    cout<<"ingrese porfavor el valor del Exponente"<<endl;
    cin>>Exponete;

    //bucle
    for (int Repeticiones = 0; Repeticiones < Exponete; Repeticiones++){
        
        Potencia *= Base;

    }
    
    cout<<"la potenci de la operacion es "<<Potencia<<endl;


    return 0;
}