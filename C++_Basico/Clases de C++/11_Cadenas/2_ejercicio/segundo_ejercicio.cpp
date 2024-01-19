#include<iostream>
#include<string.h>
using namespace std;

int main(void){
    
    //Definir Cadena
    // char Palabras[]="Zero Poit";
    char Palabras[21];
    int Medida=0;

    //ingreso de informacion
    cout<<"ingrese por favor una frace"<<endl;
    cin.getline(Palabras,21,'\n');

    Medida = strlen(Palabras);

    //mostrar informacion
    cout<<"la palabra colocada fue "<<Palabras<<endl;
    cout<<"esta palabra tiene "<<Medida<<" Caracteres"<<endl;
    
    return 0;
}