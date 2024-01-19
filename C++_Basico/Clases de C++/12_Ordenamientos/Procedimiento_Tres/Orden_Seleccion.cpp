#include<iostream>
using namespace std;

int main (void){
    
    //definir variables
    int Numeros[]={10,2,5,3,1,9,7,6,4,8};
    int Auxiliar,minimo;

    // Mostrar desordenado
    cout<<"Desordenado [";
    for(int N=0; N<10; N++){
        if (N == 0){
            cout<<Numeros[N];
        }else{
            cout<<", "<<Numeros[N];
        }
    }
    cout<<"]"<<endl;
    
    //Ordenar
    for(int I=0; I<10; I++){
        minimo=I;
        for(int J=I+1; J<10; J++){
            if(Numeros[J]<Numeros[minimo]){
                minimo = J;
            }
        }
        Auxiliar = Numeros[I];
        Numeros[I] = Numeros[minimo];
        Numeros[minimo] = Auxiliar;
    }

    // Mostrar ordenado
    cout<<"orden [";
    for(int N=0; N<10; N++){
        if (N == 0){
            cout<<Numeros[N];
        }else{
            cout<<", "<<Numeros[N];
        }
    }
    cout<<"]"<<endl;


    return 0;
}