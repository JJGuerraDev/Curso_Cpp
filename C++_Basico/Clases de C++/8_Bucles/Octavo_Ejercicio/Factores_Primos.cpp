#include<iostream>
#include<vector>
using namespace std;

int main(void){
    
    // definir variables
    int NumeroDescomponer=0,NumPrimo=0;
    vector<int> ValPrimos, ElementosPrimos;
    for(int N = 2; N <= 100; N++){
        cout<<"Evaluando N = "<<N<<endl;
        for (int P = 1; P <= N; P++){
            if ((N%P==0) && (N==P)){
                ValPrimos.push_back(N);
                cout<<"Numero Primo "<<N<<endl;
            }
        }
    }

    //ingreso de Datos
    cout<<"ingrese porfavor el Numero a descomponer"<<endl;
    cin>>NumeroDescomponer;

    //Bucle
    do{
        
        if(NumeroDescomponer%ValPrimos[NumPrimo]==0){
            ElementosPrimos.push_back(ValPrimos[NumPrimo]);
            NumeroDescomponer /=ValPrimos[NumPrimo];
        }
        NumPrimo ++;
    } while (NumeroDescomponer == 0);

    cout<<"valores los primos que componen al numero son"<<endl;
    for (int i = 0; i < ValPrimos.size(); i++){
        if (i==0){
            cout<<ValPrimos[i]<<" ";
        }else{
            cout<<"* "<<ValPrimos[i];
        }
        
    }   

    return 0;
}