// fichero datosContacto.h
// declaracion de la clase datosContacto

#ifndef DATOS_CONTACTO_H
#define DATOS_CONTACTO_H

#include<string>

class DatosContacto
{
  private:
    std::string direccion;
    int telefono;
    int celular;
          
  public:
    // constructores 
    // DatosContactos(std::string ="N.N", int = 6570825, int = 3007744842);    
    DatosContacto();  
    DatosContacto(std::string, int, int);
    
    // variado
    std::string desplegar();
    
    // destructores
    ~DatosContacto();
};

#endif
