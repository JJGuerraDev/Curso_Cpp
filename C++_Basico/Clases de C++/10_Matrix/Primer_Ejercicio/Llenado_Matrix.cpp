#include<iostream>
using namespace std;

int main(void){
    
    //Definir variables
    int Filas=0, Columnas=0,Llenador=0;

    //ingreso de informacion
    cout<<"ingrese porfavor cuantas filas quiere que tenga la matris"<<endl;
    cin>>Filas;
    cout<<"ingrese porfavor cuantas Columnas quiere que tenga la matris"<<endl;
    cin>>Columnas;

    //definir Matrix
    int Matrix[Filas][Columnas];

    //llenar Matris
    for (int f = 0; f < Filas; f++){
        Llenador=0;
        for (int c = 0; c < Columnas; c++){
            Matrix[f][c]= Llenador+(f*10);
            Llenador++;
        }
    }

    for (int f = 0; f < Filas; f++){
        cout<<" [";
        for (int c = 0; c < Columnas; c++){
            if(c==0){
                cout<<Matrix[f][c];
            }else{
                cout<<", "<<Matrix[f][c];
            }
        }
        cout<<"] "<<endl;
    }
    
    

    return 0;
}