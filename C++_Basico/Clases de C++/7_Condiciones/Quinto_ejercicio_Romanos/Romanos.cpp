#include<iostream>
using namespace std;

int main(void){

    //definir variables
    int Numero_Original, Unidades, Decenas, Centenas, Millares;

    //ingreso de informacion
    cout<<"ingrese porfavor el Numero a comvertir"<<endl;
    cin>>Numero_Original;

    //Operaciones
    //sacar unidades
    Unidades = Numero_Original%10;
    Numero_Original /= 10;
    //sacar Decenas
    Decenas = Numero_Original%10;
    Numero_Original /= 10;
    //sacar Centenas
    Centenas = Numero_Original%10;
    Numero_Original /= 10;
    //sacar Millares
    Millares = Numero_Original%10;
    Numero_Original /= 10;

    // Condicionales

    // vaolores de 1000 == M
    switch (Millares){

    case 1:
        cout<<"M";
        break;
    case 2:
        cout<<"MM";
        break;
    case 3:
        cout<<"MMM";
        break;    
    }

    //Valores 100
    switch (Centenas){
    case 1:
        cout<<"C";
        break;
    case 2:
        cout<<"CC";
        break;
    case 3:
        cout<<"CCC";
        break;
    case 4:
        cout<<"CD";
        break;
    case 5:
        cout<<"D";
        break;
    case 6:
        cout<<"DC";
        break;
    case 7:
        cout<<"DCC";
        break;
    case 8:
        cout<<"DCCC";
        break;
    case 9:
        cout<<"CM";
        break;                                 
    }

    // valores de 10
    switch (Decenas){
    case 1:
        cout<<"X";
        break;
    case 2:
        cout<<"XX";
        break;
    case 3:
        cout<<"XXX";
        break;
    case 4:
        cout<<"XL";
        break;
    case 5:
        cout<<"L";
        break;
    case 6:
        cout<<"LX";
        break;
    case 7:
        cout<<"LXX";
        break;
    case 8:
        cout<<"LXX";
        break;
    case 9:
        cout<<"XC";
        break;                                 
    }

    // unidades
    switch (Unidades){
    case 1:
        cout<<"I";
        break;
    case 2:
        cout<<"II";
        break;
    case 3:
        cout<<"III";
        break;
    case 4:
        cout<<"IV";
        break;
    case 5:
        cout<<"V";
        break;
    case 6:
        cout<<"VI";
        break;
    case 7:
        cout<<"VII";
        break;
    case 8:
        cout<<"VIII";
        break;
    case 9:
        cout<<"IX";
        break;                                 
    }

    return 0;
}