#include<iostream>
#include<vector>
using namespace std;

//definir Funciones
int Ingreso_Datos();
int Revisar_Vector(int*,int*);
int Inprimir_Datos(int*);

//estructura
struct Numeros{
    vector<int> Valores;
    int Valor_Menor=99999,Limite=0;
}Numero1;

//Funcion Principal
int main(void){
    
    //llamar Funcion
    cout<<Ingreso_Datos()<<endl;

    return 0;
}

//Funciones Secundarias
int Ingreso_Datos(){
    
    //tmp
    int tmp=0;

    //Ingreso de Datos
    cout<<"bienvenido, porfavor diga cuantos numeros quiere ingresar"<<endl;
    cin>>Numero1.Limite;

    for(int N=0; N<Numero1.Limite; N++){
        
        cout<<"ingrese el numero a guardar en el espacion ["<<N+1<<"]"<<endl;
        cin>>tmp;
        Numero1.Valores.push_back(tmp);
    }

    //definir punteros
    int *Limite,*Menor;
    Limite=&Numero1.Limite;
    Menor=&Numero1.Valor_Menor;

    cout<<Revisar_Vector(Limite,Menor)<<endl;

    return 1;
}

int Revisar_Vector(int* Cor_Limite, int* Cor_Menor){

    //Variables
    int Repeticiones = *Cor_Limite;
    int Numero_menor = *Cor_Menor;
    int *Hubicacion_Menor;

    for(int R=0; R<Repeticiones; R++){
        if(Numero1.Valores[R]<Numero_menor){
            Numero_menor = R;
        }
    }

    Hubicacion_Menor = &Numero_menor;

    cout<<Inprimir_Datos(Hubicacion_Menor)<<endl;

    return 2;

}

int Inprimir_Datos(int* Menor){
    
    //imprimir Datos
    cout<<"el Numero mas pequeño introducido fue ["<<Numero1.Valores[*Menor]<<"]"<<endl;

    return 3;
}