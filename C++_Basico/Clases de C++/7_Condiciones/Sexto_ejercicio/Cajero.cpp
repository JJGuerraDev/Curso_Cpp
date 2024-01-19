#include<iostream>
using namespace std;

int main(void){
    
    //definir Variables
    int Fondos=1000000, opcion, Ingreso, Retiro;

    //ingreso de informacion
    cout<<"\t bienbenido al Cajero virtual"<<endl;
    cout<<"Opcion 1 | ingreso de dinero"<<endl;
    cout<<"Opcion 2 | Retirar Dineo"<<endl;
    cout<<"Opcion 3 | salir"<<endl;
    cout<<"Ingrese La Operacion a Realizar: "; cin>>opcion;

    // Condicionales
    switch(opcion){
     
     case 1:
        
        cout<<"cuanto dinero quiere ingresar"<<endl;
        cin>>Ingreso;
        Fondos += Ingreso;
        cout<<"los fondos que tiene en este momento son "<<Fondos<<endl;

           break;
     case 2:
        
        cout<<"cuanto dinero quiere Sacar"<<endl;
        cin>>Retiro;
         if (Retiro > Fondos){
            
            cout<<"lo sentimos pero no se posee dicha cantida"<<endl;
            cout<<"Retiro de "<<Retiro<<" Fue cancelado, limite a retirar"<<Fondos<<endl;

         } else {

            Fondos -= Retiro;
            cout<<"queda en la cuenta "<<Fondos<<endl;
            cout<<"se le entrega el valor "<<Retiro<<endl;
         }
        break;
     case 3:
         cout<<"gracias por usar el cajero"<<endl;
        break;      
    }

    return 0;
}