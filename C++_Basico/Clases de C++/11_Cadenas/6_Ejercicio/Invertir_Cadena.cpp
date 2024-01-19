#include<iostream>
#include<string>
using namespace std;

// char *strrev(char *str)
// {
//       char *p1, *p2;

//       if (! str || ! *str)
//             return str;
//       for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
//       {
//             *p1 ^= *p2;
//             *p2 ^= *p1;
//             *p1 ^= *p2;
//       }
//       return str;
// }

int main(void){
    
    //Definir cadena
    char Palabra[]="Dracula";

    //modificacion
    strrev(Palabra);

    //imprimir
    cout<<Palabra<<endl;

    return 0;
}