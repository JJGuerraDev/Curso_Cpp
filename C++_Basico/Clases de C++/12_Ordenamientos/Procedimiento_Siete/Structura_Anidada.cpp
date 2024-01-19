#include<iostream>
#include<stdio.h>
using namespace std;

struct Dirreccion{
    char Direccion[45];
    char Ciudad[45];
    char pais[45];
}Dirrecion_Data;

struct Empleado{
    char Nombre[45];
    struct Dirreccion Dir_Empleado;
    double Salario=0;
}Data_Empleados[2];

int main(void){
    
    //bucle de registro
    for(int E=0; E<2; E++){
        fflush(Data_Empleados[E].Nombre);
        
        cout<<"digite su Nombre"<<endl;
        cin.getline(Data_Empleados[E].Nombre,20,'\n');

        cout<<"digite su Dirreccion"<<endl;
        cin.getline (Data_Empleados[E].Dir_Empleado.Direccion,45,'\n');

        cout<<"digite su Ciudad"<<endl;
        cin.getline (Data_Empleados[E].Dir_Empleado.Ciudad,45,'\n');

        cout<<"digite su Pais"<<endl;
        cin.getline (Data_Empleados[E].Dir_Empleado.pais,45,'\n');

        cout<<"digite su Salario"<<endl;
        cin>>Data_Empleados[E].Salario;

        cout<<endl;
    }

    for(int E=0; E<2; E++){
        cout<<"Nombre: "<<Data_Empleados[E].Nombre<<endl;
        cout<<"Dirrecion: "<<Data_Empleados[E].Dir_Empleado.Direccion<<endl;
        cout<<"Ciudad: "<<Data_Empleados[E].Dir_Empleado.Ciudad<<endl;
        cout<<"Pais: "<<Data_Empleados[E].Dir_Empleado.pais<<endl;
        cout<<"Salario: "<<Data_Empleados[E].Salario<<endl;
    }

    return 0;
}
