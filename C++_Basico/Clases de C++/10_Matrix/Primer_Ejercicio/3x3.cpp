#include<iostream>
using namespace std;

int main(void){
    
    //Variables
    int Escalera[3][3]={0,1,2,10,11,12,20,21,22};

    //bucle | imprimir
    for (int F = 0; F < 3; F++){
        for (int C = 0; C < 3; C++){
            if(F == C){
                cout<<Escalera[F][C]<<" ";
            }
        }
        
    }
    

    return 0;
}