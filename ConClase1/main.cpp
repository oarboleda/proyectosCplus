#include <cstdlib>
#include <iostream>
#include "Persona.cpp"

using namespace std;


int main(int argc, char *argv[])
{
    Persona p1 ("Juan David", 25, 1.72);

    cout << p1.desplegar() << endl << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
