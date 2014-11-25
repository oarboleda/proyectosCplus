// fichero trabajador.cpp
// funciones y operadores de la clase trabajador
#include<iostream>
#include <sstream>
#include<string>

#include "persona.h"
#include "trabajador.h"
#include "datosContacto.h"

using namespace std;

// constructor por defecto
Trabajador::Trabajador (){ cout << "constructorD" << endl; }
                   
Trabajador::Trabajador (std::string valNombre, int valEdad, double valEstatura, DatosContacto valContacto, std::string valCargo, double valSalario): 
                   Persona(valNombre, valEdad, valEstatura, valContacto), cargo(valCargo), salario(valSalario) 
                   { cout << "constructor" << endl; }
    
std::string Trabajador::desplegar (){
     stringstream stream;  
     
     //stream << "Nombre:" << nombre << "  Edad:" << edad << "  Estatura:" << estatura << "  Cargo:" << cargo << "  Salario:" << salario;               
     stream << Persona::desplegar() << "  Cargo:" << cargo << "  Salario:" << salario;               
     return stream.str();
}
    
Trabajador::~Trabajador(){
/*                          
     stringstream stream;  
     
     stream << "\n  Destruyendo al trabajador " << nombre;
     
     cout << stream.str();                 
*/
    }  
