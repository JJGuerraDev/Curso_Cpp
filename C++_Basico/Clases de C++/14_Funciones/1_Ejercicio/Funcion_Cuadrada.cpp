#include<iostream>
using namespace std;

//declarar Funciones
void Al_Cuadrado(float A2);
void Ingreso();

//Definir Variables Generales
float Numero_Elevar=0, NumeroA2=0;

//Funcion Principal
int main(void){
    
    //llamar funciones
    Ingreso();
    Al_Cuadrado(Numero_Elevar);

    return 0;
}

void Ingreso(){
    cout<<"ingrese por favor el Numero a elevar"<<endl;
    cin>>Numero_Elevar;
}

void Al_Cuadrado(float A2){
    NumeroA2 = A2 * A2;

    //Resultado en pantalla
    cout<<"resultado ["<<NumeroA2<<"]"<<endl;
}