#include<iostream>
using namespace std;

int main(void){
    
    //definir variables
    int MatrixA[3][3]={1,2,3,4,5,6,7,8,9},MatrixB[3][3]={10,20,30,40,50,60,70,80,90},MatrixSuma[3][3];

    //Suma
    for(int F=0; F<3; F++){
        for(int C=0; C<3; C++){
            MatrixSuma[F][C]=MatrixA[F][C]+MatrixB[F][C];
        }
    }

    //Resultado
    for(int F=0; F<3; F++){
        cout<<" [";
        for(int C=0; C<3; C++){
            if(C==0){
                cout<<MatrixSuma[F][C];
            }else{
                cout<<", "<<MatrixSuma[F][C];
            }
        }
        cout<<"] "<<endl;
    }

    return 0;
}