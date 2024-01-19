#include<iostream>
using namespace std;

//Definir Funciones
int Ingreso_Datos(void);
int Revisar_Estructuras(void);
int Comparacion_Fecha(int&,int&);
int Imprimir_Datos(int&);

//Estructuraint
struct Fechas{
    int Dia=0, Mes=0, Año=0;
}Fecha1,Fecha2;

//funcion main
int main(void){
    
    //variables
    // int *Dia_one, *Dia_two,*Mes_one,*Mes_two, *Año_one, *Año_two;
    // Dia_one = &Fecha1.Dia;
    // Dia_two = &Fecha2.Dia;
    // Mes_one = &Fecha1.Mes;
    // Año_one = &Fecha1.Año;
    // Año_two = &Fecha2.Año;

    // llamar Funciones
    cout<<Ingreso_Datos()<<endl;
    cout<<Revisar_Estructuras()<<endl;


    return 0;
}

//funciones secundarias
int Ingreso_Datos(void){

    //Fecha 1
    cout<<"Ingrese La primera Fecha"<<endl;
    cout<<"Ingrese el año"<<endl;
    cin>>Fecha1.Año;
    cout<<"Ingrese el Mes"<<endl;
    cin>>Fecha1.Mes;
    cout<<"Ingrese el Dia"<<endl;
    cin>>Fecha1.Dia;

    //Fecha 1
    cout<<"Ingrese La Segunda Fecha"<<endl;
    cout<<"Ingrese el año"<<endl;
    cin>>Fecha2.Año;
    cout<<"Ingrese el Mes"<<endl;
    cin>>Fecha2.Mes;
    cout<<"Ingrese el Dia"<<endl;
    cin>>Fecha2.Dia;

    return 0;
}

int Revisar_Estructuras(void){

    //Variables Puerta
    int Puerta=0, Situacion = 0;

    //Revisar
    if(Fecha1.Año != Fecha1.Año){
        Puerta = 1;
    }; 
    if (Fecha1.Mes != Fecha2.Mes){
        Puerta = 2;
    };
    if (Fecha1.Dia != Fecha2.Dia){
        Puerta = 3;
    }
    
    //llamar Funcion Terciaria
    switch (Puerta){
        case 1:
          cout<<Comparacion_Fecha(Fecha1.Año,Fecha2.Año)<<endl;
           break;
        case 2:
          cout<<Comparacion_Fecha(Fecha1.Mes,Fecha2.Mes)<<endl;
           break;
        case 3:
          cout<<Comparacion_Fecha(Fecha1.Dia,Fecha2.Dia)<<endl;
           break;
        default:
           cout<<Imprimir_Datos(Situacion)<<endl;
    }

    return 1;

}

int Comparacion_Fecha(int& Fecha_One,int& Fecha_two){
    
    //Variables
    int Mayor=0;

    //Separar
    if(Fecha_One > Fecha_two){
        Mayor = 1;
    }else{
        Mayor = 2;
    }
    cout<<Imprimir_Datos(Mayor)<<endl;

    return 2;
}

int Imprimir_Datos(int& Puerta){

    switch (Puerta){
        case 0:
           cout<<"Las fechas ingresadas son iguales"<<endl;
           break;
        case 1:
           cout<<"La fecha mayor es ["<<Fecha1.Dia<<"/"<<Fecha1.Mes<<"/"<<Fecha1.Año<<"]"<<endl;
           break;
        case 2:
           cout<<"La fecha mayor es ["<<Fecha2.Dia<<"/"<<Fecha2.Mes<<"/"<<Fecha2.Año<<"]"<<endl;
           break;   
    }

    return 3;

}