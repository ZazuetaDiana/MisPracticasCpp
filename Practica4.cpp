//
// Practica4.cpp
// Instituto Tecnológico de Tijuana
// Depto de Sistemas y Computación
// Ing.En Sistemas Computacionales
//
// Autor: Zazueta Lopez Diana  @ZazuetaDiana
// Repositorio: https://github.com/ZazuetaDiana/MisPracticasCpp/find/main
// Fecha de revisión : 16 de octubre del 2020
// 
// Objetivo del programa :
// Probar un numero para determinar si es primo.
// Imprimir PRIMO cuando lo sea y NO PRIMO cuando no lo sea.


#include <iostream>
using namespace std;

int main()
{
    unsigned long cont = 0, n, lim = 0;
    std::cout << "-----------Hola mundo!-----------\n";
    cout << "-----------Determina si su numero es primo-----------\n";
    
    cout << "Ingresar numero: " << endl;
    cin >> n;
    
    long R = n/2;
    for (unsigned long div = 1; div <= n; div++)
    {
        if (n % div == 0)
        {
            cout << "{" << div << "}";
            cont++;
            lim++;
            if (lim == 10)
            {
                cout << " \n\t\t\t";
                lim = 0;
            }
        }
    }
    cout<<"Fin" << endl;
    if (n == 2)
    {
      
        cout << "Su numero es PRIMO:\ttiene " << cont <<"  divisores."<< endl;
    }
    else
    {
       
        cout << "Su numero NO es PRIMO:\ttiene " << cont << "  divisores." << endl;
    }
    return 0;
}
