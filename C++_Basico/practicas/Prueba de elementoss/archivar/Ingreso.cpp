// practicas de ingreso y guardado de datos

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int registrar();
int leer();

int main(void){

    

    //registrar();
    leer();

    return 0;
}

int registrar(){

    ofstream Archivo;

    string Zukuna = "Zero point varian";
    string Lost = "Zero point Original";
    string zawada = "Decimo vongola"; 

    vector<string> info = {zawada, Lost, Zukuna};

    Archivo.open("Prueba.txt", ios::out | ios::trunc);
    Archivo.clear();

    if(Archivo.fail()){
        cout<<"Error"<<endl;
    }

    for(int i = 0; i<info.size(); i++){
        Archivo<<info[i]<<endl;
    }

    Archivo.close();

    //

    return 1;
}

int leer(){
    ifstream archivo;
    string texto;

    archivo.open("Prueba.txt", ios::in);

    if(archivo.fail()){
        return 2;
    }

    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;  
    }

    return 1;
}