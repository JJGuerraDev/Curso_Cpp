#include<iostream>
using namespace std;

int main(void){
    
    //definir variable
    int Base=0, regulador=0, Acumulador=0;

    //ingreso de datos
    cout<<"ingrese la cantidad de Numeros"<<endl;
    cin>>Base;

    //bucle | Operacion
    for (int N = 1; N <= Base; N++){
        if (N%2!=0){
            
            Acumulador += N;

        }else{

            Acumulador -= N;

        }
    }

    cout<<"el resultado fue "<<Acumulador<<endl;
    

    return 0;
}