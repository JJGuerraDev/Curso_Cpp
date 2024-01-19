#include<iostream>
using namespace std;

//Declarar Funcion
void Intercambion(int&,int&);


//Funcion Principal
int main(void){
   
   //Definir variables
   int Numero1=101,Numero2=343;

   //Imprimir datos 1
   cout<<"el primer Numero es ["<<Numero1<<"]"<<endl;
   cout<<"el El segundo Numero es ["<<Numero2<<"]"<<endl;

   //Cambio
   Intercambion( Numero1, Numero2);

   //Imprimir datos 2
   cout<<"el primer Numero es ["<<Numero1<<"]"<<endl;
   cout<<"el El segundo Numero es ["<<Numero2<<"]"<<endl;

    return 0;
}

void Intercambion(int& Numero1,int& Numero2){
    
    //tmp
    int tmp=0;

    //Cambio
    tmp=Numero1;
    Numero1 = Numero2;
    Numero2 = tmp;

}