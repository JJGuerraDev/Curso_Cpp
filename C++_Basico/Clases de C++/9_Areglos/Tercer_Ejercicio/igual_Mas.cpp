#include<iostream>
#include<vector>
using namespace std;

int main(void){
    
    //definir variables
    int MayorVal=0,Suma=0,Tope=0;
    vector<int> Numeros, Sumas;
    for (int i = 0; i < 5; i++){
        Numeros.push_back(1+rand()%15);
    }

    //Operar
    for (int i = 0; i < 5; i++){
        if (Numeros[i]>MayorVal){
            MayorVal = Numeros[i];
        }
    }
    
    for (int i = 0; i < 5; i++){
        Suma += Numeros[i];
        if(Suma == MayorVal){
            Tope = i;
        }
    }

    cout<<"el valor mas alto fue ["<<MayorVal<<"] y es igual a"<<endl;
    for (int i = 0; i <= Tope; i++){
        if (i == 0){
            cout<<Numeros[i];
        }else if(i>0){
            cout<<" + "<<Numeros[i];
        }
    }
    

    return 0;
}