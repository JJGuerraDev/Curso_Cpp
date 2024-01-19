#include<iostream>
#include<vector>
using namespace std;

int main(void){
    
    //Definir variable
    int valorMax=0;
    vector<int> Numeros;
    for (int i = 0; i < 5; i++){
        Numeros.push_back(1+rand()%10);
    }

    //Ordenar
    for (int i = 0; i < 5; i++){
        if (Numeros[i]>valorMax){
            valorMax = Numeros[i];
        }
    }
    
    cout<<"el mayor Numero del Vector es ["<<valorMax<<"]"<<endl;
    

    return 0;
}