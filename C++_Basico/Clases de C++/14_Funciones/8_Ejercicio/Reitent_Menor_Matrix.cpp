#include<iostream>
#include<vector>

using namespace std;

//definir funciones
void Ingreso_Datos();
void Revisar();
void Imprimir_Datos();

//definir variables globales
// int A_Revisar[50][50],Guardados[50];
// int Num_Filas=0,Columnas=0;

//Estructura
struct Matrix{
    vector<vector <int>> Matrix;
    vector<int> Menor;
    int Num_Filas=0, Num_Columnas=0;
}M1;

//Funcion Principal
int main(void){
    
    //llamar Funciones
    Ingreso_Datos();
    Revisar();
    Imprimir_Datos();
    
    return 0;
}

//Funciones secundarias
void Ingreso_Datos(){
    //tmp
    int tmp=0;
    vector<int> temp;

    cout<<"Ingrese cuantas Filas Tendra la Matrix"<<endl;
    cin>>M1.Num_Filas;
    cout<<"Ingrese cuantas Colunmnas Tendra la Matrix"<<endl;
    cin>>M1.Num_Columnas;

    cout<<"Llenar matrix"<<endl;
    for(int F=0;F<M1.Num_Filas;F++){
        temp.clear();
        cout<<"Fila ["<<F+1<<"]"<<endl;
        cout<<endl;
        for(int C=0; C<M1.Num_Columnas; C++){
            cout<<"Columna ["<<C+1<<"]"<<endl;
            cin>>tmp;
            temp.push_back(tmp);
        }
        M1.Matrix.push_back(temp);
    }
}

void Revisar(){
    //Menor
    int menor = 9999;

    for(int F=0; F<M1.Num_Filas; F++){
        menor = 9999;
        for (int C = 0; C < M1.Num_Columnas; C++){
            if(M1.Matrix[F][C]<menor){
                menor=M1.Matrix[F][C];
            }
        }
        M1.Menor.push_back(menor);
    }
}

void Imprimir_Datos(){
    cout<<"los numeros mas bajos de cada fila fueron"<<endl;

    for(int E=0; E<M1.Num_Filas; E++){
        cout<<"el Numero mas bajo de la Fila ["<<E+1<<"] ["<<M1.Menor[E]<<"]"<<endl;
    }
}