#include<iostream>
using namespace std;

int main(void){
    
    //definir Variables
    int Numero;

    //ingreso de informacion
    cout<<"ingrese un Numero del 1-5 Por favor"<<endl;
    cin>>Numero;

    //condicional Switch Case
    switch (Numero){

    case 1:
        cout<<"el valor ingresado fue 1"<<endl;
        break;
    case 2:
        cout<<"el valor ingresado fue 2"<<endl;
        break;
    case 3:
        cout<<"el valor ingresado fue 3"<<endl;
        break;
    case 4:
        cout<<"el valor ingresado fue 4"<<endl;
        break;
    case 5:
        cout<<"el valor ingresado fue 5"<<endl;
        break;
    case 10:
        cout<<"Hola Jose Javier"<<endl;
        break;
    
    default:
        cout<<"el valor ingresado no fue uno de ente 1-5, se coloco el valor"<<Numero<<endl;
        break;
    }

    return 0;
}