#include<iostream>
using namespace std;

struct Trabajadores{
    char Nombre[45];
    char Sexo[25];
    int Edad;
    int salario;
}Data_Trabajadores[500];

int main(void){
    //tmp
    char tmp[1];
    int Ciclos=0,Empleado_Max=0,Empleado_min=0;
    double Max=0, min=9999999999;
    

    //definir bucles
    cout<<"cuantos empleados quieres evaluar [Max: 500]"<<endl;
    cin>>Ciclos;
    cin.getline(tmp,1,'\n');

    //bucle
    for(int E=0; E<Ciclos; E++){
        cout<<"Nombre del Empleado"<<endl;
        cin.getline(Data_Trabajadores[E].Nombre,45,'\n');
        cout<<"Sexo del Empleado"<<endl;
        cin.getline(Data_Trabajadores[E].Sexo,25,'\n');
        cout<<"Edad del Empleado"<<endl;
        cin>>Data_Trabajadores[E].Edad;
        cin.getline(tmp,1,'\n');
        cout<<"Salario del Empleado"<<endl;
        cin>>Data_Trabajadores[E].salario;
        cin.getline(tmp,1,'\n');
    }

    //revisar
    for(int S=0; S<Ciclos; S++){
        if (Data_Trabajadores[S].salario>Max){
            Max = Data_Trabajadores[S].salario;
            Empleado_Max=S;
        }
        if(Data_Trabajadores[S].salario<min){
            min = Data_Trabajadores[S].salario;
            Empleado_min=S;
        }
    }

    //Empleado con el salario Mas Alto
    cout<<"El empleado con el salario mas Alto"<<endl;
    cout<<"Nombre: ["<<Data_Trabajadores[Empleado_Max].Nombre<<"]"<<endl;
    cout<<"Sexo: ["<<Data_Trabajadores[Empleado_Max].Sexo<<"]"<<endl;
    cout<<"Edad: ["<<Data_Trabajadores[Empleado_Max].Edad<<"]"<<endl;
    cout<<"Edad: ["<<Data_Trabajadores[Empleado_Max].salario<<"]"<<endl;

    //Empleado con el salario Mas Bajo
    cout<<"El empleado con el salario mas Bajo"<<endl;
    cout<<"Nombre: ["<<Data_Trabajadores[Empleado_min].Nombre<<"]"<<endl;
    cout<<"Sexo: ["<<Data_Trabajadores[Empleado_min].Sexo<<"]"<<endl;
    cout<<"Edad: ["<<Data_Trabajadores[Empleado_min].Edad<<"]"<<endl;
    cout<<"Salario: ["<<Data_Trabajadores[Empleado_min].salario<<"]"<<endl;


    return 0;
}