// fichero trabajador.h
// declaracion de la clase Trabajador

#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include<string>
#include "persona.h"
#include "datosContacto.h"

class Trabajador : public Persona 
{
  private:
    std::string cargo;      
    double salario;
          
  public:
    // constructores 
    Trabajador();  
    Trabajador(std::string, int, double, DatosContacto, std::string, double);
    
    // variado
    std::string desplegar();
    
    // destructores
    ~Trabajador();

};

#endif
