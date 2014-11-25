#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Persona {
  private:
    string nombre;
    int edad;
    double estatura;
  public:
    Persona(string valNombre, int valEdad, double valEstatura): 
                   nombre(valNombre), edad(valEdad), estatura(valEstatura) { cout << "constructor"; }
    
    string desplegar (void){
     stringstream stream;  
     
     stream << "Nombre:";
     stream << nombre;
     stream << "  Edad:";
     stream << edad;
     stream << "  Estatura:";
     stream << estatura;
               
     return stream.str();
    }
    
    ~Persona(){
     stringstream stream;  
     
     stream << "Nombre:";
     stream << nombre;
     
     cout << stream.str();                 
    }    
};

