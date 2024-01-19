#include<iostream>
#include <vector>
using namespace std;

int main(void){
    
    //definir variable
    int Numero_G = -1;
    vector<int> Almacenamiento;

    cout<<"ingrese vario numeros"<<endl;
    cout<<"coloca 0 para terminar"<<endl;

    //Bucle
    do{
        
        cin>>Numero_G;

        if (Numero_G != 0){
            Almacenamiento.push_back(Numero_G);
        }
        
    } while (Numero_G != 0);

    for (int i = 0; i < Almacenamiento.size(); i++){
        
        cout<<Almacenamiento[i]<<endl;

    }
    
    

    return 0;
}