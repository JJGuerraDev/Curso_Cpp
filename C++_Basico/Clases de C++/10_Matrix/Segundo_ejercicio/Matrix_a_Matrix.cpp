#include<iostream>
using namespace std;

int main(void){
    
    //Definir variables
    int Filas, Columna;

    //ingreso de Datos
    cout<<"por favor intrudusca cautnas Filas tenga la Matriz"<<endl;
    cin>>Filas;
    cout<<"por favor intrudusca cautnas Filas tenga la Matriz"<<endl;
    cin>>Columna;

    //definir Matris
    int Matrix1[Filas][Columna],Matrix2[Filas][Columna];

    //llenar matrix 1
    for (int f = 0; f < Filas; f++){
        for (int c = 0; c < Columna; c++){
            // Matrix1[f][c]=c+(f*10);
            Matrix1[f][c]=rand()%Columna;
        }
    }
    
    //llenar Matrix 2
    for (int f = 0; f < Filas; f++){
        for (int c = 0; c < Columna; c++){
            Matrix2[f][c]=Matrix1[f][c];
        }
    }

    //imprimir
    for (int f = 0; f < Filas; f++){
        cout<<"[";
        for (int c = 0; c < Columna; c++){
            if (c==0){
                cout<<" "<<Matrix2[f][c];
            }else{
                cout<<", "<<Matrix2[f][c];
            }
            
        }
        cout<<"] "<<endl;
    }

    return 0;
}