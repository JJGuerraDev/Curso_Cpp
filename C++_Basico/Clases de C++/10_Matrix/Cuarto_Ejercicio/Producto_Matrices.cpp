#include<iostream>
using namespace std;

int main(void){
    
    //definir variables
    int Suma, C2=0;
    int MatrixA[3][3],MatrixB[3][3],MatrixResultante[3][3];

    //ingreso de Datos
    cout<<"ingrese porfavor los valores para la matrix"<<endl;
    for(int F=0; F<3; F++){
        for(int C=0; C<3; C++){
            cin>>MatrixA[F][C];
            MatrixB[F][C]=MatrixA[F][C];
        }
    }

    //Operar
    for(int F=0; F<3; F++){
        for(int F2=0; F2<3; F2++){
            Suma = 0;
            for(int C=0; C<3; C++){
                Suma += (MatrixA[F][C]*MatrixB[C][F2]);
            }
            MatrixResultante[F][F2]=Suma;
        }
    }

    //Mostrar Matrix Resultado
    for(int F=0; F<3; F++){
        cout<<" [";
        for(int C=0; C<3; C++){
            if(C == 0){
                cout<<MatrixResultante[F][C];
            }else{
                cout<<", "<<MatrixResultante[F][C];
            }
        }
        cout<<"] "<<endl;
    }

    return 0;
}