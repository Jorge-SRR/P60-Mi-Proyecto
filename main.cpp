#include <iostream>
#include "persona.h"
using namespace std;

int main()
{
    cout << "Mi primer proyecto en git y github" << endl;
    Persona P;
    P.nombre = "David Brito";
    P.edad = 21;
    cout <<"Nombre: "<<P.nombre<<endl;
    cout <<"Edad: "<<P.edad <<endl;
    return 0;
}
