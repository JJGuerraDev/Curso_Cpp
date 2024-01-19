#include<iostream>
using namespace std;

//Definir funciones
void Ingreso_Datos();
void Revicion();
void Ordenar();

//Variables/Vectores Globales
int Bucles=0;
int Revisar[500];

//Funcion Principal
int main(void){

    //Variable local
    bool Orden=false;

    //ejecutar Funciones
    Ingreso_Datos();
    Revicion();

    cout<<"quiere ordenar los Numeros, escriba un numero"<<endl;
    cin>>Orden;

    if(Orden==true){
        Ordenar();
        Revicion();
    }

    return 0;
}

//Funciones Secundaria
void Ingreso_Datos(){
    cout<<"Ingrese cuantos Numeros quiere ingresar"<<endl;
    cin>>Bucles;

    for(int B=0;B<Bucles;B++){
        
        cout<<"Ingrese el numero "<<B+1<<": ";
        cin>>Revisar[B];
    }
}

void Revicion(){
    for(int R=0; R<Bucles; R++){
        if (Revisar[R]>Revisar[R+1]){
            cout<<"El numero ["<<Revisar[R]<<"] es mayor que el siguiente que es ["<<Revisar[R+1]<<"]"<<endl;
        }else{
            cout<<"El numero ["<<Revisar[R]<<"] es menor que el siguiente que es ["<<Revisar[R+1]<<"]"<<endl;
        }
    }
}

void Ordenar(){
    
    //tmp
    int Posicion=0, Auxiliar=0;
    
    for(int I =0; I<Bucles; I++){
        Posicion = I;
        Auxiliar = Revisar[I];
        while((Posicion>0)&&(Revisar[Posicion-1]>Auxiliar)){
            Revisar[Posicion] = Revisar[Posicion-1];
            Posicion--;
        }
        Revisar[Posicion] = Auxiliar;
    }
}