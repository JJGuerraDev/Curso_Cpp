#include <iostream>
#include <vector>

using namespace std;

//Definir Funciones
void Ingreso_Datos();
bool Revisar_Simetria(void);
void Imprimir(bool);

//Definir Variables/Matrices
vector<vector<int>> Matriz;
int num_Filas=0, num_Columnas=0; 

//funcion Principal
int main(void){
    
    bool Simetria_flag = false;
    //Bienvenida
    cout<<"Biemvenido a revisor de simetria de Matrices"<<endl;
    
    //llamar Funciones
    Ingreso_Datos();
    Simetria_flag = Revisar_Simetria();
    Imprimir(Simetria_flag);

    return 0;
}

void Ingreso_Datos(){

    //tmp
    int tmp=0;
    vector<int> temp;
    
    //Ingreso del tamaño de la Matrix
    cout<<"Por favor ingrese el Numero de Filas"<<endl;
    cin>>num_Filas;
    cout<<"Por favor ingrese el Numero de Columnas"<<endl;
    cin>>num_Columnas;

    //llenar Matrix
    cout<<"Ingrese los Numero a la Matrix"<<endl;
    for(int F=0; F<num_Filas; F++){
        cout<<"Fila ["<<F+1<<"] ";
        temp.clear();
        for(int C=0; C<num_Columnas; C++){
            cout<<"Columna ["<<C+1<<"]"<<endl;
            cout<<"ingrese el valor"<<endl;
            cin>>tmp;
            temp.push_back(tmp);
        }
        Matriz.push_back(temp);
    }
}

bool Revisar_Simetria(void){
    //Revisar Columnas y filas
    if(num_Filas != num_Columnas){
        return false;
    }else{
        for(int F=0; F<num_Filas; F++){
            for(int C=0; C<num_Columnas; C++){
                if(Matriz[F][C] != Matriz[C][F]){
                    return false;
                }
            }
        }
        return true;
    }
}

void Imprimir(bool flag){
    if(flag){
        cout<<"la matrix es Simetrica"<<endl;
        cout<<"matrix Original"<<endl;
        for(int F=0; F<num_Filas; F++){
            cout<<"[";
            for(int C=0; C<num_Columnas; C++){
                if (C == 0){
                    cout<<Matriz[F][C];
                }else if(C > 0){
                    cout<<", "<<Matriz[F][C];
                }
            }
            cout<<"]"<<endl;;
        }

        cout<<"matrix Invertida"<<endl;
        for(int C=0; C<num_Columnas; C++){
            cout<<"[";
            for(int F=0; F<num_Filas; F++){
                if (F == 0){
                    cout<<Matriz[C][F];
                }else if(F > 0){
                    cout<<", "<<Matriz[C][F];
                }
            }
            cout<<"]"<<endl;
        }

    }else{
        cout<<"la matrix No es Simetrica"<<endl;        
    }
}