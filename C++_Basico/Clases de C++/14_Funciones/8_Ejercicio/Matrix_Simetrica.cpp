#include <iostream>
using namespace std;

//Definir Funciones
void Ingreso_Datos();
void Revisar_Matrix();
void Imprimir(int);

//Definir Variables/Matrices
int Revisar[100][100];
int Filas=0, Columnas=0; Revisor=0;

//funcion Principal
int main(void){
    
    //Bienvenida
    cout<<"Biemvenido a revisor de geometri de Matrices"<<endl;
    
    //llamar Funciones
    Ingreso_Datos();
    Revisar_Matrix();
    Imprimir(Revisor);

    return 0;
}

void Ingreso_Datos(){

    //tmp
    int tmp=0;
    
    //Ingreso del tamaño de la Matrix
    cout<<"Por favor ingrese el Numero de Filas"<<endl;
    cin>>Filas;
    cout<<"Por favor ingrese el Numero de Columnas"<<endl;
    cin>>Columnas;

    //llenar Matrix
    cout<<"Ingrese los Numero a la Matrix"<<endl;
    for(int F=0; F<Filas; F++){
        cout<<"Fila ["<<F+1<<"] ";
        for(int C=0; C<Columnas; C++){
            cout<<"Columna ["<<C+1<<"]"<<endl;
            cout<<"ingrese el valor"<<endl;
            cin>>tmp;
            Revisar[F][C]=tmp;
        }
    }
}

void Revisar_Matrix(){
    //Revisar Columnas y filas
    if(Filas != Columnas){
        Revisor = 1;
    }else if (Filas == Columnas){
        for(int F=0; F<Filas; F++){
            for(int C=0; C<Columnas; C++){
                if(Revisar[F][C] != Revisar[C][F]){
                    Revisor = 1;
                }
            }
        }
    }
}

void Imprimir(int Separador){
    if(Separador == 1){
        cout<<"la matrix No es Simetrica"<<endl;
    }else if(Separador != 0){
        cout<<"la matrix es Simetrica"<<endl;
        cout<<"matrix Original"<<endl;
        for(int F=0; F<Filas; F++){
            cout<<"[";
            for(int C=0; C<Columnas; C++){
                if (C == 0){
                    cout<<Revisar[F][C];
                }else if(C > 0){
                    cout<<", "<<Revisar[F][C];
                }
            }
            cout<<"]";
        }
        cout<<"matrix Invertida"<<endl;
        for(int F=0; F<Filas; F++){
            cout<<"[";
            for(int C=0; C<Columnas; C++){
                if (F == 0){
                    cout<<Revisar[C][F];
                }else if(F > 0){
                    cout<<", "<<Revisar[C][F];
                }
            }
            cout<<"]";
        }
    }
}