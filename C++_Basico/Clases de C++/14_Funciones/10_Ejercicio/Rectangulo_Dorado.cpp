#include<iostream>
#include<vector>
using namespace std;
 
//Definir fundiones
int Ingreso_Datos();
int Aurea(int);
int Imprimir_Datos(int);

//Estructura
struct Numeros_dorados{
    int Limite = 0;
    int Valor1 = 0, Valor2=0;
}Rectagulo;

//Funcion Principal
int main(void){
    
    //llamar Funciones
    cout<<Ingreso_Datos()<<endl;
    cout<<Imprimir_Datos(Aurea(Rectagulo.Limite))<<endl;
    return 0;
}

//Funciones Secundarias
int Ingreso_Datos(void){
    
    //ingreso de Datos
    cout<<"Ingrese cual Numero Aureo quiere ver"<<endl;
    cin>>Rectagulo.Limite;

    return 1;
}

int Aurea(int Escalon){
    if(Escalon == 1){
        return 1;
    }else if(Escalon%2 != 0){
        Rectagulo.Valor1 += Aurea(Escalon-1);
        return Rectagulo.Valor1;
    }else{
        Rectagulo.Valor2 += Aurea(Escalon-1);;
        return Rectagulo.Valor2;
    }
}

int Imprimir_Datos(int Resultado){
    
    cout<<"el Numero en la pocicion ["<<Rectagulo.Limite<<"] es ["<<Resultado<<"]"<<endl;

    return 2;
}