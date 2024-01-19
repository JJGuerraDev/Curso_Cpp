// Variables y elementos de Armadura_Espinas

#include"Armadura_Espinas.h"

Armadura_Espinas::Armadura_Espinas(string Nombre_Armadura,int Defensa_Armadura, int Duracion_Armadura,int Espinas_Armadura) : Armadura (string (Nombre_Armadura),int (Defensa_Armadura), int (Duracion_Armadura)){
    Espinas = Espinas_Armadura;
}

void Armadura_Espinas::SetEspina(int New_Espinas){
    Espinas = New_Espinas;
}

void Armadura_Espinas::Mostrar(){
    Mostrar();
    cout<<"y regresa un ["<<Espinas<<"%] del daño"<<endl;
}
