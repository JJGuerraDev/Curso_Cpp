#include<iostream>
using namespace std;

int main(void){
    
    //definir variables
    int Numero, Suma=0;

    //bucle
    do{
        cout<<"ingrese un numero"<<endl;
        cin>>Numero;

        if (Numero>0){
            
            Suma += Numero;

        }        
    }while( (Numero<20) || (Numero>30) && (Numero != 0));

    cout<<Suma<<endl;

    return 0;
}