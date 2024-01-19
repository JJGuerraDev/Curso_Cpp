#include<iostream>
using namespace std;

int main(void){
    
    //definir Variables
    int Mes;

    //ingreso de infromacion
    cout<<"ingrese el numero de Mes que quiere ver"<<endl;
    cin>>Mes;

    //condicional
    switch (Mes)
    {
    case 1:
        cout<<"el mes elegido fue Enero"<<endl;
        break;
    case 2:
        cout<<"el mes elegido fue Febrero"<<endl;
        break;
    case 3:
        cout<<"el mes elegido fue Marzo"<<endl;
        break;
    case 4:
        cout<<"el mes elegido fue Abril"<<endl;
        break;
    case 5:
        cout<<"el mes elegido fue Mayo"<<endl;
        break;
    case 6:
        cout<<"el mes elegido fue Junio"<<endl;
        break;
    case 7:
        cout<<"el mes elegido fue Julio"<<endl;
        break;
    case 8:
        cout<<"el mes elegido fue agosto"<<endl;
        break;
    case 9:
        cout<<"el mes elegido fue septiembre"<<endl;
        break;
    case 10:
        cout<<"el mes elegido fue Octubre"<<endl;
        break;
    case 11:
        cout<<"el mes elegido fue Noviembre"<<endl;
        break;
    case 12:
        cout<<"el mes elegido fue Diciembre"<<endl;
        break;                                            
    
    default:
        
        cout<<"se ingreso un numero que no coresponde a un mes"<<endl;

        break;
    }

    return 0;
}