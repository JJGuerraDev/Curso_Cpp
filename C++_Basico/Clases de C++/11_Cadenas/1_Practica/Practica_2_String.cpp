#include <iostream>
#include <string>
//#include <vector>
using namespace std;

int main(void){
    
    string St1 = "Point Zero", St2="Point Zero Variant", StC;

    cout<<"Linea 1: "<<St1<<endl;
    cout<<"Linea 2: "<<St2<<endl;

    StC = St1;
    cout<<"Linea copiada 1: "<<StC<<endl;
    StC = St2;
    cout<<"Linea copiada 2: "<<StC<<endl;
    
    return 0;
}