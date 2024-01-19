#include<iostream>
#include<string.h>
using namespace std;

int main(void){
    
    //definir variable
    char Palabras[20];
    
    //ingrso de informacion
    cout<<"ingrese por favor una frace con mas de 10 caracteres"<<endl;
    cin.getline(Palabras,20,'\n');

    // condicional
    if(strlen(Palabras)>10){
        cout<<"la Frace introdcuida fue "<<Palabras<<endl;
        cout<<"el tamaño de la Frace es de "<<strlen(Palabras)<<" caracteres"<<endl;
    }else{
        cout<<"la frase fue muy corta con "<<strlen(Palabras)<<" caracteres"<<endl;
    }


    return 0;
}