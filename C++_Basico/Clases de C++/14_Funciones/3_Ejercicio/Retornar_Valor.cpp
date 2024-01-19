#include<iostream>
using namespace std;

//declarar Funciones
void Ingreso();
template<class Tip>
void Imprimir(Tip Numero);

//definir Variables Generales
int tipo=0,valor=0;

//Variablesas
int Entero=0;
float Real=0.0;
double Estenso=0;

//Funcion Principal
int main(void){
    Ingreso();
    switch(tipo){
    case 1:
        Imprimir(Entero);
        break;
    case 2:
        Imprimir(Real);
        break;
    case 3:
        Imprimir(Estenso);
        break;        
    }
    return 0;
}

//Funciones Secundarias
void Ingreso(){
    cout<<"ingrese el timpo deelementoque quiere mostrar"<<endl;
    cout<<"1 [Entero], 2 [Real], 3 [estenso]"<<endl;
    cin>>tipo;

    // if(tipo == 1){}else if(){}else if(){}
    switch (tipo)
    {
    case 1:
        cout<<"El tipo de [Entero] fue el elegido"<<endl;
        cout<<"ingrese el numero"<<endl;
        cin>>Entero;
        break;
    case 2:
        cout<<"El tipo de [Real] fue el elegido"<<endl;
        cout<<"ingrese el numero"<<endl;
        cin>>Real;
        break;
    case 3:
        cout<<"El tipo de [Estenso] fue el elegido"<<endl;
        cout<<"ingrese el numero"<<endl;
        cin>>Estenso;
        break;        
    
    default:
        cout<<"La eleccion no es valida"<<endl;
        break;
    }
}

template<class Tip>
void Imprimir(Tip Numero){
    cout<<" El numero ingresado fue ["<<Numero<<"] ";
    switch(tipo){
    case 1:
        cout<<"y su tipo es Entero"<<endl;
        break;
    case 2:
        cout<<"y su tipo es Real"<<endl;
        break;
    case 3:
        cout<<"y su tipo es Estenso"<<endl;
        break;        
    }   
}