#include<iostream>
using namespace std;

int main(void){

    //definir variables
    int Numero1, Numero2;

    //ingreso de informacion
    cout<<"ingrese porfavor dos Numeros para compararlos"<<endl;
    cin>>Numero1;
    cin>>Numero2;

    //condicional
    if (Numero1>Numero2){

        //primer escenario
        cout<<"el Numero "<<Numero1<<" es mayor que el Numero "<<Numero2<<endl;

    }else if (Numero2>Numero1){

        //Segundo escenario
        cout<<"el Numero "<<Numero2<<" es mayor que el Numero "<<Numero1<<endl;

    }else if (Numero2==Numero1 && Numero1==10){

        //escenario especieal
        cout<<"hola Jose Javier"<<endl;
        
    }else{

        cout<<"el Numero "<<Numero1<<" y el Numero"<<Numero2<<" son iguales"<<endl;

    }
    

    return 0;
}