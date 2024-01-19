#include<iostream>
using namespace std;

//Definir funciones
void Introduccion();
void Imprimir(int Maximo);
void Maximo(int Elemento1,int Elemento2,int Elemento3);
void Empate(int Comparar);

//Definir Variables Generales
int Numero1, Numero2, Numero3,Eleccion=0,Igual=0,Mayor=0;

//Funcion Principal
int main(void){
    Introduccion();
    Maximo(Numero1,Numero2,Numero3);
    if(Eleccion >= 3){
        Imprimir(Eleccion);
    }else if(Eleccion<=2){
        Empate(Eleccion);
        Imprimir(Igual);
    }
    return 0;
}

//Funciones Secundaria
void Introduccion(){
    cout<<"bienvenido, introdusca por favor tres numeros"<<endl;
    cout<<"Primer Numero"<<endl;
    cin>>Numero1;
    cout<<"Segundo Numero"<<endl;
    cin>>Numero2;
    cout<<"Tercer Numero"<<endl;
    cin>>Numero3;
}

void Maximo(int Elemento1,int Elemento2,int Elemento3){
    if((Elemento1==Numero2) && (Elemento2==Numero3)){
        Eleccion=1;
    }else if((Elemento1==Elemento2) || (Elemento2==Elemento3) || (Elemento1==Elemento3)){
        Eleccion=2;
    }else if((Elemento1 > Elemento2) && (Elemento1 > Elemento3)){
        Eleccion=3;
    }else if((Elemento1 < Elemento2) && (Elemento2 > Elemento3)){
        Eleccion=4;
    }else if((Elemento2 < Elemento3) && (Elemento1 < Elemento3)){
        Eleccion=5;
    }
}

void Empate(int Comparar){
    if(Comparar==1){
        Igual = -1;
    }else if(Comparar == 2){
        if(Numero1==Numero2){
            Igual=-2;
        }else if(Numero2==Numero3){
            Igual = -3;
        }else if(Numero1==Numero3){
            Igual = -4;
        }
    }
}

void Imprimir(int Maximo){
    switch(Maximo){
    case 3:
      cout<<"el Numero ["<<Numero1<<"] es mayor que ["<<Numero2<<"] y ["<<Numero3<<"]"<<endl;
      break;
    case 4:
      cout<<"el Numero ["<<Numero2<<"] es mayor que ["<<Numero1<<"] y ["<<Numero3<<"]"<<endl;
      break;
    case 5:
      cout<<"el Numero ["<<Numero3<<"] es mayor que ["<<Numero1<<"] y ["<<Numero2<<"]"<<endl;
      break;

    case -1:
      cout<<"los Numeros ["<<Numero1<<"] ["<<Numero2<<"] ["<<Numero3<<"] son iagules"<<endl;
      break;

    case -2:
      cout<<"los Numeros ["<<Numero1<<"] ["<<Numero2<<"] son iagules"<<endl;
      break;

    case -3:
      cout<<"los Numeros ["<<Numero2<<"] ["<<Numero3<<"] son iagules"<<endl;
      break;
    
    case -4:
      cout<<"los Numeros ["<<Numero1<<"] ["<<Numero3<<"] son iagules"<<endl;
      break;

    }
}