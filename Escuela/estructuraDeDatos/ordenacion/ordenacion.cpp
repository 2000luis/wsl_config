#include "ordenacion.h"
#include "iostream"
using namespace std;

ordenacion::ordenacion(int ta)
{
    a = new int[ta];
    n = ta;
    cout << "Introduce los valores de la lista" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Dato#" << i+1 << ": ";
        cin >> a[i];
        cout << endl;
    }
}

void ordenacion::mostrar()
{

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }

    cout << endl;

}

void ordenacion::iteracion(int i)
{
    cout << "iteracion#" << i+1 << endl;
    mostrar();
}

void ordenacion::intercambio()
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i]>a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }

        iteracion(i);
    }

}

void ordenacion::reduccion()
{
    for(int i = 0; i < n; i++)
    {
        int menor = a[i];
        int imenor = i;

        for(int j = i+1; j < n; j++)
        {
            if(a[j] < menor)
            {
                menor = a[j];
                imenor = j;
            }
        }
        a[imenor] = a[i];
        a[i] = menor;
    }

    mostrar();

}

void ordenacion::insercion()
{
    for(int i = 0; i < n; i++)
    {
        int aux = a[i];
        int j = i;
        while(a[j-1] > aux && j > 0)
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = aux;
    }

    mostrar();

}

void ordenacion::burbuja()
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                int aux = a[j];
                a[j] = a[j+1];
                a[j+1]=aux;
            }
        }
    }

    mostrar();
}







