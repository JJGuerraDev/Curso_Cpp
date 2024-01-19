#include<iostream>
#include<string.h>
using namespace std;

int main(void){
    
    //Definir cadenas
    char Introducion[]="Hola que tal ", Pregunta[]="porfavor introdusca su nombre",Nombre[34],Unificado[50];

    //ingreso de informacion
    cout<<Pregunta<<endl;
    cin.getline(Nombre,34,'\n');

    //Combinar
    strcpy(Unificado,Introducion);
    strcat(Unificado,Nombre);

    //Imprimir informacion
    cout<<Unificado<<endl;

    return 0;
}