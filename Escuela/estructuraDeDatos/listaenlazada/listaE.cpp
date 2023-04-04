#include "listaE.h"
#include "iostream"
using namespace std;

lista_enlazada::lista_enlazada()
{
    cabecera = NULL;
}

void lista_enlazada::mostrar_lista()
{
    if(cabecera != NULL)
    {
        nodo *aux = cabecera;
        do
        {
            cout << aux -> dato << " ";
            aux = aux ->enlace;
        }while(aux != NULL);
    }
    else
    {
        cout << "list esta vacia" << endl;
    }
    cout << endl;
}

void lista_enlazada::insertar_inicio()
{
    nodo *nuevo = new nodo;
    cout << "Introduce el dato: ";
    cin >> nuevo -> dato;
    nuevo -> enlace = cabecera;
    cabecera = nuevo;
}

void lista_enlazada::insertar_final()
{
    nodo *nuevo = new nodo;
    cout << "Introduce dato";
    cin >> nuevo -> dato;
    nuevo -> enlace = NULL;
    if(cabecera == NULL)
    {
        cabecera = nuevo;
    }
    else
    {
        nodo *aux = cabecera;
        while(aux -> enlace !=NULL)
        {
            aux = aux -> enlace;
        }
        aux -> enlace = nuevo;
    }
}

void lista_enlazada::eliminar_inicio()
{
    if (cabecera != NULL)
    {
        nodo *aux = cabecera;
        cabecera = cabecera ->enlace;
        delete aux;
        cout << "Dato eliminar" << endl;
    }
    else
    {
        cout << "lista vacia" << endl;
    }
}

void lista_enlazada::eliminar_final()
{
    if(cabecera)
    {
        if(cabecera -> enlace == NULL)
        {
            nodo *aux = cabecera;
            cout << "eliminando a: " << aux -> dato << endl;
            delete aux;
            cabecera = NULL;
        }
        else
        {
            nodo *aux2 = cabecera;
            nodo *aux1;
            while(aux2 -> enlace != NULL)
            {
                aux1 = aux2;
                aux2 = aux2 -> enlace;
            }
            aux1 -> enlace = NULL;
            cout << "Eliminando a: " << aux2 -> dato << endl;
            delete aux2;
        }
    }
    else
    {
        cout << "lista esta vacia";
    }
}

void lista_enlazada::eliminar_lista()
{
    if (cabecera)
    {
        nodo *aux = cabecera;
        nodo *aux2;
        while(aux != NULL)
        {
            aux2 = aux;
            aux = aux ->enlace;
            cout << "eliminando : " << aux2 -> dato << endl;
            delete aux2;
        }
        cabecera = NULL;
    }
}
