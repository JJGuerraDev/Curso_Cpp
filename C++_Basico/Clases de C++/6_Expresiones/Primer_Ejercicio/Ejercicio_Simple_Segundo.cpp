#include<iostream>
using namespace std;

int main(void){

    //definir Valores
    int No_1,No_2,No_3,No_4;
    float Resultado;

    // ingreso de Informacion
    cout<<"ingrese el primer Numero"<<endl;
    cin>>No_1;
    cout<<"ingrese el segundo Numero"<<endl;
    cin>>No_2;
    cout<<"ingrese el Tercero Numero"<<endl;
    cin>>No_3;
    cout<<"ingrese el cuarto Numero"<<endl;
    cin>>No_4;

    //operacion
    Resultado = (No_1+No_2)/(No_3+No_4);

    //mostrar resultado
    cout<<"el resutado es "<<Resultado<<endl;
    return 0;
}