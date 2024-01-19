#include<iostream>
using namespace std;

int main(void){

    //definir variables
    int Numero;

    //Ingreso de Informacion
    cout<<"ingrese un Numero para revisar"<<endl;
    cin>>Numero;

    //condicional
    if(Numero==0){

        cout<<"El numero ingresado fue 0"<<Numero<<endl;
        
    }else if((Numero%2)==0){
        
        cout<<"el numero ingresado es par "<<endl;

    }else if((Numero%2)!=0){
        
        cout<<"el numero ingresado es inpar "<<endl;

    }

    return 0;
}