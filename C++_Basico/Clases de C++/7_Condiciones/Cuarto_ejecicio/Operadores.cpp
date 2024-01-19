#include<iostream>
using namespace std;

int main(void){

    //definir variables
    int Edad;

    //ingreso de informacion
    cout<<"ingrese porfavor su edad"<<endl;
    cin>>Edad;

    //Condicional
    if ( Edad>=18 && Edad<=25){
        
        cout<<"Su edad esta entre los 18 y 25 años"<<endl;

    }else{

        cout<<"su edad no entra en el rango de 18 a 25 años"<<endl;

    }
    

    return 0;
}