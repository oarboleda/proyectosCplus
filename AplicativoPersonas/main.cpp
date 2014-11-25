// fichero procesaPersonas.cpp
#include<iostream>
#include <sstream>
#include<string.h>

#include "persona.h"
#include "trabajador.h"
#include "datosContacto.h"

#define length(x) (sizeof(x)/sizeof(x[0]))

using namespace std;


void llenarPersonas(Persona datos[], int cuantos){
     cout << "\nEn llenado  NroDatos: " << cuantos << endl;
     for(int i=0; i<cuantos; i++){ 
             ostringstream elNombre;
             ostringstream laDireccion;
             elNombre << "Persona-" << (i+1);
             laDireccion << "Avenida" << (100-i);
             
             DatosContacto dc (laDireccion.str(), 6570200+i, 30077448+i);
             Persona p (elNombre.str(), 30+i, 1.50+i*0.1, dc);
             datos[i] = p;
     }
}

void mostrarPersonas(Persona datos[], int cuantos){
     cout << "\nEn mostrarTodos  NroDatos: " << cuantos << endl;
     for(int i=0; i<cuantos; i++){
             cout << (i+1) << "." << "\t" << datos[i].desplegar() << endl;
     }
}

void llenarTrabajadores(Trabajador datos[], int cuantos){
     cout << "\nEn llenado  NroDatos: " << cuantos << endl;
     for(int i=0; i<cuantos; i++){ 
             ostringstream elNombre;
             ostringstream laDireccion;             
             elNombre << "Persona-" << (i+1);
             laDireccion << "Avenida" << (100-i);

             DatosContacto dc (laDireccion.str(), 6570200+i, 30077448+i);                          
             Trabajador p (elNombre.str(), 30+i, 1.50+i*0.1, dc, "Gerente", 1200000+i*20000);
             datos[i] = p;
     }
}

void mostrarTrabajadores(Trabajador datos[], int cuantos){
     cout << "\nEn mostrarTodos  NroDatos: " << cuantos << endl;
     for(int i=0; i<cuantos; i++){
             cout << (i+1) << "." << "\t" << datos[i].desplegar() << endl;
     }
}

void procesarPersonas(int cantidad){
    //cout << "\nEn procesarPersonas" << endl;     
    Persona quienes[cantidad];
    
    llenarPersonas(quienes, cantidad);
    mostrarPersonas(quienes, cantidad);
}

void procesarTrabajadores(int cantidad){
    //cout << "\nEn procesarEmpleados" << endl;     
    Trabajador quienes[cantidad];
    
    llenarTrabajadores(quienes, cantidad);
    mostrarTrabajadores(quienes, cantidad);
}

int main(int argc, char *argv[])
{
    int opcion, cuantos;
    
    do{
        cout << "Digite 1-personas 2-Trabajadores ";
        cin >> opcion;
    }while(opcion<1 || opcion>2);

    do{
        cout << "Cuantos datos desea? ";
        cin >> cuantos;
    }while(cuantos<1);
    
    
    switch(opcion)
    {
        case 1: procesarPersonas(cuantos);
                break;                  
        default: procesarTrabajadores(cuantos);
                 break;
    }    

    cout << "\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}



