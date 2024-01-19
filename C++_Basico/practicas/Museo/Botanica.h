// aqui entra las plantas antiguas

//definiendo Clase
#ifndef __Botanica_h__
#define __Botanica_h__

//llamar Librerias
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Botanica{

    private:

    vector<string> Plantas_Archivo;
    vector<vector<string>> Matriz_Plantas;

    public:

    // contructor
    
        Botanica();

    // Mostrar

        void Mostrar_Plantas();

    // agregar y remover

        void Agregar_Planta();
        void quitar_Planta();



};

#endif