#include "persona.h"
#include "iostream"
using namespace std;

void persona::leer() {
  cout << "nombre";
  cin >> nombre;
  cout << "pa";
  cin >> pa;
  cout << "ma";
  cin >> ma;
  cout << "edad";
  cin >> edad;
}

bool persona::operator >(persona a)
{
    if(pa > a.pa)
        return true;
    if(pa == a.pa && ma > a.ma)
        return true;
    if(pa == a.pa && ma == a.ma && nombre > a.nombre)
        return true;
    if(pa == a.pa && ma == a.ma && nombre == a.nombre && edad > a.edad)
        return true;

    return false;
}

void persona::imprimir()
{
    cout << pa << " " << ma << " " << nombre << ", " << edad;
}

string persona::get_nombre()
{
    return nombre;
}

