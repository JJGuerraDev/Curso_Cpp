#include<iostream>
#include<cmath>
using namespace std;

int main(void){

    //definicion de Variables
    int Numero1, Numero2,Resultado;

    //ingreso de Informacion
    cout<<"igrese el primer valor de la operacion"<<endl;
    cin>>Numero1;
    cout<<"igrese el Segundo valor de la operacion"<<endl;
    cin>>Numero2;

    //Operacion
    Resultado=(sqrt(Numero1)/(pow(Numero2,2)+1));

    //mostrar informacion
    cout<<"el Resultado de la Operacion "<<Resultado<<endl;

    return 0;
}