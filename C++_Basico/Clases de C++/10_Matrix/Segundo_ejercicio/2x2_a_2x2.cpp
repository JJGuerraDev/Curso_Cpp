#include <iostream>
using namespace std;

int main(void){
    
    //Definir variables
    int Original[2][2]={0,1,10,11}, Espejo[2][2];

    //Traspaso
    for (int f = 0; f < 2; f++){
        for (int c = 0; c < 2; c++){
            Espejo[f][c]=Original[f][c];
        }
    }

    //Mostrar Matrix
    for (int f = 0; f < 2; f++){
        for(int c = 0; c < 2; c++){
            cout<<"valor en la posicion "<<f<<", "<<c<<endl;
            cout<<"matrix 1: "<<Original[f][c]<<endl;
            cout<<"matrix 2: "<<Espejo[f][c]<<endl;
        }
    }

    return 0;
}