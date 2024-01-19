#include<iostream>
#include<vector>
using namespace std;

int main(void){
    
    // definir variables
    int Acumuladototal=0,GrupoA=0,GrupoB=0,GrupoC=0;
    float PorcentageA=0,PorcentageB=0,PorcentageC=0;
    vector<int> EstudiantesA,EstudiantesB,EstudiantesC;
    float Estudiantes[5][3]; //

    // bucle
    for (int fila = 0; fila < 5; fila++){
        cout<<"la nota Notas del estudiante "<<fila+1<<" son:"<<endl;
        for (int Columna = 0; Columna < 3; Columna++){
            Estudiantes[fila][Columna]= (10 + rand()% 100)/10;
            cout<<Estudiantes[fila][Columna]<<", ";
        }
        cout<<endl;
    }

    for(int fila = 0; fila < 5; fila++){
        Acumuladototal=0;
        for(int Columna = 0; Columna < 3; Columna++){
            if(Estudiantes[fila][Columna] >= 5)
            Acumuladototal++;
        }
        if(Acumuladototal == 3){
            GrupoA++;
            EstudiantesA.push_back(fila+1);
        }

        if (Acumuladototal>= 1){
            GrupoB++;
            EstudiantesB.push_back(fila+1);
        }
        
       if(Estudiantes[fila][2]>=5){
        GrupoC++;
        EstudiantesC.push_back(fila+1);
       }

    }
    
    // PorcentageA = GrupoA/5;
    // PorcentageB = GrupoB/5;
    // PorcentageC = GrupoC/5;

    cout<<endl;
    cout<<"el numero de estudiantes que paso todo fue"<<endl;
    cout<<GrupoA<<endl;
    cout<<"los estudiantes fueron"<<endl;
    for (int i = 0; i <= EstudiantesA.size()-1; i++){
        cout<<EstudiantesA[i]<<" ";
    }
    
    // cout<<"que representa el "<<PorcentageA<<endl;
    cout<<endl;
    cout<<"el numero de estudiantes que paso aunque sea un examen fue"<<endl;
    cout<<GrupoB<<endl;
    cout<<"los estudiantes fueron"<<endl;
    for (int i = 0; i <= EstudiantesA.size()-1; i++){
        cout<<EstudiantesB[i]<<" ";
    }

    // cout<<"que representa el "<<PorcentageB<<endl;
    cout<<endl;
    cout<<"el numero de estudiantes que paso el ultimo examen fue"<<endl;
    cout<<GrupoC<<endl;
    cout<<"los estudiantes fueron"<<endl;
    for (int i = 0; i <= EstudiantesA.size()-1; i++){
        cout<<EstudiantesC[i]<<" ";
    }

    // cout<<"que representa el "<<PorcentageC<<endl;

    return 0;
}