#include<iostream>
#include<cmath>
using namespace std;

//definir Funciones secundarias
void Introduccion();
void Cuadrado_N(float N2, int N);

//definir variables generales
float Elevar_Numero=0,NumeroAN=1,Ciclos=0;

//Funcion Principal
int main(void){
    
    //llamar Funciones
    Introduccion();
    Cuadrado_N(Elevar_Numero,Ciclos);
    
    return 0;
}

void Introduccion(){
    cout<<"Ingrese el numero a elevar"<<endl;
    cin>>Elevar_Numero;
    cout<<"Ingrese el numero a elevar"<<endl;
    cin>>Ciclos;
}

void Cuadrado_N(float N2, int N){
    for(int Repeticiones=0; Repeticiones<N; Repeticiones++){
        NumeroAN *= N2;
    }

    cout<<"el resultado fue ["<<NumeroAN<<"]"<<endl;
}