#include<iostream>
using namespace std;

int main(void){

    //definir Valores
    int No_1,No_2;
    float Resultado;

    // ingreso de Informacion
    cout<<"ingrese el primer Numero"<<endl;
    cin>>No_1;
    cout<<"ingrese un segundo Numero"<<endl;
    cin>>No_2;

    //operacion
    Resultado = (No_1/No_2)+1;

    //mostrar resultado
    cout<<"el resutado es "<<Resultado<<endl;
    return 0;
}