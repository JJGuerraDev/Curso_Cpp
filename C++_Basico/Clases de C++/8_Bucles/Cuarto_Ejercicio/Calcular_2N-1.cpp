#include<iostream>
using namespace std;

int main(void){
    
    //definir Variables
    int Base=0, Cambiante=0, Acumulador=0;

    //ingreso de informacion
    cout<<"ingrese el Balor base con el que se trabajara"<<endl;
    cin>>Base;

    //Bucles
    for (int N = 1; N <= Base; N++){
        
        Cambiante = (2*N)-1;

        Acumulador += Cambiante;

        cout<<"el valor que se suma "<<Cambiante<<" la Suma "<<Acumulador<<endl;

    }
    
    //mostrar informacion
    cout<<"el resutlado fue "<<Acumulador<<endl;

    return 0;
}