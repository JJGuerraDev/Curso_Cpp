#include<iostream>
#include<string.h>
using namespace std;

int main(void){
    
    //Definir variable
    char Cadena1[]="Menos", Cadena2[]=" Cero", CadenaCombinada[30];

    // unir Cadenas
    //strcat(Donde se coloca la cadena, Cadena Agregada);
    strcpy(CadenaCombinada,Cadena1);
    cout<<CadenaCombinada<<endl;
    strcat(CadenaCombinada,Cadena2);
    cout<<CadenaCombinada<<endl;

    //Mostrar Datos
    cout<<"me llamo ["<<CadenaCombinada<<"]"<<endl;

    return 0;
}