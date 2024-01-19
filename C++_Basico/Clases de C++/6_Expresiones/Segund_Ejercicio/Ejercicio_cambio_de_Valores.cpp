#include<iostream>
using namespace std;

int main(){

    //definir Variables
    int No_1, No_2, Elemento_Auxiliar;

    //Ingreso de Datos
    cout<<"ingrese el Primer Numero para cambiar"<<endl;
    cin>>No_1;
    cout<<"ingrese el Segundo Numero para cambiar"<<endl;
    cin>>No_2;

    //Operacion
    Elemento_Auxiliar=No_1;
    No_1=No_2;
    No_2=Elemento_Auxiliar;

    //Mostrar Informacion
    cout<<"el Primer Numero introducido "<<No_2<<" por el Numero "<<No_1<<endl;
    cout<<"el Segundo Numero introducido "<<No_1<<" por el Numero "<<No_2<<endl;

    return 0;
}