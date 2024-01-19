#include<iostream>
using namespace std;

int main(void){
    
    //definir Matrices
    int MatrixOriginal[3][3], MatrixEspejo[3][3];
    int ConSemejansas=0;

    //ingreso de Numeros
    cout<<"ingrese por favor los valores para la matrix"<<endl;
    for(int F = 0; F < 3; F++){
        for(int C = 0; C < 3; C++){
            cin>>MatrixOriginal[F][C];
        }
    }

    //Traspaso
    for(int F = 0; F < 3; F++){
        for(int C = 0; C < 3; C++){
            MatrixEspejo[C][F]=MatrixOriginal[F][C];
        }
    }

    //Revision
    for(int F = 0; F < 3; F++){
        for(int C = 0; C < 3; C++){
            if (MatrixEspejo[F][C]==MatrixOriginal[F][C]){
                ConSemejansas++;
            }            
        }
    }

    if (ConSemejansas == 9){
        cout<<"la Matrix intruducida es simetrica"<<endl;
    }else{
        cout<<"la Matrix intruducida no es simetrica"<<endl;
    }

    //matrix intruducida
    for(int F = 0; F < 3; F++){
        cout<<" [";
        for(int C = 0; C < 3; C++){
            cout<<MatrixOriginal[F][C];
        }
        cout<<"] "<<endl;
    }
    
    //matris espejo
    for(int F = 0; F < 3; F++){
        cout<<" [";
        for(int C = 0; C < 3; C++){
            cout<<MatrixEspejo[F][C];
        }
        cout<<"] "<<endl;
    }

    return 0;
}