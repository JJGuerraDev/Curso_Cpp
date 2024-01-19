#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(void){
    
    //definir variables
    int Decimal = -1, Residuo = -1;
    short Binari[8];
    vector<int> Binario;

    //ingreso de informacion
    cout<<"ingrese el Numero a convertir"<<endl;
    cin>>Decimal;

    //bucle | convercion
    // for (int i = 0; i < 8; i++){
        
    //     Binari[i] = Decimal % 2;
    //     Decimal /= 2;

    // }

    do{
        
        Residuo = Decimal % 2;
        Binario.push_back(Residuo);
        Decimal /= 2;

    }while ((Decimal > 0) /*&& (Residuo != 0)*/);
    

    //mostrar informacion
    cout<<"la cantidad de Bits es "<<Binario.size()<<endl;
    cout<<"el Numero en binario"<<endl;

    // for (int i = 7; i >= 0; i--){
        
    //     cout<<Binari[i];

    // }
    
    for (int i = Binario.size()-1; i >= 0; i--){
        
        cout<<Binario[i];

    }

    Decimal = 0;
    for (int N = Binario.size()-1; N >= 0 ; N--){
        Decimal += (Binario[N])*(pow(2,N));
    }
    cout<<"\nDecimal Restaurado: "<<Decimal<<endl;
    
    
    
    
    return 0;
}