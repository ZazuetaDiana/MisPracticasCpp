//
// Practicas.cpp 
// Instituto Tecnológico de Tijuana
// Depto de Sistemas y Computación
// Ing.En Sistemas Computacionales
//
// Autor: Zazueta Lopez Diana  @nickname : ZazuetaDiana
// Repositorio:  http: //github.com/tectijuana/
// Fecha de revisión : 16 de octubre del 2020
// 
// Objetivo del programa :
// Calcular la presión sanguinea sistólica de personas cuyas edades son 25,35,47,51.5 y 60.
// Usar la fórmula P=100x 1/2 A, donde A representa la edad.

#include <iostream>
using namespace std;

int main()
{
    std::cout << "-----------Hola mundo!-----------\n";

    double A;
    cout << "Ingresar edad: "<<endl;
    cin >> A;
    
    double P = 100 * (0.5 * A);
    cout << "La presion sanguinea sistolica es: " << P <<endl;
    
}
