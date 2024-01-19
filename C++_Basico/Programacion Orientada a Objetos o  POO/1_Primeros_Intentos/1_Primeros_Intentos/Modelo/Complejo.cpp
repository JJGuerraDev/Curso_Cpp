// using namespace std;
// #ifndef __COMPLEJO_H__
// #define __COMPLEJO_H__

// #include<iostream>

// class Complejo{
//     private:
//       double Real;
//       double Imag;
//     public:
      
//      //contruciones
//      complejo(void);
//      complejo(double,double im=0.0);

//      //sethings
//      void SetData(void);
//      void SetReal(double);
//      void SetImag(double);

//      //GetThings
//      double GetReal(void){return Real;}
//      double GetImag(void){return Imag;}
     
//      //Sobrecarga de Operadores Arigmeticos
//      complejo Operator+ (const Complejo&);
//      complejo Operator- (const Complejo&);
//      complejo Operator* (const Complejo&);
//      complejo Operator/ (const Complejo&);
     
//      //Sobrecargar de Operador de asignacion
//      complejo& Operator= (const complejo&);

//      //Sobre carga de Operadores de Comparacion
//      friend int Operator== (const complejo&, const Complejo&);
//      friend int Operator!= (const complejo&, const Complejo&);

//      //Sobrecarga del Operador de insercion en el Flujo de salida
//      friend ostream& Operator<< (ostream&, const ostream&);
// };

// #endif

#include "Complejo.h"
using namespace std;


//contructor por defecto
Complejo::Complejo(void){
    Real = 0.0;
    Imag = 0.0;
}

//constructor General
Complejo::Complejo(double re, double im){
    Real = re;
    Imag = im;
}

//constructor Copia
Complejo::Complejo(const Complejo& c){
    Real = c.Real;
    Imag = c.Imag;
}

// funcion Mienbro SetData()
void Complejo::SetData(void){
    cout << "Introduzca el valor real del complejo: ";
    cin >> Real;
    cout << "Introduzca el valor imaginario del complejo: ";
    cin >> Imag;
}

void Complejo::SetReal(double re){
    Real = re;
}

void Complejo::SetImag(double im){
    Imag = im;
}

//Operador sobrecargado Suma
Complejo Complejo::Operator+ (const Complejo &a){

    Complejo suma;
    suma.Real = Real + a.Real;
    suma.Imag = Imag + a.Imag;
    return suma;

}

//sobrecarga de Operador Resta
Complejo Complejo::Operator- (const Complejo &a){

    Complejo resta;
    resta.Real = Real - a.Real;
    resta.Imag = Imag - a.Imag;
    return resta;

}

//Operador Mienbro * Sobrecargado 
Complejo Complejo::Operator* (const Complejo &a){

    complejo producto;
    producto.real = real*a.real - imag*a.imag;
    producto.imag = real*a.imag + a.real*imag;
    return producto;

}

// Operador Miembro/Sobrecargado
complejo complejo::operator/ (const complejo &a){

    complejo cociente;
    double d = a.real*a.real + a.imag*a.imag;
    cociente.real = (real*a.real + imag*a.imag)/d;
    cociente.imag = (-real*a.imag + imag*a.real)/d;
    return cociente;

}

// operador miembro de asignación sobrecargado
complejo& complejo::operator= (const complejo &a){

    real = a.real;
    imag = a.imag;
    return (*this);

}

// operador friend de test de igualdad sobrecargado
int operator== (const complejo& a, const complejo& b){

    if (a.real==b.real && a.imag==b.imag)
    
     return 1;
    
    else
    
     return 0;
    
}

// operador friend de test de desigualdad sobrecargado
int operator!= (const complejo& a, const complejo& b){

    if (a.real!=b.real || a.imag!=b.imag)
    
     return 1;
    
    else
    
     return 0;

}

// operador friend << sobrecargado
ostream& operator << (ostream& co, const complejo &a){

    co << a.real;
    long fl = co.setf(ios::showpos);
    co << a.imag << "i";
    co.flags(fl);
    return co;

}

//Fichero Main
#include "Compejos.h"

void main(void){

    // se crean dos complejos con el constructor general
    complejo c1(1.0, 1.0);
    complejo c2(2.0, 2.0);

    // se crea un complejo con el constructor por defecto
    complejo c3;

    // se da valor a la parte real e imaginaria de c3
    c3.SetReal(5.0);
    c3.SetImag(2.0);

    // se crea un complejo con el valor por defecto (0.0) del 2o argumento
    complejo c4(4.0);

    // se crea un complejo a partir del resultado de una expresión
    // se utiliza el constructor de copia
    complejo suma = c1 + c2;

    // se crean tres complejos con el constructor por defecto
    complejo resta, producto, cociente;

    // se asignan valores con los operadores sobrecargados
    resta = c1 - c2;
    producto = c1 * c2;
    cociente = c1 / c2;

    // se imprimen los números complejos con el operador << sobrecargado
    cout << c1 << ", " << c2 << ", " << c3 << ", " << c4 << endl;
    cout << "Primer complejo: " << c1 << endl;
    cout << "Segundo complejo: " << c2 << endl;
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Producto: " << producto << endl;
    cout << "Cociente: " << cociente << endl;

    // se comparan complejos con los operadores == y != sobrecargados
    if (c1==c2){
     cout << "Los complejos son iguales." << endl;
    }else{
     cout << "Los complejos no son iguales." << endl;
    }

    if (c1!=c2){
     cout << "Los complejos son diferentes." << endl;
    }else{
     cout << "Los complejos no son diferentes." << endl;
     }
     cout << "Ya he terminado." << endl; 

}