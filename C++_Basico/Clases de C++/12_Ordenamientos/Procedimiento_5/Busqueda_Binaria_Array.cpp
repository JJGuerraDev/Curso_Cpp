#include<iostream>
using namespace std;

int main(void){
    
    //definir variables
    int Numeros[]={1,2,3,4,5,6,7,8,9,10};
    int Informacion=0,Superior=0,Inferior=0,Dato=0,Mitad=0;
    bool Flag = false;
    char Fallo[]= "No se encontro el Numero", Acierto[]="Si se encuetra el Numero";
    Dato=5;

    //Algoritmo de busqueda
    Inferior=0;
    Superior=10;

    while(Inferior <= Superior){
        Mitad = (Inferior + Superior)/2;
        if(Numeros[Mitad]==Dato){
            Flag=true;
        }else if(Numeros[Mitad]>Dato){
            Superior = Mitad;
            Mitad = (Inferior + Superior)/2;
        }else if(Numeros[Mitad]<Dato){
            Inferior=Mitad;
            Mitad = (Inferior + Superior)/2;
        }
    }

    //mostrar informacion
    if(Flag == true){
        cout<<Acierto<<" ["<<Dato<<"] "<<endl;
    }else if(Flag == false){
        cout<<Fallo<<" ["<<Dato<<"] "<<endl;
    }
    

    return 0;
}