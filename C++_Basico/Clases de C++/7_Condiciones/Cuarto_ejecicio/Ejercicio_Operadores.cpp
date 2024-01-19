#include<iostream>
using namespace std;

int main(void){

    //definir variables
    int Numero1, Numero2, Numero_Revision;

    //ingreso de informacion
    cout<<"ingresa dos Numero"<<endl;
    cin>>Numero1;
    cin>>Numero2;
    cout<<"ingresa un tercer Numero para compara"<<endl;
    cin>>Numero_Revision;

    //Condicional
    if (Numero1 == Numero_Revision && Numero2 == Numero_Revision){
        
        cout<<"el tercer Numero es iagual a los dos primeros"<<endl;
        cout<<Numero_Revision<<" = "<<Numero1<<" = "<<Numero2<<endl;

    }else if (Numero1 == Numero_Revision){

        cout<<"el Tercer numero coincide con el primero ingresado"<<endl;
        cout<<Numero_Revision<<" = "<<Numero1<<endl;

    }else if(Numero2 == Numero_Revision){

        cout<<"el Tercer numero coincide con el Segundo ingresado"<<endl;
        cout<<Numero_Revision<<" = "<<Numero2<<endl;

    }else{

        cout<<"ningun valor coicide con el tercero"<<endl;
        
    }
    


    return 0;
}