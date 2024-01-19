#include<iostream>
#include<vector>
using namespace std;

//Definir Funciones
void Ingreso_Datos();
void Separar();
void Imprimir();

//Definir Variables/Vectores
vector <int> Completos, Impares;
int Bucles=0;

//Fincion Principal
int main(void){
    
    //llamar las Funciones
    Ingreso_Datos();
    Separar();
    Imprimir();

    return 0;
}

//Funciones Secundarias
void Ingreso_Datos(){
    //tmp
    int tmp=0;

    //ingreso de Datos | Variables
    cout<<"Cuantos Numeros quiere revisar"<<endl;
    cin>>Bucles;

    //Ingreso de Datos | vector
    for(int E=0; E<Bucles; E++){
        cout<<"Ingresa el Valor: ";
        cin>>tmp;
        Completos.push_back(tmp);
    }
}

void Separar(){
    //tmp
    int tmp=0;

    //Separacion
    for(int E=0; E<Bucles; E++){
        if((Completos[E]%2) != 0){
            Impares.push_back(Completos[E]);
        }
    }
}

void Imprimir(){
    //Imprimir informacion
    cout<<"La cantida de numero impares es ["<<Impares.size()<<"]"<<endl;
    cout<<"esos Numeros son: "<<endl;
    
    for(int E=0; E<Impares.size(); E++){
        cout<<"El numero en el Espacio ["<<E+1<<"] Es ["<<Impares[E]<<"]"<<endl;
    }
}