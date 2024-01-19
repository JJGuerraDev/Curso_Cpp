#include<iostream>
#include<string.h>
using namespace std;

int main(void){
    
    //definir Variables
    char Palabras1[24],Palabras2[24];
    
    //ingreso de informacion
    cout<<"ingrese dos palabras por favor"<<endl;
    cin.getline(Palabras1,24,'\n');
    cin.getline(Palabras2,24,'\n');

    //Comparacion
    if(strcmp(Palabras1,Palabras2) > 0){
        cout<<" la palabra ["<<Palabras1<<"] va antes alfabeticamente que ["<<Palabras2<<"]"<<endl;
    }else if(strcmp(Palabras1,Palabras2) < 0){
        cout<<" la palabra ["<<Palabras2<<"] va antes alfabeticamente que ["<<Palabras1<<"]"<<endl;
    }else if(strcmp(Palabras1,Palabras2) == 0){
        cout<<" la palabra ["<<Palabras1<<"] es igual a la palabra ["<<Palabras2<<"]"<<endl;
    }

    return 0;
}