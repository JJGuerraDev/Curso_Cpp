#include<iostream>
using namespace std;

int main(void){
    
    //definir variable
    int Repeticiones, Resultado=0;

    //ingreso de informacion
    cout<<"ingrese el numero final de la suma"<<endl;
    cin>>Repeticiones;

    //Bucle
    for (int i = 1; i <= Repeticiones; i++){
        
        Resultado += i;

    }
    
    cout<<"el resutlado fue "<<Resultado<<endl;

    return 0;
}