#include<iostream>
using namespace std;

int main(void){
    
    //definir Variables
    int Numeros[]={4,3,2,1,5};
    int Aux=0;

    //imprimir desorden
    cout<<"Desordenado [";
    for(int N=0; N<5; N++){
        if (N == 0){
            cout<<Numeros[N];
        }else{
            cout<<", "<<Numeros[N];
        }
    }
    cout<<"]"<<endl;

    //Ordenar Areglo
    for (int I = 0; I < 5; I++){
        for(int J=0; J<5; J++){
            if (Numeros[J]>Numeros[J+1]){
                Aux=Numeros[J];
                Numeros[J]=Numeros[J+1];
                Numeros[J+1]=Aux;
            }
            
        }
    }

    // mostrar ordenado
    cout<<"Ordenado [";
    for(int N=0; N<5; N++){
        if (N == 0){
            cout<<Numeros[N];
        }else{
            cout<<", "<<Numeros[N];
        }
    }
    cout<<"]"<<endl;
    

    return 0;
}