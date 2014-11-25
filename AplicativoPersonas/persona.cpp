// fichero persona.cpp
// funciones y operadores de la clase persona
#include<iostream>
#include <sstream>
#include<string>

#include "persona.h"
#include "datosContacto.h"

using namespace std;

// constructor por defecto
Persona::Persona (){ //cout << "constructorP_D" << endl; 
                   }
                   
Persona::Persona (std::string valNombre, int valEdad, double valEstatura, DatosContacto valContacto): 
                   nombre(valNombre), edad(valEdad), estatura(valEstatura), infoContacto(valContacto) { 
                                      //cout << "constructorP" << endl; 
                                      }
    
std::string Persona::desplegar (){
     stringstream stream;  

     stream << "Nombre:" << nombre << "  Edad:" << edad << "  Estatura:" << estatura << "\nContacto:" << infoContacto.desplegar();               
     return stream.str();
}
    
Persona::~Persona(){
/*                    
     stringstream stream;  
     
     stream << "\n  Destruyendo la persona " << nombre;
     
     cout << stream.str();                 
*/     
    }    
