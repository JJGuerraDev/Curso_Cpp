#include<iostream>
using namespace std;

int main(void){
    
    //definir variables
    int MatrixOriginal[3][3]={0,1,2,10,11,12,20,21,22}, MatrixInvertida[3][3];

    //invertir
    for (int f = 0; f < 3; f++){
        for(int c = 0; c < 3; c++){
            MatrixInvertida[c][f]=MatrixOriginal[f][c];
        }
    }
    
    //mostrar Matrix
    for (int f = 0; f < 3; f++){
        cout<<" [";
        for(int c = 0; c < 3; c++){
            if(c==0){
                cout<<" "<<MatrixOriginal[f][c];
            }else{
                cout<<", "<<MatrixOriginal[f][c];
            }
        }
        cout<<"] "<<endl;
    }

    for (int f = 0; f < 3; f++){
        cout<<" [";
        for(int c = 0; c < 3; c++){
            if(c==0){
                cout<<" "<<MatrixInvertida[f][c];
            }else{
                cout<<", "<<MatrixInvertida[f][c];
            }
        }
        cout<<"] "<<endl;
    }


    return 0;
}