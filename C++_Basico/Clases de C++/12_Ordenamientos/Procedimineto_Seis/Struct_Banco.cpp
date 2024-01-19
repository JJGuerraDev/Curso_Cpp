#include <iostream>
#include<string>
using namespace std;

struct Cliente{
    // string Nombre[45];
    // string Apellido[45];
    char Nombre[45];
    char Apellido[45];
    double DocumentoI=0;
    int Codigo_Cuenta=0;
    char Pais[45];
    char Dirrecion[45];
    char Ciudad[45];
}Cliente_Data;

struct Cueta{
    int N;
    int Producto,Tipo,D_H;
}Cuenta_Datos;

int main(void){
    
    //ingreso de Datos
    cout<<"ingrese porfavor su Nombre"<<endl;
    cin.getline(Cliente_Data.Nombre,45,'\n');

    cout<<"ingrese porfavor su Apellido"<<endl;
    cin.getline(Cliente_Data.Apellido,45,'\n');

    cout<<"ingrese porfavor su Numero de indentificacion"<<endl;
    cin>>Cliente_Data.DocumentoI;

    cout<<"ingrese por favor su Codigo de Cuenta"<<endl;
    cin>>Cliente_Data.Codigo_Cuenta;

    cout<<"ingrese porfavor Dirrecion"<<endl;
    cin.getline(Cliente_Data.Dirrecion,45,'\n');

    cout<<"ingrese por favor la Ciudad en la que recide"<<endl;
    cin.getline(Cliente_Data.Ciudad,45,'\n');

    cout<<"ingrese por favor su pais de origen"<<endl;
    cin.getline(Cliente_Data.Pais,45,'\n');

    //Mostrar informacion
    cout<<"bienvenido(a) al Banco Advent Sr(a). ["<<Cliente_Data.Nombre<<"] ["<<Cliente_Data.Apellido<<"]"<<endl;
    cout<<"con el ducumento ["<<Cliente_Data.DocumentoI<<"] Con la clave ["<<Cliente_Data.Codigo_Cuenta<<"]"<<endl;
    cout<<"Pais de origen ["<<Cliente_Data.Pais<<"], en la ciudad ["<<Cliente_Data.Ciudad<<"]"<<endl;
    cout<<"Con dirrecion ["<<Cliente_Data.Dirrecion<<"]"<<endl;

    //Interacion
    cout<<"Ingrese el Numero de Productos registrados en nuestro banco"<<endl;
    cin>>Cuenta_Datos.N;

    //Definir Matrix(Cuenta)
    double Cuentas[Cuenta_Datos.N][8][2];

    //lenar Cuenta
    for (int F = 0; F < Cuenta_Datos.N; F++){
        for(int C=0; C<8; C++){
            for(int D=0; D<2; D++){
                if (D == 0){
                    Cuentas[F][C][D] = 1000000 + rand()% 1000000000;
                }else if (D == 1){
                    Cuentas[F][C][D] = -1*(1000000 + rand()% 1000000000);
                }
            }
        }
    }
    
    cout<<"¿cual de los productos desea ver?"<<endl;
    cin>>Cuenta_Datos.Producto;

    cout<<"ingre porfavor el tipo de tramite del producto"<<endl;
    cout<<"1: [Prestamos], 2: [Pagos], 3: [Tarjas], 4: [Cheque], 5: [Inverciones], 6 [Retirar/Ingresarr], 7 [Consignar/Recibir], 8; [Seguros]"<<endl;
    cin>>Cuenta_Datos.Tipo;

    cout<<"tipo"<<endl;
    
    return 0;
}