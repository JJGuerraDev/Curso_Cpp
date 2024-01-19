#include<iostream>
using namespace std;

//Definir funcion
void Convertir (int&,int&,int&,int&);

//Funcion Principal
int main(void){
    //Definir variables
    int Total_Dias=0,Dias=0,Meses=0,Años=0, Dia_actual=1, Mes_actual=1, Año_Actual=2000;

    //ingreso de Datos
    cout<<"Ingrese la cantidad de disa a combertir"<<endl;
    cin>>Total_Dias;

    //Funcion Secundaria | Convertir
    Convertir(Total_Dias,Dias,Meses,Años);

    //Imprimir Datos
    cout<<"el numero de Dias que se ingreso due ["<<Total_Dias<<"]"<<endl;
    cout<<"La fecha en la que cae es ["<<Dia_actual+Dias<<"/"<<Mes_actual+Meses<<"/"<<Año_Actual+Años<<"]"<<endl;
    


    return 0;
}

void Convertir (int& Total, int& Dias, int& Mes, int& year){
    
    //variable
    int Revicion=0;

    //Operar
    Mes=Total/30;
    year=Mes/12;
    Mes-=year*12;
    Revicion = (year*360)+(Mes*30);
    Dias=Total-Revicion;
    
}