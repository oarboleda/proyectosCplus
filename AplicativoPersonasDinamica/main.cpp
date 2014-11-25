// fichero procesaPersonas.cpp
#include<iostream>
#include <sstream>
#include<string.h>
#include<vector>

#include "../AplicativoPersonas/persona.h"
#include "../AplicativoPersonas/trabajador.h"
#include "../AplicativoPersonas/datosContacto.h"

#include "../AplicativoPersonas/persona.cpp"
#include "../AplicativoPersonas/trabajador.cpp"
#include "../AplicativoPersonas/datosContacto.cpp"

using namespace std;

void llenarTrabajadores(vector<Trabajador> datos, int cuantos){
     cout << "\nEn llenado" <<  endl;
     for(int i=0; i<cuantos; i++){ 
             cout << "\n .. insertando dato"<<(i+1) << endl;
             ostringstream elNombre;
             ostringstream laDireccion;             
             elNombre << "Persona-" << (i+1);
             laDireccion << "Avenida" << (100-i);

             DatosContacto dc (laDireccion.str(), 6570200+i, 30077448+i);                          
             Trabajador p (elNombre.str(), 30+i, 1.50+i*0.1, dc, "Gerente", 1200000+i*20000);
             datos.push_back(p);
     }
     cout << "\nSe llenaron " << datos.size() << " datos" <<  endl;
}

void mostrarTrabajadores(vector<Trabajador> datos){  
     cout << "\nEn mostrarTodos" << "  Cantidad:" << datos.size() <<endl;
     vector<Trabajador>::const_iterator iteradorConst; // const_iterator
     int i=0;

     // muestra los elementos del vector usando const_iterator
     for ( iteradorConst = datos.begin(); iteradorConst != datos.end(); ++iteradorConst, i++ )
     {
         Trabajador obj = *iteradorConst;

             cout << (i+1) << "." << "\t" << obj.desplegar() << endl;
     }       
}

/*
void mostrarTrabajadores(vector<Trabajador> *datos){
     cout << "\nEn mostrarTodos" << "  Cantidad:" << datos->size() <<endl;
     for(int i=0; i<datos->size(); i++){           
             Trabajador obj = datos[i];
             cout << (i+1) << "." << "\t" << datos[i].desplegar() << endl;

//             cout << (i+1) << "." << "\t" << datos[i].desplegar() << endl;
     }
}
*/
void procesarTrabajadores(int cantidad){
    //cout << "\nEn procesarEmpleados" << endl;     
    vector<Trabajador> quienes;
    
    llenarTrabajadores(quienes, cantidad);
    mostrarTrabajadores(quienes);
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
    
    
    procesarTrabajadores(cuantos);  

    cout << "\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
