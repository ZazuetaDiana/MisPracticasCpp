//
// Practica2.cpp 
// Instituto Tecnológico de Tijuana
// Depto de Sistemas y Computación
// Ing.En Sistemas Computacionales
//
// Autor: Zazueta Lopez Diana  @nickname : ZazuetaDiana
// Repositorio: https://github.com/ZazuetaDiana/MisPracticasCpp/edit/main/Practica2.cpp
// Fecha de revisión : 16 de octubre del 2020
// 
// Objetivo del programa :
// Calcular la altura (h) para t segundos de un cuerpo lanzado hacia arriba a una velocidad inicial r:
// h=rt - 16t^2  en este ejemplo, t=2 y r=32.

#include <iostream>
using namespace std;

int main()
{
    std::cout << "-----------Hola mundo!-----------\n";

    double t;
    cout << "Ingresar los segundos: " << endl;
    cin >> t;
    double r;
    cout << "Ingresar velocidad: " << endl;
    cin >> r;

    double h = (r * t )- 16 * pow(t, 2);
    cout << "La altura es: " << h << endl;
}


