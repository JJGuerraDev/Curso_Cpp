#include<iostream>
#include<string.h>
using namespace std;

int main(void){
    
    //definir variable
    char palabra1[]="Zero Point";
    char palabra1_2[]="Zero Point";
    char palabra2[]="Zero Point Variant";

    //comparar
    // Strcmp(Revisa la similitudes)
    if(strcmp(palabra1,palabra2)==0){
        cout<<"las dos fraces son la misma"<<endl;
        cout<<palabra1<<endl;
        cout<<palabra1_2<<endl;
    }else{
        cout<<"las dos fraces no son la misma"<<endl;
        cout<<palabra1<<endl;
        cout<<palabra2<<endl;
    }

    return 0;
}