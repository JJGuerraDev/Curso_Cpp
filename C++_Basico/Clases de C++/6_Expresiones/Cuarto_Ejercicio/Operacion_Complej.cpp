#include<iostream>
#include<cmath>
using namespace std;

int main(){

    //definir Vairables
   double Numero_a,Numero_b,Numero_c, Resultado=0;

    //ingreso de informacion
    cout<<"ingrese el Primer valor de la Operacion"<<endl;
    cin>>Numero_a;
    cout<<"ingrese el segundo valor de la Operacion"<<endl;
    cin>>Numero_b;
    cout<<"ingrese el Tercer valor de la Operacion"<<endl;
    cin>>Numero_c;

    //Operacion
    Resultado = (((Numero_b) + sqrt(Numero_b - (4*(Numero_a*Numero_c))))/(2*Numero_a));

    //mostrar informacion
    cout<<"el resutlado de la Operacion fue "<<Resultado<<endl;

    return 0;
}