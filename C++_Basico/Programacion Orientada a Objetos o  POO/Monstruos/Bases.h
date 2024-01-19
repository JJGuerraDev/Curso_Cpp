// Bases para crear monstuos | Bases.h
// Basadose en D&D

#ifndef __Bases_Monstruo__
#define __Bases_Monstruo__

class Bases{
private:
    int Nivel;
    int Puntos, Fue, Des, Con, Int, Sab, Car; 

public:
    //definiendo constructores
    Bases(void);
    Bases(int, int = 00);
    Bases(const Bases&);

    //configurar interaciones
    void Config_Data(void);
    void Config_Nivel(int);
    void Config_Puntos(int);

    //acceso a Variables Privadas
    int GetNivel(void){return Nivel;}
    int GetPuntos(void){return Puntos;}
    int GetFue(void){return Fue;}
    int GetDes(void){return Des;}
    int GetCon(void){return Con;}
    int GetInt(void){return Int;}
    int GetSab(void){return Sab;}
    int GetCar(void){return Car;}
    
    //Operadores de Medicion
    Bases Fuerza_Abso(const Bases&);
    Bases Destresa_Abso(const Bases&);
    Bases Constitucion_Abso(const Bases&);
    Bases Inteligencia_Abso(const Bases&);
    Bases Sabiduria_Abso(const Bases&);
    Bases Carisma_Abso(const Bases&);
    Bases Puntos_Medida(const Bases&);
    Bases Nivel_Medida(const Bases&);

    //asigacion
    Bases& Asignar (const Bases&);
    //Comparadores
    friend int Comparador_Igualda (const Bases&,const Bases&);
    friend int Comparador_desigualda (const Bases&,const Bases&);

    //Salida
    
};

#endif

// Bases::Bases(/* args */)
// {
// }

// Bases::~Bases()
// {
// }

