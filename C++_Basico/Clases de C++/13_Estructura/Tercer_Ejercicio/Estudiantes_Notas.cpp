#include<iostream>
using namespace std;

struct Promedio{
    float Nota1,Nota2,Nota3,Promedio;
};

struct Estudiante{
    char Nombre[45];
    char sexo[25];
    int Edad;
    struct Promedio prom;
}Alumno[500];

int main(void){
    //tmp
    char tmp[1];
    int ciclos=0,Max=0,No1=0;

    //ingreso de Datos
    cout<<"¿cuantos estudiantes revisaras? [Max 500]"<<endl;
    cin>>ciclos;
    cin.getline(tmp,1,'\n');

    for(int Est=0; Est<ciclos; Est++){
        cout<<"Nombre del Estudiante"<<endl;
        cin.getline(Alumno[Est].Nombre,45,'\n');
        cout<<"Sexo del Estudiante"<<endl;
        cin.getline(Alumno[Est].sexo,25,'\n');
        cout<<"Edad del Estudiante"<<endl;
        cin>>Alumno[Est].Edad;
        cin.getline(tmp,1,'\n');
        cout<<"Nota numero 1 del Estudiante"<<endl;
        cin>>Alumno[Est].prom.Nota1;
        cin.getline(tmp,1,'\n');
        cout<<"Nota numero 2 del Estudiante"<<endl;
        cin>>Alumno[Est].prom.Nota2;
        cin.getline(tmp,1,'\n');
        cout<<"Nota numero 3 del Estudiante"<<endl;
        cin>>Alumno[Est].prom.Nota3;
        cin.getline(tmp,1,'\n');
    }

    //definir Promedio
    for(int Est=0; Est<ciclos; Est++){
        Alumno[Est].prom.Promedio = (Alumno[Est].prom.Nota1 + Alumno[Est].prom.Nota2 + Alumno[Est].prom.Nota3)/3;
        if (Alumno[Est].prom.Promedio>Max){
            Max = Alumno[Est].prom.Promedio;
            No1 = Est;
        }
    }

    //imprimir data

    cout<<" El estudiante ["<<No1+1<<"] "<<endl;
    cout<<"Nombre ["<<Alumno[No1].Nombre<<"]"<<endl;
    cout<<"Edad ["<<Alumno[No1].Edad<<"]"<<endl;
    cout<<"Sexo ["<<Alumno[No1].sexo<<"]"<<endl;
    cout<<"Nota No1 ["<<Alumno[No1].prom.Nota1<<"]"<<endl;
    cout<<"Nota No2 ["<<Alumno[No1].prom.Nota2<<"]"<<endl;
    cout<<"Nota No3 ["<<Alumno[No1].prom.Nota3<<"]"<<endl;
    cout<<"Promedio ["<<Alumno[No1].prom.Promedio<<"]"<<endl;

    // for(int Est=0; Est<ciclos; Est++){
    //     cout<<" El estudiante ["<<Est+1<<"] "<<endl;
    //     cout<<"Nombre ["<<Alumno[Est].Nombre<<"]"<<endl;
    //     cout<<"Edad ["<<Alumno[Est].Edad<<"]"<<endl;
    //     cout<<"Sexo ["<<Alumno[Est].sexo<<"]"<<endl;
    //     cout<<"Nota No1 ["<<Alumno[Est].prom.Nota1<<"]"<<endl;
    //     cout<<"Nota No2 ["<<Alumno[Est].prom.Nota2<<"]"<<endl;
    //     cout<<"Nota No3 ["<<Alumno[Est].prom.Nota3<<"]"<<endl;
    //     cout<<"Promedio ["<<Alumno[Est].prom.Promedio<<"]"<<endl;
    // }

    return 0;
}