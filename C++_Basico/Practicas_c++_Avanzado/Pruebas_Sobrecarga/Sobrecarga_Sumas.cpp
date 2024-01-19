#include<iostream>
using namespace std;

//Funciones 
int Suma(int,int);
float Suma(float,float);
double Suma(double,double);

//funcion Principal
int main(void){
    int Valor1=25,Valor2=25;
    float Valor3=33.33,Valor4=77.77;
    double Valor5=110011,Valor6=224422;

    cout<<Suma(Valor1,Valor2)<<endl;
    cout<<Suma(Valor3,Valor4)<<endl;
    cout<<Suma(Valor5,Valor6)<<endl;
    
    return 0;
}

//Funciones Secundarias
int Suma(int Valor_A,int Valor_B){
    int Resultado=0;
    Resultado=Valor_A+Valor_B;
    return Resultado;
}

float Suma(float Valor_A,float VAlor_B){}

double Suma(double,double){}