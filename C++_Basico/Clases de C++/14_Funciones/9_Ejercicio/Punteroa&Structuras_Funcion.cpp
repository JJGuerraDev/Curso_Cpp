#include<iostream>
using namespace std;

//definir Funciones
int Ingreso_Datos();
int Realizar_Operacion();
int Imprimir_Datos();

//estructura
struct Num_Complejos{
    float Real=0, Imaginario=0;
}Elemen_one, Elemen_two,Result;

//funcion main
int main(void){
    
    //call Fincion
    cout<<Ingreso_Datos()<<endl;
    cout<<Realizar_Operacion()<<endl;
    cout<<Imprimir_Datos()<<endl;
    return 0;
}

//secundari Funcion
int Ingreso_Datos(){

    
    //Ingres Data | Complejo 1
    cout<<"Ingrese el valor Real del Numero Complejo 1"<<endl;
    cin>>Elemen_one.Real;
    cout<<"Ingrese el valor Imaginario del Numero Complejo 1"<<endl;
    cin>>Elemen_one.Imaginario;

    //Ingres Data | Complejo 2
    cout<<"Ingrese el valor Real del Numero Complejo 2"<<endl;
    cin>>Elemen_two.Real;
    cout<<"Ingrese el valor Imaginario del Numero Complejo 2"<<endl;
    cin>>Elemen_two.Imaginario;

    return 0;
}

int Realizar_Operacion(void){
    
    // Operacion de reales
    Result.Real=Elemen_one.Real+Elemen_two.Real;

    //Operacion Inmaginarios
    Result.Imaginario=Elemen_one.Imaginario+Elemen_two.Imaginario;

    return 1;
}

int Imprimir_Datos(){

    //imprimir
    cout<<"El resultado fue"<<endl;
    cout<<"["<<Result.Real;
    if(Result.Imaginario<0){
        cout<<Result.Imaginario<<"]"<<endl;
    }else{
        cout<<"+"<<Result.Imaginario<<"]"<<endl;
    }

    return 2;
}