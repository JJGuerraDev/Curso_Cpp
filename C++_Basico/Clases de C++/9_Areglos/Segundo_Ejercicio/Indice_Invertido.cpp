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
    for (int i = 4; i >= 0; i--){
        cout<<"el Numero ["<<indicador[i]<<"] en el idicador "<<i<<endl;
    }
    
    
    return 0;
}