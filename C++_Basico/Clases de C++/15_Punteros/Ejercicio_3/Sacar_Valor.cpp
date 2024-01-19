#include<iostream>
#include<vector>
using namespace std;

//Definir funciones
int Ingreso_Datos();
int Revisar_Datos(int*,int*);
int Imprimir_Datos(int*);

//definir Estructura
struct Numeros{
    vector<int> Busqueda;
    int Numero_Buscar=0;
}Numeros;

//Funcion Principal
int main(void){
    
    //llamar funcionn
    cout<<Ingreso_Datos()<<endl;

    return 0;
}

//Funciones Secundarias
int Ingreso_Datos(){
    
    //tmp
    int Esapcio=0, Introducir=0;
    int *Limite, *Busador, *lista;

    cout<<"ingrese porfavor cuantos valores quiere ingresar"<<endl;
    cin>>Esapcio;

    for(int Siclos=0; Siclos<Esapcio; Siclos++){
        cout<<"introdusca el numero para el espacio ["<<Siclos+1<<"]"<<endl;
        cin>>Introducir;
        Numeros.Busqueda.push_back(Introducir);
    }

    cout<<"ingrese el numero que se desea buscar"<<endl;
    cin>>Numeros.Numero_Buscar;

    Limite = &Esapcio;
    Busador = &Numeros.Numero_Buscar;

    cout<<Revisar_Datos(Limite,Busador)<<endl;

    return 1;
}

int Revisar_Datos(int* Limite, int* Buscar){
    //tmp
    int Numero_Hubicacion;

    //buscador
    for(int Espacio=0; Espacio<*Limite; Espacio++){
        if(Numeros.Busqueda[Espacio]=*Buscar){
            Numero_Hubicacion = Espacio;
        }else{
          Numero_Hubicacion=-1;  
        }
    }

    //convertir
    int* Cordenada_Numero = &Numero_Hubicacion;

    cout<<Imprimir_Datos(Cordenada_Numero)<<endl;
    return 2;
}

int Imprimir_Datos(){
    
    
    return 3
}