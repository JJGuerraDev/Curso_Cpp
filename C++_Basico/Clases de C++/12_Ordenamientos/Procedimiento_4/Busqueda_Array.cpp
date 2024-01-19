#include <iostream>
using namespace std;

int main(void){
    
    //defirntir variables
    int Numeros[]={10,2,5,3,1,9,7,6,4,8};
    int Dato,I=0;
    bool Flag = false;
    char Fallo[]= "No se encontro el Numero", Acierto[]="Si se encuetra el Numero";
    Dato=9;

    //busqueda
    while((Flag == false) && (I<10)){
        if(Numeros[I]==Dato){
            Flag = true;
        }
        I++;
    }

    if(Flag == true){
        cout<<Acierto<<" ["<<Dato<<"] "<<endl;
    }else if(Flag == false){
        cout<<Fallo<<" ["<<Dato<<"] "<<endl;
    }


    return 0;
}