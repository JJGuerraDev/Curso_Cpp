#include<iostream>
using namespace std;

//definir funciones
void Ingreso_Datos();
void Revisar();
void Imprimir_Datos();

//definir variables globales
int A_Revisar[50][50],Guardados[50];
int Filas=0,Columnas=0;

//Funcion Principal
int main(void){
    
    //llamar Funciones
    Ingreso_Datos();
    Revisar();
    Imprimir_Datos();
    
    return 0;
}

//Funciones secundarias
void Ingreso_Datos(){
    //tmp
    int tmp=0;

    cout<<"Ingrese cuantas Filas Tendra la Matrix"<<endl;
    cin>>Filas;
    cout<<"Ingrese cuantas Colunmnas Tendra la Matrix"<<endl;
    cin>>Columnas;

    cout<<"Llenar matrix"<<endl;
    for(int F=0;F<Filas;F++){
        cout<<"Fila ["<<F+1<<"]"<<endl;
        cout<<endl;
        for(int C=0; C<Columnas; C++){
            cout<<"Columna ["<<C+1<<"]"<<endl;
            // cin>>tmp;
            cin>>A_Revisar[F][C];
        }
    }
}

void Revisar(){
    //Menor
    int menor = 9999;

    for(int F=0; F<Filas; F++){
        menor = 9999;
        for (int C = 0; C < Columnas; C++){
            if(A_Revisar[F][C]<menor){
                menor=A_Revisar[F][C];

            }
        }
        Guardados[F]=menor;
    }
}

void Imprimir_Datos(){
    cout<<"los numeros mas bajos de cada fila fueron"<<endl;

    for(int E=0; E<Filas; E++){
        cout<<"el Numero mas bajo de la Fila ["<<E+1<<"] ["<<Guardados<<"]"<<endl;
    }
}