// fichero persona.h
// declaracion de la clase persona

#ifndef PERSONA_H
#define PERSONA_H

#include<string>
#include "datosContacto.h"

class Persona 
{
  protected:
    std::string nombre;
    int edad;
    double estatura;
    DatosContacto infoContacto;
          
  public:
    // constructores 
    // Persona(std::string ="N.N", int = 18, double = 1.75, DatosContacto = XXXX);    
    Persona();  
    Persona(std::string, int, double, DatosContacto);
    
    // variado
    std::string desplegar();
    
    // destructores
    ~Persona();

};

#endif
