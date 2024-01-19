#include<iostream>
using namespace std;

int main(void){

    //definir Variable
    int Numero;

    //ingreso de infromacion
    cout<<"ingrese un Numero para revisarlo"<<endl;
    cin>>Numero;

    //condiconal
    if (Numero<0){
        
        cout<<"el numero "<<Numero<<" es negativo"<<endl;

    }else if(Numero>0){

        cout<<"el numero "<<Numero<<" es positivo"<<endl;

    }else if(Numero==0){

        cout<<"el numero "<<Numero<<" igual a 0"<<endl;

    }else{

        cout<<"el valor ingresado no es valido"<<endl;

    }
    

    return 0;
}