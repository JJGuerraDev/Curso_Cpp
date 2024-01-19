#include<iostream>
using namespace std;

int main(void){

    //definir Variables
    char Letra;

    //ingreso de informacion
    cout<<"ingrese una vocal porfavor"<<endl;
    cin>>Letra;

    //Condicional
    switch (Letra)
    {
    case 'a':
       cout<<"la vocal colocada fue una a minuscula"<<endl;
        break;
    case 'A':
        cout<<"la vocal colocada fue una A Mayuscula"<<endl;
        break;    
    case 'e':
        cout<<"la vocal colocada fue una e minuscula"<<endl;
        break;
    case 'E':
        cout<<"la vocal colocada fue una E Mayuscula"<<endl;
        break;    
    case 'i':
        cout<<"la vocal colocada fue una i minuscula"<<endl;
        break;
    case 'I':
        cout<<"la vocal colocada fue una I Mayuscula"<<endl;
        break;    
    case 'o':
        cout<<"la vocal colocada fue una o minuscula"<<endl;
        break;
    case 'O':
        cout<<"la vocal colocada fue una O Mayuscula"<<endl;
        break;    
    case 'u':
        cout<<"la vocal colocada fue una u minuscula"<<endl;
        break;                
    case 'U':
        cout<<"la vocal colocada fue una U Mayuscula"<<endl;
        break;
    default:
        cout<<"se a ingresado un elemento que no es una vocal"<<endl;
        break;
    }

    return 0;
}