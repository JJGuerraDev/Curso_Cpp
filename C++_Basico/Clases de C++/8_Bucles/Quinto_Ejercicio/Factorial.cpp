#include<iostream>
using namespace std;

int main(void){
    
    //definir Variables
    int Base=0, Acumulacion=1;

    //Ingreso de Informacion
    cout<<"ingrese el Numero del que se sacara Factorial"<<endl;
    cin>>Base;

    //bucle
    for (int i = 1; i <= Base; i++){
        Acumulacion *= i;
        // cout<<"lo acumulado Hasta ahora"<<Acumulacion<<endl;
    }

    cout<<"el resultado fue "<<Acumulacion<<endl;
    

    return 0;
}