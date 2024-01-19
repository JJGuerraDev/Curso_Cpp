#include <iostream>
using namespace std;

//definir Funciones
void Ingreso_Datos();
int Operar(void);
void Imprimir_Datos();

//Definir Estructura
struct Complejos{
    float Real=0, Inmaginaria=0;
}Elemento1,Elemento2,Resultado;

//Funcion Principal
int main(void){

    //llamar Funcion
    Ingreso_Datos();
    
    return 0;
}

int Test(Complejos *a, Complejos *b, Complejos *res){

    float real_a = a->Real;
    float real_b = b->Real;
    float resultado = real_a+real_b;
    res->Real = resultado;

    return 0;

}


int Operar(void){

    float real_a = Elemento1.Real;
    float real_b = Elemento2.Real;
    
    Resultado.Real = real_a + real_b;

    return 0;
}


