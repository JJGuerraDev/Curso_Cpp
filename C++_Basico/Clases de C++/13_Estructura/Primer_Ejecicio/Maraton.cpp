#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

struct Corredor
{
    char Nombre[45];
    int Edad;
    char Sexo[25];
    char clud[45];
} C1;

int main(void)
{

    // Definir variables
    char Categoria[45], tmp[1];

    // ingreso de Datos
    cout << "ingrese su nombre" << endl;
    cin.getline(C1.Nombre, 45, '\n');
    cout << "ingrese su Edad" << endl;
    cin >> C1.Edad;
    cin.getline(tmp, 1, '\n');
    cout << "ingrese su Sexo" << endl;
    cin.getline(C1.Sexo, 25, '\n');
    cout << "ingrese su club" << endl;
    cin.getline(C1.clud, 45, '\n');
    

    if (C1.Edad <= 18)
    {
        strcpy(Categoria, "Juvenil");
    }
    else if (C1.Edad <= 40)
    {
        strcpy(Categoria, "Adulto");
    }
    else if (C1.Edad > 40)
    {
        strcpy(Categoria, "Adulto Mayor");
    }

    // Mostrar Datos
    cout << "\n\n Informacion del Corredor" << endl;
    cout << "Nombre: " << C1.Nombre << endl;
    cout << "Sexo: " << C1.Sexo << endl;
    cout << "Edad: " << C1.Edad << endl;
    cout << "Categoria: " << Categoria << endl;
    cout << "Club: " << C1.clud << endl;

    return 0;
}