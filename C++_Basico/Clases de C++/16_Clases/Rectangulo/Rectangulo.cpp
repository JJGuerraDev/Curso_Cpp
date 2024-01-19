// clase Rectangulo con los elementos Alto y Ancho

#include <iostream>
using namespace std;

class Rectangulo{
private:
    float Alto;
    float Largo;

public:
    Rectangulo(float, float);
    void Perimetro();
    void Area();

};

Rectangulo::Rectangulo(float Largo_Rectangulo,float Alto_Rectangulo){
    Largo = Largo_Rectangulo;
    Alto = Alto_Rectangulo;
}

void Rectangulo::Perimetro(){
    float Perimetro=0;
    Perimetro = 2*Alto;
    Perimetro += 2*Largo;

    cout<<"el Perimetro del Rectangulo es ["<<Perimetro<<"]"<<endl;
}

void Rectangulo::Area(){
    float Area=0;
    Area = Alto * Largo;

    cout<<"El Area del Rectagulo es ["<<Area<<"]"<<endl;
}

int main(){
    Rectangulo R1 = Rectangulo(11,6);

    R1.Area();
    R1.Perimetro();

    return 0;
}