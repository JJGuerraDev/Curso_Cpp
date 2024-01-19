#include<iostream>
using namespace std;

struct Estudiante{
    char Nombre[45];
    int Edad;
    int Promedio;
}Data_Estudiante[3];

int main(void){
    //tmp
    char tmp[1];
    int Primer_Puesto=0,Mejor_Nota;
    
    //ingreso de Datos
    for(int E=0; E<3; E++){
        cout<<"ingrese el nombre del estudiante"<<endl;
        cin.getline(Data_Estudiante[E].Nombre,45,'\n');
        cout<<"ingrese la edad del estudiante"<<endl;
        cin>>Data_Estudiante[E].Edad;
        cin.getline(tmp,1,'\n');
        cout<<"ingrese el Promedio del Estudiante"<<endl;
        cin>>Data_Estudiante[E].Promedio;
        cin.getline(tmp,1,'\n');
    }

    for (int P = 0; P < 3; P++){
        if(Data_Estudiante[P].Promedio > Mejor_Nota){
            Mejor_Nota=Data_Estudiante[P].Promedio;
            Primer_Puesto = P;
        }
    }

    //Resultado
    cout<<"Primer Puesto: "<<endl;
    cout<<"Estuidiante ["<<Data_Estudiante[Primer_Puesto].Nombre<<"]"<<endl;
    cout<<"Edad ["<<Data_Estudiante[Primer_Puesto].Edad<<"]"<<endl;
    cout<<"Promedio ["<<Data_Estudiante[Primer_Puesto].Promedio<<"]"<<endl;
    

    return 0;
}