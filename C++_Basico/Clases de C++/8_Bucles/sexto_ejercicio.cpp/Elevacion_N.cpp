#include<iostream>
#include<cmath>
using namespace std;

int main(void){
    
    // definir variables
    int Base = 0, Acumulador = 0;

    //ingreso de Datos
    cout<<"por fabor ingrese el numero Base con el que trabajar"<<endl;
    cin>>Base;

    //Bucle | Operacion
    for (int N = 1; N <= Base; N++){
        
        Acumulador += pow(2,N);

    }

    //mostrar informacion
    cout<<"el resutlado fue "<<Acumulador<<endl;
    

    return 0;
}