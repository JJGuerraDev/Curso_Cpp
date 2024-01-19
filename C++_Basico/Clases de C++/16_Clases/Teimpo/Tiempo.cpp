// clase de tiempo, ya sea apartir de cada momento o apartir de segundos

#include<iostream>
using namespace std;

class Tiempo{
private:
    int Hora, Minutos, Segundos;

public:
    Tiempo(int,int,int);
    Tiempo(long);

    void Mostrar();
};

Tiempo::Tiempo(int Hora_Tiempo,int Minutos_Tiempo, int Segundos_Tiempo){
    Hora = Hora_Tiempo;
    Minutos = Minutos_Tiempo;
    Segundos = Segundos_Tiempo;
}

Tiempo::Tiempo(long Tiempo_Segundos){
    Hora = int (Tiempo_Segundos/3600);
    Minutos = int (Tiempo_Segundos/60) - (Hora*60);
    Segundos = int (Tiempo_Segundos) - ((Hora*3600)+(Minutos*60));
}

void Tiempo::Mostrar(){
    cout<<"La Hora es ["<<Hora<<":"<<Minutos<<":"<<Segundos<<"]";
}

int main(void){
    Tiempo T1 = Tiempo (87546);
    Tiempo T2 = Tiempo (21,30,50);

    T1.Mostrar();
    T2.Mostrar();
    
    return 0;
}