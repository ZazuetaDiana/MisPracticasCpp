//
// Practica2.cpp 
// Instituto Tecnológico de Tijuana
// Depto de Sistemas y Computación
// Ing.En Sistemas Computacionales
//
// Autor: Zazueta Lopez Diana  @ZazuetaDiana
// Repositorio: https://github.com/ZazuetaDiana/MisPracticasCpp/find/main
// Fecha de revisión : 16 de octubre del 2020
// 
// Objetivo del programa :
// Encontrar la potencia de una potencia; es decir, (a^m)^n, donde a=20,m=3,n=2.

#include <iostream>
using namespace std;

int main()
{
    std::cout << "-----------Hola mundo!-----------\n";

    double a;
    cout << "Ingresar la base: " << endl;
    cin >> a;
    double m;
    cout << "Ingresar el primer exponente: " << endl;
    cin >> m;
    double n;
    cout << "Ingresar el segundo exponente: " << endl;
    cin >> n;

    double R =  pow(pow(a, m),n);
    cout << "Su resultado es: " << R << endl;
}



