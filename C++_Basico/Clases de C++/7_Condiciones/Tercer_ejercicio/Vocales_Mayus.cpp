#include<iostream>
using namespace std;

int main(void){

    //definir variables
    char Letra;

    //ingreso de infromacion
    cout<<"escriba una vocal en minuscula"<<endl;
    cin>>Letra;

    //condicionales
    switch (Letra)
    {
    case 'a':
        cout<<"el Caracter ingresado fue una "<<Letra<<endl;
        break;
    case 'e':
        cout<<"el Caracter ingresado fue una "<<Letra<<endl;
        break;
    case 'i':
        cout<<"el Caracter ingresado fue una "<<Letra<<endl;
        break;
    case 'o':
        cout<<"el Caracter ingresado fue una "<<Letra<<endl;
        break;
    case 'u':
        cout<<"el Caracter ingresado fue una "<<Letra<<endl;
        break;                
    
    default:
        cout<<"el Caracter ingresado es invalido "<<endl;
        break;
    }

}