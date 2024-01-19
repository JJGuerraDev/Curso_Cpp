#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
using namespace std;

// Funciones
int Inicio(void);
int Ingreso(void);
// Operaciones
int Operaciones();
int resusltados(float*);
// Guardado
int registrador();
int historial();
int archivar();
int recuperar();

// Estructura
struct Memoria_Falsa{
    float Numero;
    vector<float> Historial;    
} Valor_A, Valor_B, Resultado, Operacion;

int main(void){
    //cout

    // inicio del proceso
    Inicio();
    
    return 0;
}

int Inicio(void){

    //variables
    int Elecion=0;
    
    cout<<"\nBienvenido a Calculator"<<endl;
    cout<<"¿que Quiere Realizar?"<<endl;
    cout<<"Operaciones(1)"<<endl;
    cout<<"Historial(2)"<<endl;
    cout<<"Cerrar (0)"<<endl;
    cin>>Elecion;

    switch (Elecion){
    case 1:
        Ingreso();
        break;
    case 2:
        historial();
        break;    
    }

    return 1;

}

int Ingreso(void){

    //Bandera de salida
    bool Salida=false;
    
    while(Salida == false){
    cout<<"\n Elija entre: "<<endl;
    cout<<"Suma (1)"<<endl;
    cout<<"Resta (2)"<<endl;
    cout<<"Multiplicacion (3)"<<endl;
    cout<<"Division (4)"<<endl;
    cout<<"Potenciacion (5)"<<endl;
    cout<<"Radicacion (6)"<<endl;
    cin>>Operacion.Numero;
    if(Operacion.Numero<=6 && Operacion.Numero>=1){
        Salida=true;
    }
    };

    cout<<"\n¿Cual sera el Valor a Operar?"<<endl;
    cin>>Valor_A.Numero;

    if(Operacion.Numero != 6){
        cout<<"\n¿Cual sera el Valor a usar para Operar?"<<endl;
        cin>>Valor_B.Numero;
    }else{
        Valor_B.Numero = 0 * -1;
    }


    //Convercion para Mandar
    /*float* Operador, *Valor1,* Valor2; 
     Operador = &Operacion.Numero;
     Valor1 = &Valor_A.Numero;
     Valor2 = &Valor_B.Numero;*/

     

    // Llamar Operarciones
    Operaciones();
    

    return 2;
}

int Operaciones(void){
    

    float Resultadotmp, Numer_A_OP, Numer_Oper; 
    int *P_Elecion, Elecion;
    Resultadotmp=Resultado.Numero;
    Elecion=Operacion.Numero;
    P_Elecion = &Elecion;
    Numer_A_OP = Valor_A.Numero;
    Numer_Oper = Valor_B.Numero;

    switch (Elecion)
    {
    case 1:
        Resultadotmp = Numer_A_OP + Numer_Oper ;
        break;
    case 2:
        Resultadotmp =  Numer_A_OP - Numer_Oper;
        break;
    case 3:
        Resultadotmp = Numer_A_OP * Numer_Oper;
        break;
    case 4:
        Resultadotmp = Numer_A_OP / Numer_Oper ;
        break;
    case 5:
        Resultadotmp = pow(Numer_A_OP,Numer_Oper);
        break;
    case 6:
        Resultadotmp = sqrt(Numer_A_OP);
        break;                    
    
    default:
        cout<<"error"<<endl;
        break;
    }

    Resultado.Numero = Resultadotmp;

    resusltados(&Resultadotmp);

    return 3;
}

int registro(){


   //Variables para guardar
   float Grupo_a, Grupo_B, Grupo_Operaciones, Gurpo_Resultado, Excluyente;
   Excluyente = 0 * -1;
   Grupo_a = Valor_A.Numero;
   Grupo_B = Valor_B.Numero;
   Grupo_Operaciones = Operacion.Numero;
   Gurpo_Resultado = Resultado.Numero;

   Valor_A.Historial.push_back(Grupo_a);
   Operacion.Historial.push_back(Grupo_Operaciones);
   Resultado.Historial.push_back(Gurpo_Resultado);
   
   if(Grupo_B != Excluyente){
    Valor_B.Historial.push_back(Grupo_B);
   }else{
    Valor_B.Historial.push_back(10.01);
   }

    archivar();
    Inicio();

    return 4;
}

int resusltados(float* Resultado){

    //Variables Con punteros
    float *Numero1, *Numero2;
    int Proseso;
    Proseso = Operacion.Numero;
    Numero1 = &Valor_A.Numero;
    Numero2 = &Valor_B.Numero;
    
    //mostrar Datos
    cout<<" el resultado de la operacion ";

    switch (Proseso)
    {
    case 1:
         cout<<*Numero1<<" + "<<*Numero2<<" = ";
        break;
    case 2:
        cout<<*Numero1<<" - "<<*Numero2<<" = ";
        break;
    case 3:
        cout<<*Numero1<<" X "<<*Numero2<<" = ";
        break;
    case 4:
        cout<<*Numero1<<" / "<<*Numero2<<" = " ;
        break;
    case 5:
        cout<<*Numero1<<"^"<<*Numero2<<" = ";
        break;
    case 6:
        cout<<"V"<<*Numero1<<" = ";
        break;                    
    
    default:
        cout<<"error"<<endl;
        break;
    }

    cout<<*Resultado<<endl;

    registro();


    return 5;
}

int historial(void){

    
    //variables
    int Limite, Tip_Ope, I=0;
    float Numero1, Numero2, Igual;
    Limite = Resultado.Historial.size();

    /*cout<<Limite<<endl;
    cout<<Resultado.Historial.size()<<endl;*/

    cout<<endl;

    //Mostrar Historial
    while(I <= Limite-1){
        Tip_Ope = Operacion.Historial[I];

        Numero1= Valor_A.Historial[I];
        Numero2= Valor_B.Historial[I];
        Igual = Resultado.Historial[I];


        
        cout<<I+1<<" [ ";
        switch (Tip_Ope){
    case 1:
         cout<<Numero1<<" + "<<Numero2<<" = "<< Igual;
        break;
    case 2:
        cout<<Numero1<<" - "<<Numero2<<" = "<< Igual;
        break;
    case 3:
        cout<<Numero1<<" X "<<Numero2<<" = "<< Igual;
        break;
    case 4:
        cout<<Numero1<<" / "<<Numero2<<" = " << Igual;
        break;
    case 5:
        cout<<Numero1<<"^"<<Numero2<<" = "<< Igual;
        break;
    case 6:
        cout<<"V"<<Numero1<<" = "<< Igual;
        break;                    
    
    default:
        cout<<"error"<<endl;
        break;
    }
    cout<<" ]"<<endl;

    I++;

    }

    Inicio();

    return 6;
}

int archivar(){

    
    string ecuacion, Elemento_A,Elemto_B, Signo, Result, espacios = " ";
    vector<string> tabla;

    for(int i = 0; i < Resultado.Historial.size(); i++){

        Elemento_A = to_string(Valor_A.Historial[i]);
        switch(static_cast<int>(Operacion.Historial[i])){
            case 1:
              Signo = "+";
              break;
            
            case 2:
               Signo = "-";
               break;

            case 3:
               Signo = "X";
               break;

            case 4:
               Signo = "/";
               break;
            
            case 5:
               Signo = "^";
               break;
            
            case 6:
               Signo = "^1/2";
               break;
        }
        
        if(Valor_B.Historial[i] != 10.01){
            Elemto_B = Valor_B.Historial[i];
        }
        Result = to_string(Resultado.Historial[i]);

        ecuacion += Elemento_A;
        ecuacion += espacios;
        ecuacion += Signo;
        ecuacion += espacios;
        if(!Elemto_B.empty()){
            ecuacion += Elemto_B;
            ecuacion += espacios;
        }
        ecuacion += Result;

        tabla.push_back(ecuacion);
    }

    ofstream Guardad_Historial;

    Guardad_Historial.open("Historia..txt", ios::out);
    Guardad_Historial.clear();

    for (int i = 0 ; i < tabla.size(); i++){
        
        Guardad_Historial<<tabla[i]<<endl;

    }

    return 7;

}