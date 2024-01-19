#include<iostream>
#include<cmath>
using namespace std;

int main (void){

    // definir Variables
    float Cateto_A,Cateto_B,A2,B2,C2,Hipotenusa;

    //ingreso de Informacion
    cout<<"ingrese el valor del Cateto A"<<endl;
    cin>>Cateto_A;
    cout<<"ingrese el valor del Cateto B"<<endl;
    cin>>Cateto_B;

    //Operacion
    A2 = pow(Cateto_A,2);
    B2 = pow(Cateto_B,2);
    C2 = A2 + B2;
    Hipotenusa = sqrt(C2);

    //Mostrar informacion
    cout<<"la Hipotenusa es "<<Hipotenusa<<endl;

    return 0;
}