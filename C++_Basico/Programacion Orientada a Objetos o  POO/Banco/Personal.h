// Clase Personal del Cliente
// elemetos a trabajar [Nombre con apellido, Documento, telefono]

#ifndef __PERSONAL_H__
#define __PERSONAL_H__

#include<iostream>
#include<string>
using namespace std;

class Personal{
protected:
    double Document, Telefono;
    string *Nombre;

public:
    //contrucion
    Personal(void);
    Personal(double,double);
    Personal(string);

    //asignacion
    string *GetNombre(){return Nombre;}
    double GetDocument(){return Document;}
    double GetTelefono(){return Telefono;}
    
    // cofigurar
    void SetNombre(string *Nombre_Cliente){
        Nombre = Nombre_Cliente;
    }
    void SetDocumento(double Documento_Cliente){
        Document = Documento_Cliente;
    }
    void SetTelefono(double Telefono_Cliente){
        Telefono = Telefono_Cliente;
    }

    //mostrar Informacion
    void Imprimir_Cliente();
    void Imprimir_Informacion();

};

#endif

// Personal::Personal(/* args */)
// {
// }

// Personal::~Personal()
// {
// }
