#include<iostream>
using namespace std;

int main(void){
    
    //definir variables
    int NumeroUsuario = 0, intentos = 0, MagicNumber = 0;
    bool Finish = false;

    //Numero Random
    for (int i = 0; i <= 2; i++){
        MagicNumber = 1 +rand()%(100);
    }
    // cout<<"el Numero magico es "<<MagicNumber<<endl;

    //interacion con el usuario
    cout<<"adibine el numero magico"<<endl;
     
     //bucle
    do{
        
        // ingreso del Numero del usuario
        cout<<"ingrese un numero entre 1 y 100"<<endl;
        cin>>NumeroUsuario;

        if (NumeroUsuario > MagicNumber){
            cout<<"el Numero Magico es mas pequeño"<<endl;
        }else if(NumeroUsuario<MagicNumber){
            cout<<"el Numero Magico es mas Grande"<<endl;
        }else if(NumeroUsuario == MagicNumber){
            cout<<"felicidades, el numero magico era ["<<MagicNumber<<"]"<<endl;
            Finish = true;
        }
        
        
        intentos++;
    
    } while (Finish == false);

    cout<<"intentos realizados ["<<intentos<<"]"<<endl;
     

    return 0;
}