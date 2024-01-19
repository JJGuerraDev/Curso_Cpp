#include<iostream>
using namespace std;

int main(void){
    
    //definir variables
    int Numeros[]={4,3,2,1,5}, Posicion = 0, Auxiliar=0;

    // Mostrar desordenado
    cout<<"Desordenado [";
    for(int N=0; N<5; N++){
        if (N == 0){
            cout<<Numeros[N];
        }else{
            cout<<", "<<Numeros[N];
        }
    }
    cout<<"]"<<endl;

    //ordenamineto
    for(int I =0; I<5; I++){
        Posicion = I;
        Auxiliar = Numeros[I];
        while((Posicion>0)&&(Numeros[Posicion-1]>Auxiliar)){
            Numeros[Posicion] = Numeros[Posicion-1];
            Posicion--;
        }
        Numeros[Posicion] = Auxiliar;
    }


    // Mostrar ordenado
    cout<<"orden [";
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