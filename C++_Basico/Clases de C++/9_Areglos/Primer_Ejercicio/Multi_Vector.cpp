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
    int Multiplicacion=1;

    //Blucle
    for(int i=0; i<5; i++){
        Multiplicacion *= Numero[i];
    }

    cout<<Multiplicacion<<endl;

    return 0;
}