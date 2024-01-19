#include <iostream>
using namespace std;

int Factorial();

int main(void){

    Factorial();

    return 0;

}

int Factorial(){

    int Valor_Factorizar,resultado = 1;

    cout<<"Ingrese el elemento a Factorizar"<<endl;
    cin>>Valor_Factorizar;

    for(int i = 1; i <= Valor_Factorizar ; i++){
        
        resultado = resultado * i;

    }
    
    cout<<"el resultado es ["<<resultado<<"]"<<endl;

    return 1;

}