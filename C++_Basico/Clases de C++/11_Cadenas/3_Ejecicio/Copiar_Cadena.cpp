#include<iostream>
#include<string.h>
using namespace std;

int main(void){
    
    //definir variables
    char Palabra1[20];
    char Palabra2[20];

    //ingrso de informacion
    cout<<"ingrese porfavor una frace"<<endl;
    cin.getline(Palabra1,20,'\n');

    //interacion entre Cadenas
    //strcpy(Donde se pega,donde se copia) comando para copiar
    strcpy(Palabra2,Palabra1);

    //mostrar informacion
    cout<<"la palabra es "<<Palabra2<<endl;
    
    return 0;
}