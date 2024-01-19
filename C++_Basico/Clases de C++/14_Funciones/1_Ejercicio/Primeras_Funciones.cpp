#include<iostream>
using namespace std;

//Proto Funciones
void Pedir_Datos();
void mult(float X, float Y);

//Variables Generales
float Num1, Num2;

//Funcion Principal
int main(void){
    Pedir_Datos();
    mult(Num1,Num2);

    return 0;
}

void Pedir_Datos(){
    cout<<"ingrese por favor el primer numero a multiplicar"<<endl;
    cin>>Num1;
    cout<<"ingrese por favor el Segundo numero a multiplicar"<<endl;
    cin>>Num2;
}

void mult(float X, float Y){
    float Resultado = X*Y;

    cout<<"el resultado es ["<<Resultado<<"]"<<endl;
    
}