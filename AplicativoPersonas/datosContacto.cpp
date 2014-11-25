// fichero datosContacto.cpp
// funciones y operadores de la clase datosContacto
#include<iostream>
#include <sstream>
#include<string>

#include "datosContacto.h"

using namespace std;

// constructor por defecto
DatosContacto::DatosContacto (){ //cout << "constructorDC_D" << endl; 
                               }
                   
DatosContacto::DatosContacto (std::string valDireccion, int valTelefono, int valCelular): 
                   direccion(valDireccion), telefono(valTelefono), celular(valCelular) { 
                                            //cout << "constructorDC" << endl; 
                                            }
    
std::string DatosContacto::desplegar (){
     stringstream stream;  

     stream << "Direccion:" << direccion << "  Telefono:" << telefono << "  Celular:" << celular;               
     return stream.str();
}
    
DatosContacto::~DatosContacto(){
/*
     stringstream stream;  
     
     stream << "\n  Destruyendo DatosContacto " << direccion;
     
     cout << stream.str();                 
     */
    }  
