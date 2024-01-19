#include<iostream>
using namespace std;

int main(void){

    //definir variables
    int Base = 0, Acumulacion = 1;

    //ingreso de Datos
    cout<<"ingrese el Nubero de veces que se Factorial"<<endl;
    cin>>Base;

    //bucle
    for (int N1 = 1; N1 <= Base; N1++){
        for (int N2 = 1; N2 <= N1; N2++){
         Acumulacion *= N2;
         cout<<"lo que se lleva acumulado "<<Acumulacion<<endl;
        }
    }
    

    return 0;
}