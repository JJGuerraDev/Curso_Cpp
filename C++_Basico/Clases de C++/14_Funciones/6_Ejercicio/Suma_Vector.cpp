#include<iostream>
using namespace std;

//Definir Funcion
void Ingreso_Datos(int&);
int Calcular(int Vec[]);

//Definir Vector
int A_Sumar[500];
int Bucles=0;

//Funcion Principal
int main(void){

    //ingreso de Datos
    Ingreso_Datos(Bucles);
    

    cout<<"la suma de los valores fue "<<Calcular(A_Sumar)<<endl;
    
    return 0;
}

void Ingreso_Datos(int& Bucles){
    cout<<"Ingrese cuantos"<<endl;
    cin>>Bucles;

    //Registr de Numeros
    cout<<"ingrese los Numero a sumar"<<endl;
    for(int R=0;R<Bucles;R++){
        cin>>A_Sumar[R];
    }
}

int Calcular(int Sumar[]){
    
    //Varioables
    int Suma=0;
    
    for(int S=0; S<Bucles;S++){
        Suma+=Sumar[S];
    }
    
    return Suma;
}