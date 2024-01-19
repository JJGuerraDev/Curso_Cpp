#include<iostream>
using namespace std;

//Definir Funcion
void Convertir(int&,int&,int&,int&,int&,int&,int&);

//Funcion Principal
int main(void){
    
    //Variables
    int Valor_Convertir=0,Uno=0,Cinco=0,Dies=0,Veinte=0,Cincuenta=0,Cien=0,Faltante=0;;

    //ingreso de Datos
    cout<<"Ingrese el valor a convertir en billetes [Max 499]"<<endl;
    cin>>Valor_Convertir;

    //Funciones
    Convertir(Valor_Convertir,Uno,Cinco,Dies,Veinte,Cincuenta,Cien);

    //Mostrar
    cout<<"El valor ingresado fue ["<<Valor_Convertir<<"]"<<endl;
    cout<<"Cantidad de Billetes de 1 ["<<Uno<<"]"<<endl;
    cout<<"Cantidad de Billetes de 5 ["<<Cinco<<"]"<<endl;
    cout<<"Cantidad de Billetes de 10 ["<<Dies<<"]"<<endl;
    cout<<"Cantidad de Billetes de 20 ["<<Veinte<<"]"<<endl;
    cout<<"Cantidad de Billetes de 50 ["<<Cincuenta<<"]"<<endl;
    cout<<"Cantidad de Billetes de 100 ["<<Cien<<"]"<<endl;

    return 0;
}

void Convertir(int& Valor,int& Uno,int& Cinco,int& Dies,int& Veinte,int& Cincuenta,int& Cien){
    
    //Billetes
    int Revisar=0;

    Revisar=Valor;

    do{
        if ((Revisar>=1)&&(Revisar<5)){
            Uno = Revisar;
            Revisar -= Uno;
        }else if((Revisar>=5)&&(Revisar<10)){
            Cinco++;
            Revisar -= 5;
        }else if((Revisar>=10)&&(Revisar<20)){
            Dies++;
            Revisar -= 10;
        }else if((Revisar>=20)&&(Revisar<50)){
            Veinte++;
            Revisar -= 20;
        }else if((Revisar>=50)&&(Revisar<100)){
            Cincuenta++;
            Revisar -= 50;
        }else if(Revisar>=100){
            Cien++;
            Revisar-=100;
        }
    }while(Revisar != 0);


}