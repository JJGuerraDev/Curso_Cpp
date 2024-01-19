#include<iostream>
#include<vector>
using namespace std;

int main(void){
    
    //definir variables
    vector<int> Horas;
    int Acumulador,MaxTemp=0,MinTemp=40;
    float Promedio;

    //bucle
    for (int Hora = 1; Hora <= 24; Hora++){
        if (Hora%4 == 0){
            Horas.push_back(20+(rand()% 40));
        }
        
    }
    

    //bucle para promediar
    for (int Hora = 0; Hora <= 23; Hora++){
        Acumulador += Horas[Hora];
    }
    Promedio=Acumulador/Horas.size();

    //bucle para sacar el la mayor temperatura
    for (int Hora = 0; Hora <= Horas.size(); Hora++){
        if (Horas[Hora]>MaxTemp){
            MaxTemp=Horas[Hora];
        }
    }

    for (int Hora = 0; Hora <= Horas.size(); Hora++){
        if (Horas[Hora]<MinTemp){
            MinTemp=Horas[Hora];
        }
    }



    return 0;
}