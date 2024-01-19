#include<iostream>
#include<vector>
using namespace std;

int main(void){
    
    //Definir Variables
    vector<int> Numero;
    for(int i = 1; i <= 5; i++){
        Numero.push_back(i);
        cout<<i<<endl;
    }
    int Suma=0;

    //Blucle
    for(int i=0; i<5; i++){
        Suma += Numero[i];
    }

    cout<<Suma<<endl;

    return 0;
}