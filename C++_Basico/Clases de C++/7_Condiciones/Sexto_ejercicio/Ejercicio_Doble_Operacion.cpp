#include<iostream>
#include<cmath>
using namespace std;

int main(void){

    //definir variables
    int Opcion, Numero;
    double Operacion1;

    //ingreso de informacion
    cout<<"eliga entre que opracion quiere hacer"<<endl;
    cout<<"Opcion 1 | sacar el Cubo de un Numero"<<endl;
    cout<<"Opcion 2 | ver si es Par o Inpart un Numero"<<endl;
    cout<<"Opcion 3 | salir"<<endl;
    cout<<"Elijan la Opcion: "; cin>>Opcion;

    //Condicionales
    switch (Opcion){
    case 1:
        
        cout<<"ingrese por favor el numero a Operar"<<endl;
        cin>>Numero;

        Operacion1=pow(Numero,3);
        cout<<"\n el numero ingresado fue "<<Numero<<" y fue levado a la 3"<<endl;
        cout<<"el resutlado es "<<Operacion1<<endl;

        break;

    case 2:
        
        cout<<"ingrese por favor el numero a Revisar"<<endl;
        cin>>Numero;

        if (Numero%2 == 0){
            
            cout<<"El numero "<<Numero<<" es par"<<endl;

        }else{

            cout<<"El numero "<<Numero<<" es inpar"<<endl;

        }
        break;

    case 3:
    
        cout<<"Que tengas un buen dia :)"<<endl;

        break;
    }
    
}