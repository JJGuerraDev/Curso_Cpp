#include<iostream>
#include<vector>
using namespace std;

int main(void){
    
    //definir variables
    vector<int> Horas;
    int Acumulador,MaxTemp=0,MinTemp=40;
    float Promedio;

    //bucle
    for (int Hora = 0; Hora <= 23; Hora +=4 ){
        
        Horas.push_back(25 +(rand() % 35));

    }
    
    for (int i = 0; i < Horas.size(); i++){
        
        cout<<Horas[i]<<endl;
    }

    //bucle para promediar
    for (int Hora = 0; Hora < Horas.size(); Hora++){
        Acumulador += Horas[Hora];
    }
    Promedio=Acumulador/6;

    //bucle para sacar el la mayor temperatura
    for (int Hora = 0; Hora < Horas.size(); Hora++){
        if (Horas[Hora]>MaxTemp){
            MaxTemp = Horas[Hora];
        }
    }

    for (int Hora = 0; Hora < Horas.size(); Hora++){
        if (Horas[Hora]<MinTemp){
            MinTemp=Horas[Hora];
        }
    }

    //mostrar informacion
    cout<<"la temperatura promedio es "<<Promedio<<endl;
    cout<<"la temperatura maxima fue "<<MaxTemp<<endl;
    cout<<"la temperatura minima fue "<<MinTemp<<endl;
    
    



    return 0;
}