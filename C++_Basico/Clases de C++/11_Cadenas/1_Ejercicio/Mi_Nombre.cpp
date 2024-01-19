#include<iostream>
#include<string.h>
using namespace std;

int main(void){
    
    //definir Variables / Cadenas
    char MiNombre[] = "Jose Javier";
    char MiNombre2[] = {'M','e','n','o','s',' ','C','e','r','o',' ','-','0'};
    char TuNombre[10];

    //mostrar Informacion
    cout<<" el Nombre del creador es "<<MiNombre<<endl;
    cout<<" el Nombre del creador es "<<MiNombre2<<endl;

    cout<<"ingrese como se llama por favor"<<endl;
    cin.getline(TuNombre,10,'\n');

    cout<<"Bien venido "<<TuNombre<<endl;


    return 0;
}