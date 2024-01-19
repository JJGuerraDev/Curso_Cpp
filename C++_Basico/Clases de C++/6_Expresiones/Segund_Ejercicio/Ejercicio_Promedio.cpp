#include<iostream>
using namespace std;

int main(){

    //definir valores
    int Estudiante1,Estudiante2,Estudiante3,Estudiante4;
    float Promedio;

    //ingreso de informacion
    cout<<"ingrese la nota de los 4 estudiantes"<<endl;
    cout<<"ingrese la nota del estudiante 1"<<endl;
    cin>>Estudiante1;
    cout<<"ingrese la nota del estudiante 2"<<endl;
    cin>>Estudiante2;
    cout<<"ingrese la nota del estudiante 3"<<endl;
    cin>>Estudiante3;
    cout<<"ingrese la nota del estudiante 4"<<endl;
    cin>>Estudiante4;

    //Operacion
    Promedio=(Estudiante1+Estudiante2+Estudiante3+Estudiante4)/4;

    //mostrar operacion
    cout<<"\n el promedio de los 4 estudiantes es "<<Promedio<<endl;
    return 0;
}