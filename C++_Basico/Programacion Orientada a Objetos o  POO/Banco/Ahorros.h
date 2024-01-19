//clase Cuenta de Horros
//elementos a usar [Saldo, egresos y No.]

#ifndef __Ahorros_H__
#define __Ahorros_H__

#include <iostream>

class Ahorros{
protected:
    double Saldo, Engresos, No;

public:

    // Contructores
    Ahorros(void);
    Ahorros(double,double,double);

    //asignacion
    double GetSaldo(){return Saldo;}
    double GetEngresos(){return Engresos;}
    double GetNO(){return No;}

    //Configurar
    void SetSaldo(double Saldo_Cliente){
        Saldo = Saldo_Cliente;
    }
    void SetEngresos(double Engresos_Cliente){
        Engresos = Engresos_Cliente;
    }
    void SetNo (double No_Cliente){
        No = No_Cliente;
    }

};

#endif