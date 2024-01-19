#include<iostream>
#include<vector>
using namespace std;

int main (void){
    
    //definir Variables
    vector<int> vectorOriginal, VectorResultante;
    for (int i = 1; i <= 5; i++){
        vectorOriginal.push_back(i);
    }
    
    // trapasar variables
    for (int i = 0; i < vectorOriginal.size(); i++){
        VectorResultante.push_back(vectorOriginal[i]*2);
    }
    
    //imprimir vector
    for (int i = 0; i < 5; i++){
        cout<<VectorResultante[i]<<" ";
    }
    

    return 0;
}