// Armadura

#include"Armadura.h"



Armadura::Armadura(string Nombre_Armadura,int Defensa_Armadura, int Duracion_Armadura){
    Nombre = Nombre_Armadura;
    Defensa = Defensa_Armadura;
    Duracion = Duracion_Armadura;
}

void Armadura::setNombre(string New_Nombre){
   cout<<"Has renombrado la aramdura ["<<Nombre<<"]";
    this->Nombre = New_Nombre;
   cout<<" A ["<<Nombre<<"]"<<endl;
};

void Armadura::setDefensa(int New_Defensa){
   cout<<"has modificado la defensa de la armadura ["<<Nombre<<"]"<<endl;
   cout<<"pasando de tener ["<<Defensa<<"]";
    this->Defensa = New_Defensa;
   cout<<" A ["<<Defensa<<"]"<<endl;
}

void Armadura::setDuracion(int New_Duracion){
   cout<<"has modificado la Duracion de la armadura ["<<Nombre<<"]"<<endl;
   cout<<"pasando de tener ["<<Duracion<<"]";
    this->Duracion = New_Duracion;
   cout<<" A ["<<Duracion<<"]"<<endl;
}

Armadura::~Armadura(){};

void Armadura::Mostrar(){
   cout<<"la aramadura ["<<Nombre<<"]"<<endl;
   cout<<"Con defensa de ["<<Defensa<<"]"<<endl;
   cout<<"su duracion es de ["<<Duracion<<"]"<<endl;
}


bool Armadura::Damage(int Ataque){
    int Real_Damage;
    bool Resultado;

   cout<<"la aramdura es ataca recibiendo un daño de ["<<Ataque<<"]"<<endl;

    Real_Damage = int (Ataque-Defensa);
    
    if ( Duracion > Real_Damage){
        if(0 == Real_Damage){
        Duracion -= Real_Damage;
        Resultado = true;

       cout<<"El daño recibido redujo la aramdura a ["<<Duracion<<"]"<<endl;

        }else{
        Resultado = true;

       cout<<"Todo el Daño fue anulado, La duracion se mantiene en ["<<Duracion<<"]"<<endl;
        }
    }else(Duracion <= Real_Damage);{
       cout<<"La armadura ["<<Nombre<<"] se ropio"<<endl;
       cout<<"se recibe de daño ["<<Real_Damage-Duracion<<"]"<<endl;
        Resultado = false;
    }

    return Resultado;
}

