#include<iostream>
using namespace std;

//Definir Funciones
int Ingreso_Datos();
int Comparar_Datos(int*);
int inprimir_Datos(bool*,int*);

struct Primos{
    int Numero_Valorar=0;
}Primo;

//Funcion Principal
int main(void){
    //llamar Funcion
    cout<<Ingreso_Datos()<<endl;

    return 0;
}

//Funciones secundarias
int Ingreso_Datos(void){
    
    //tmp
    int *tmp;
    tmp = &Primo.Numero_Valorar;


    //ingreso de informacion
    cout<<"ingrese el numero a revisar"<<endl;
    cin>>*tmp;

    //llamar funcion 
    cout<<Comparar_Datos(tmp)<<endl;
    
    return 1;
}

int Comparar_Datos(int* Valor){
    //vairables de comparacion

    int /*Comparador = 0,*/ Comparado=*Valor;

    bool Flag_Primo, *Envio;

    for(int Comparador = 1; Comparador <= Comparado; Comparador++){

        cout<<"el Numero a comparar ["<<Comparado<<"] el que lo compara ["<<Comparador<<"]"<<endl;


        if(Comparado == 1){
            Flag_Primo = false;
            cout<<"es primo ["<<Flag_Primo<<"]"<<endl;
        }else if((Comparado/Comparador==1)&&(Comparado==Comparador)){
            Flag_Primo=true;
            cout<<"Resultado ["<<Comparado/Comparador<<"]"<<endl;
            cout<<"es primo ["<<Flag_Primo<<"]"<<endl;
        }else if((Comparado%Comparador>=0)&&(Comparado!=Comparador)){
            Flag_Primo=false;
            cout<<"es primo ["<<Flag_Primo<<"]"<<endl;
        }
    }

    Envio=&Flag_Primo;
    cout<<inprimir_Datos(Envio,Valor)<<endl;

    return 1.5;
}

int inprimir_Datos(bool* Puerta, int* Valor){
    if(*Puerta == true){
        cout<<"El numero ["<<*Valor<<"] Si es un numero Primo"<<endl;
    }else{
        cout<<"El numero ["<<*Valor<<"] No es un numero Primo"<<endl;
    }

    return 2;
}