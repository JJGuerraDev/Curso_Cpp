#include<iostream>
using namespace std;

struct Registro{
    char Nombre[25];
    int Telefon=0;
    char Elemento[45];
    int Tiempo1;
}Registro1;

int main(void){
    cout<<"ingrese porfavor su Nombre"<<endl;
    cin.getline(Registro1.Nombre,25,'\n');
    cout<<"bienvido al registro de pedidos al Administratus :), que desea solicita? (Max: 45 Caracteres)"<<endl;
    cin.getline(Registro1.Elemento,45,'\n');
    cout<<"calculando tiempo de procesamiento de la solicitud..."<<endl;

    cout<<"ingrese porfavor un telefono para contactarlo cuando se tenga la confirmacion o negacion de lo solicitado"<<endl;
    cin>>Registro1.Telefon;

    for(int I=0; I<=Registro1.Telefon; I++){
         Registro1.Tiempo1=100 +rand()% 450;
    }

    cout<<"el tiempo estimado en el que resibira su solicitud"<<endl;
    cout<<"se solicito: "<<Registro1.Elemento<<" por "<<Registro1.Nombre<<endl;
    cout<<"apatir de ahora hasta los ["<<Registro1.Tiempo1<<" Years] quede pendiente a una respuesta"<<endl;
    cout<<"esperamos que nuestro rendimiento como administratun sea de su agrado"<<endl;


}
