#include "persona.h"
#include <iostream>
using namespace std;

void persona::leer()
{
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Apellido Paterno: ";
        cin >> apellidoPa;
        cout << "Apellido Materno: ";
        cin >> apellidoMa;
}

lista::lista(int tam)
{
    n = tam; 
    p = new persona[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Persona #" << i+1 << ": " << endl;
        p[i].leer();
    }
}

void persona::mostrarNombre()
{
    cout << nombre << " " << apellidoPa << " " << apellidoMa << endl;
}

void lista::mostrarLista(int tam)
{
    n = tam;
    for(int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Persona#" << i+1 << ": ";
        p[i].mostrarNombre();
    }
}
