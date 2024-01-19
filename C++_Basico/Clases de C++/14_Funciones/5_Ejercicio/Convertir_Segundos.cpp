#include<iostream>
using namespace std;

//Definir Funcion
void Convertidor(int&,int&,int&,int&);

//Funcion Principal
int main(void){
    
    //Variables
    int Total_Segundos=0,Horas=0,Minutos=0,Segundos=0;

    //ingreso de datos
    cout<<"Ingrese los Segundos que quiere convertir"<<endl;
    cin>>Total_Segundos;

    //Funcion
    Convertidor(Total_Segundos,Horas,Minutos,Segundos);

    //Imprimir datos
    cout<<"el timepo en segundos ingresado fue ["<<Total_Segundos<<"]"<<endl;
    cout<<"las Horas fueron ["<<Horas<<"]"<<endl;
    cout<<"los Minutos fueron ["<<Minutos<<"]"<<endl;
    cout<<"los Segundos relaes fueron ["<<Segundos<<"]"<<endl;

    return 0;
}

void Convertidor(int& Convertir,int& Horas,int& Minutos,int& Segundos){
    
    //Definir Variables
    int Resta=0;

    //Convertir
    Minutos=Convertir/60;
    Horas=Minutos/60;
    Minutos = Minutos % 60;
    Resta = (Horas*3600)+(Minutos*60);
    Segundos = Convertir-Resta;



}