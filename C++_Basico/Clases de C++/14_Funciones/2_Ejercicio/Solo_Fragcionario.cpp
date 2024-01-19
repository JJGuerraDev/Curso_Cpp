#include<iostream>
using namespace std;

//definir Variables
void Bienvenida();
void Solo_Fraccion(float Frag);

//Definir Variable generales
float Numero_Combertir=0, Combertido=0;

//Principal Funcion
int main(void){
    Bienvenida();
    Solo_Fraccion(Numero_Combertir);
    return 0;
}

//Funciones Secundarias
void Bienvenida(){
    cout<<"ingrese el valor fracionario a retirar el lado entero"<<endl;
    cin>>Numero_Combertir;
}

void Solo_Fraccion(float Frag){
    //Variables locales
    int entero=0;

    //definir
    entero = Numero_Combertir;
    Numero_Combertir -= entero;

    //imprimir
    cout<<"el valor Fraccionario ["<<Numero_Combertir<<"]"<<endl;
}