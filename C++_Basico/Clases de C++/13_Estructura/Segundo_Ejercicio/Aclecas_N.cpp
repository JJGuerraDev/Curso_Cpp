#include<iostream>
using namespace std;

struct Aclecatas{
    char Nombre[45];
    char Sexo[25];
    char Pais[25];
    int Edad;
    int Medallas;
}Data_Acletas[500];

int main(void){
    //tmp
    char tmp[1];
    int Ciclos=0, Max=0, min=9999,No1=0;

    //ingrso de data
    cout<<"¿cuantos acletas comparara? [Max 500]"<<endl;
    cin>>Ciclos;
    cin.getline(tmp,1,'\n');

    for(int Acleta=0; Acleta<Ciclos; Acleta++){
        cout<<"Nombre del Acleta"<<endl;
        cin.getline(Data_Acletas[Acleta].Nombre,45,'\n');
        cout<<"Sexo del Acleta"<<endl;
        cin.getline(Data_Acletas[Acleta].Sexo,25,'\n');
        cout<<"Pais del Acleta"<<endl;
        cin.getline(Data_Acletas[Acleta].Pais,25,'\n');
        cout<<"Edad del Acleta"<<endl;
        cin>>Data_Acletas[Acleta].Edad;
        cin.getline(tmp,1,'\n');
        cout<<"Medallas del Acleta"<<endl;
        cin>>Data_Acletas[Acleta].Medallas;
        cin.getline(tmp,1,'\n');
    }

    for(int Acleta=0; Acleta<Ciclos; Acleta++){
        if(Data_Acletas[Acleta].Medallas>Max){
            Max = Data_Acletas[Acleta].Medallas;
            No1=Acleta;
        }
    }

    //Mostrar Datos
    cout<<"El Acleta con mas medallas es"<<endl;
    cout<<"Medallas ["<<Data_Acletas[No1].Medallas<<"]"<<endl;
    cout<<"Nombre ["<<Data_Acletas[No1].Nombre<<"]"<<endl;
    cout<<"Sexo ["<<Data_Acletas[No1].Sexo<<"]"<<endl;
    cout<<"Pais ["<<Data_Acletas[No1].Pais<<"]"<<endl;
    cout<<"Edad ["<<Data_Acletas[No1].Edad<<"]"<<endl;

    return 0;
}