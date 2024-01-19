#include<iostream>
using namespace std;

struct Teimpos{
    int Horas;
    int Minutos;
    int segundos;
}Etapas[120];

int main(void){
    //tmp
    char tmp[1];
    int Ciclos = 0, Total_Segundos=0,Total_Minutos=0,Total_Horas=0;

    //ingreso de Datos
    cout<<"¿cuantas etapas completo el ciclista? [Max 120]"<<endl;
    cin >> Ciclos;

    for(int Etp=0; Etp<Ciclos; Etp++){
        cout<<"Etapa ["<<Etp+1<<"]"<<endl;
        cout<<"¿Cuantas Horas demoro?"<<endl;
        cin>>Etapas[Etp].Horas;
        cout<<"¿Cuantos Minuto demoro?"<<endl;
        cin>>Etapas[Etp].Minutos;
        cout<<"¿Cuantos Segundos demoro?"<<endl;
        cin>>Etapas[Etp].segundos;
    }

    //Operar | Segundos 60 Seg = 1 Min
    for(int Etp=0; Etp<Ciclos; Etp++){
        Total_Segundos += Etapas[Etp].segundos;
    }

    Total_Minutos += Total_Segundos/60;

    //Operar | Minutos 60 Min = 1 Hora
    for(int Etp=0; Etp<Ciclos; Etp++){
        Total_Minutos += Etapas[Etp].Minutos;
    }

    Total_Horas += Total_Minutos/60;

    //Operar | Horas
    for(int Etp=0; Etp<Ciclos; Etp++){
        Total_Horas += Etapas[Etp].Horas;
    }

    //mostrar datos
    cout<<"El timepo total fue"<<endl;
    cout<<"Horas: ["<<Total_Horas<<"]"<<endl;
    cout<<"Minutos: ["<<Total_Minutos<<"]"<<endl;
    cout<<"Segundos: ["<<Total_Segundos<<"]"<<endl;


    return 0;
}