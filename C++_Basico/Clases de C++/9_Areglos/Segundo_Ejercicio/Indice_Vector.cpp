#include<iostream>
#include<vector>
using namespace std;

int main(void){
    
    //definir variables
    vector<int> indicador;
    for (int i = 1; i <= 5; i++){
        indicador.push_back(i);
    }

    //mostrar informacion
    for (int i = 0; i < 5; i++){
        cout<<"el numero ["<<indicador[i]<<"] tiene el indice "<<i<<endl;
    }
    
    

    return 0;
}