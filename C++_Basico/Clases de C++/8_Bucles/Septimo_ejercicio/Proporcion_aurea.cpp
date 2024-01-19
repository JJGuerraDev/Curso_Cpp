#include<iostream>
using namespace std;

int main(void){
    
    //definir Variable
    int Limite=0,NumeroAuro1=1,NumeroAuro2=1,NumeroAuro=0;

    //ingres de Datos
    cout<<"cual numero de la escala Aurea quieres"<<endl;
    cin>>Limite;

    //bucle | Escala
    for (int i = 0; i < Limite; i++){
        if(i%2 == 0){
            NumeroAuro1 += NumeroAuro2;
        }else if(i%2!=0){
            NumeroAuro2 += NumeroAuro1;
        }
    }
     
     NumeroAuro=NumeroAuro1+NumeroAuro2;

    //mostrar Datos
    cout<<"el numero Auro en el escalon "<<Limite<<" es "<<NumeroAuro<<endl;

    return 0;
}