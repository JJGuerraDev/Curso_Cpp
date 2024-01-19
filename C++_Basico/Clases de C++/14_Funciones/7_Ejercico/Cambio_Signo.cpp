#include<iostream>
using namespace std;

//definir Funciones
void Ingreso_Datos();
void Convertir();
void Imprimir();

//Definir Variables/Vectores Globales
int Bucles=0;
int Cambiar[500];

//Funcion Principal
int main(void){
    
    //Traer Funciones
    Ingreso_Datos();
    Convertir();
    Imprimir();

    return 0;
}

//Funcuines secundarias
void Ingreso_Datos(){
    //Ingreso de datos
    cout<<"ingrese cuantos valores quiere cambiar de signo"<<endl;
    cin>>Bucles;

    //Llenar vector
    cout<<"ingrese los Numero"<<endl;
    for(int E=0; E<Bucles; E++){
        cout<<"ingrese el valor ["<<E+1<<"]: ";
        cin>>Cambiar[E];
    }
}

void Convertir(){
    for(int E=0;E<Bucles;E++){
        Cambiar[E] = Cambiar[E]*-1;
    }
}

void Imprimir(){
    for(int E=0;E<Bucles;E++){
        cout<<"el el valor ["<<E+1<<"] es ["<<Cambiar[E]<<"]"<<endl;
    }
}