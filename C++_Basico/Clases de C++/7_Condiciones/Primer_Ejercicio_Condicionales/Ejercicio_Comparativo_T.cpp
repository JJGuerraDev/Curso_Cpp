#include<iostream>
using namespace std;

int main(void){

    //definir variables
    int Numero1, Numero2, Numero3;

    //ingreso de Informacion
    cout<<"ingrese los tres numero a comparar"<<endl;
    cin>>Numero1;
    cin>>Numero2;
    cin>>Numero3;

    //Condicioal
    if (Numero1==Numero2 && Numero2==Numero3){
        
        cout<<"los tres numeros son iguales"<<endl;
        
    }else if (Numero1==Numero2 || Numero2==Numero3 || Numero1==Numero3){
        if (Numero1==Numero2){
            
            cout<<"el Numero "<<Numero1<<" y el numero "<<Numero2<<" son iguales"<<endl;

        }else if(Numero2==Numero3){
            
            cout<<"el Numero "<<Numero2<<" y el numero "<<Numero3<<" son iguales"<<endl;

        }else{

            cout<<"el Numero "<<Numero1<<" y el numero "<<Numero3<<" son iguales"<<endl;

        }
        
    }else if (Numero1 > Numero2 && Numero1 > Numero3){
        
        cout<<"el numero mas alto "<<Numero1<<endl;

    }else if (Numero2 > Numero1 && Numero2 > Numero3){
        
        cout<<"el numero mas alto "<<Numero2<<endl;
        
    }else if (Numero3 > Numero1 && Numero3 > Numero2){
        
        cout<<"el numero mas alto "<<Numero3<<endl;

    }
    
    
    
    return 0;
}