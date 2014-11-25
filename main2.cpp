#include <cstdlib>
#include <iostream>

using namespace std;
const double PI = 3.14169;

inline int sumaEnteros (int a, int b)
{
  return a+b;
}

void duplicar (double& entrada)
{
    entrada*=2;
}

double computar (double entrada)
{
    return entrada*PI;
}

double multiplicaReales (double entrada1, double entrada2=PI)
{
    return entrada1*entrada2;
}

int main(int argc, char *argv[])
{
    int valEntero;
    double valReal;
    string valCadena1, valCadena2;
    
    cout<<"Digite un entero ";
    cin >> valEntero; 
    cout<<"Digite un real ";
    cin >> valReal;
    // Lee solo hasta el espacio
    cout<<"Digite una cadena ";
    cin >> valCadena1;
    // Lee el resto incluyendo espacios
    getline(cin, valCadena2);

    cout << "\n\nSe leyo  \nEntero:" << valEntero << "  \nReal:" << valReal 
         << "  \nCadena1:" << valCadena1 << "  \nCadena2:" << valCadena2 
         << "  \nResultado:" << computar(valEntero) << endl << endl;    
    duplicar(valReal);
    cout << "Nuevo ValorReal:" << valReal << endl << endl;    
    cout << "SumandoEnteros:" << sumaEnteros(valEntero, 20) << endl << endl;    
    cout << "MultiplicandoReales: 2-operandos:" << multiplicaReales(valReal, 3.7) 
         << "  1-operando:" << multiplicaReales(valReal)<< endl << endl;    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
