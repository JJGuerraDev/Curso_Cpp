#include<iostream>
using namespace std;

int main(void){
    
    //definir variables
    int Acumulador=0, Cudrado;

    //bucle
    for (int i = 1; i <= 10; i++){
       
       Cudrado=i*i;
       Acumulador += Cudrado;

    }
    
    cout<<Acumulador;

    return 0;
}