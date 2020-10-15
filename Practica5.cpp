//
// Practica5.cpp 
// Instituto Tecnológico de Tijuana
// Depto de Sistemas y Computación
// Ing.En Sistemas Computacionales
//
// Autor: Zazueta Lopez Diana  @nickname : ZazuetaDiana
// Repositorio:  http: //github.com/tectijuana/
// Fecha de revisión : 16 de octubre del 2020
// 
// Objetivo del programa :
// Si dos ciudades estan a 80km una de otra y usted conduce a 90 km/h.
//¿Cuántos minutos necesitará para ir de una ciudad a otra?.
         


#include <iostream>
using namespace std;

int main()
{
    
    std::cout << "-----------Hola mundo!-----------\n";
    cout << "-----------Determina si su numero es primo-----------\n";
    double d;
    cout << "Ingresar distancia de una ciudad a otra en kilometros: " << endl;
    cin >> d;
    double kh;
    cout << "Ingresar a cuantos kilometros por hora conduce:  " << endl;
    cin >> kh;
    double h= d/kh;
    double min = h * 60;

    cout << "Minutos que se necesitan para ir de una ciudad a otra:  " << min << "  minutos" << endl;
    
}

  



