#include<iostream>
using namespace std;

int main(void){
    //definir variables
    int Edad;
    char Genero[10];
    float Altura;

    //ingreso de Informacion
    cout<<"ingrese su edad"<<endl;
    cin>>Edad;
    cout<<"ingrese su Genero"<<endl;
    cin>>Genero;
    cout<<"ingrese su Altura en Metros"<<endl;
    cin>>Altura;

    //mostrar infromacion
    cout<<"Tu edad es "<<Edad<<endl;
    cout<<"Tu Genero es "<<Genero<<endl;
    cout<<"Tu Altura es "<<Altura<<"Mt's"<<endl;
    return 0;
}