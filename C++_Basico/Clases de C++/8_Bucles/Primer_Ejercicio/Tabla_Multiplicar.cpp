#include<iostream>
using namespace std;

int main(void){
    
    // definir variables
    int Numero;

    //Bucle 1 | ingreso de informacion
    do{
        
        cout<<"ingrese un numero por Favor"<<endl;
        cin>>Numero;

    } while ((Numero<1) || (Numero>10));

    // Bucle 2 | multiplicacion
    for (int i = 1; i <= 20; i++){
        
        cout<<Numero<<" x "<<i<<" = "<<Numero*i<<endl;

    }
    
    

    return 0;
}