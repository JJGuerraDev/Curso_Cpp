// construir con Clase

#include "Personal.h"

//estructuras
// Personal::Personal(void){
//     *Nombre = "Julian Garcia";
//     Telefono = 2324487005;
//     Document = 100554478231; 
// }

Personal::Personal(double Documen, double Tell){
    Document = Documen;
    Telefono = Tell;
}

Personal::Personal(string Nombre_apellido){
    *Nombre = Nombre_apellido;
}


// Da valor
void Personal::SetNombre(string *Nombre_Cliente){
    Nombre = Nombre_Cliente; 
}
void Personal::SetDocumento(double Document_Cliente){
    Document = Document_Cliente;
}
void Personal::SetTelefono(double Telefono_Cliente){
    Telefono = Telefono_Cliente;
}

void Personal::Imprimir_Cliente(){
    cout<<"el dueño de la cuenta es ["<<Nombre<<"]"<<endl;
}
void Personal::Imprimir_Informacion(){
    cout<<"indetificado con el Documento ["<<Document<<"]"<<endl;
    cout<<"Con Numero de Telefono ["<<Telefono<<"]"<<endl;
}