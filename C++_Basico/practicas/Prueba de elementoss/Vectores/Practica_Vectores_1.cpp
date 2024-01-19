#include<iostream>
#include<vector>
using namespace std;

int main(void){
    
    //definir Variables
    vector<int> Numeros{1,2,3,4,5};
    vector<int> *Direccion;

    for(int i=0; i<5; i++){
        Direccion.push_back(&Numeros.data(i));
    }
    
    return 0;
}