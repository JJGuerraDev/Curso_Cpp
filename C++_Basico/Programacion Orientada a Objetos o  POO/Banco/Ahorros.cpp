// Contruit Clase

#include "Ahorros.h"

//estructuras
Ahorros::Ahorros(void){
    Saldo = 101000000;
    Engresos = 2123312;
    No = 201544893;
}

Ahorros::Ahorros(double Debe, double Haber, double Codigo){
    Saldo = Debe;
    Engresos = Haber;
    No = Codigo;
}

// Dar Valor
void Ahorros::SetSaldo(double Saldo_Cliente){
    Saldo = Saldo_Cliente;
}
void Ahorros::SetEngresos(double Engresos_Cliente){
    Engresos = Engresos_Cliente;
}
void Ahorros::SetNo(double No_cliente){
    No = No_cliente;
}