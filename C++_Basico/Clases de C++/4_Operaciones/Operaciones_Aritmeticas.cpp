#include<iostream>
using namespace std;

int main(void){

    // definiendo valores
    double Numero1, Numero2, Suma=0, Resta=0, Multiplicacion=0, Division=0;
    int fin;
    
    //ingreso de informacion
    cout<<"digite un Numero"<<endl;
    cin>>Numero1;
    cout<<"digite un segundo Numero"<<endl;
    cin>>Numero2;
    cout<<endl;

    //operaciones
    Suma=Numero1+Numero2;
    Resta=Numero1-Numero2;
    Multiplicacion=Numero1*Numero2;
    Division=Numero1/Numero2;

    //mostrar informacion
    cout<<Suma<<endl;
    cout<<Resta<<endl;
    cout<<Multiplicacion<<endl;
    cout<<Division<<endl;

    //finalizar
    cout<<"el programa termino"<<endl;
    cin>>fin;
    return 0;
}