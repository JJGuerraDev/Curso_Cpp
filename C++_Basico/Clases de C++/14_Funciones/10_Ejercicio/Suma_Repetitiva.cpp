#include<iostream>
using namespace std;

//Definir Funciones
int ingreso_Datos();
int Suma_Numeros(int);

struct valor{
    int Numero;
}Val1;

//Funcion Principal
int main(void){
    
    //llamar Funcion
    cout<<ingreso_Datos()<<endl;

    return 0;
}

//Funciones Secundarias
int ingreso_Datos(void){
    
    //Ingreso de Datos
    cout<<"ingrese el Numero final de la cadena de sumas"<<endl;
    cin>>Val1.Numero;

    cout<<Suma_Numeros(Val1.Numero)<<endl;

    return 1;
}

int Suma_Numeros(int Numero){
    if (Numero >= 2){
        Numero = Numero + Suma_Numeros(Numero-1);
    }

    return Numero;
}