#include<iostream>
using namespace std;

int main(void){

    //definir Variables
    int Numero, Dato=10;

    //ingreso de infromacion
    cout<<"ingrese porfavor un Numero"<<endl;
    cin>>Numero;

    //condicional tipo If
    if (Numero == Dato){
        
        //mensaje de condicion Cumplida
        cout<<"el Numero ingresado fue 10"<<endl;

    }else{

        //mensaje en caso de no Cumplir la condicion
        cout<<"el Numero ingresado es difrente de 10, el numero ingresado fue "<<Numero<<endl;

    }
    
    
    
    return 0;
}