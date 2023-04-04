#include "lista.h"
#include "iostream"
using namespace std;

lista::lista(int tem) {
  a = new persona[tem];
  MAX = tem;
  n = 0;
}

void lista::mostrar() {
  if (n > 0) {
    cout << "list: ";
    for (int i = 0; i < n; i++) {
      a[i].imprimir() ;
      cout << endl;
    }
  } else {
    cout << "lista esta vacia" << endl;
  }
}

void lista::mostrar_ele() {
  if (n > 0) {
    int posicion;
    cout << "Introduce la posicion";
    cin >> posicion;
    if (posicion > 0 && posicion <= n) {
      cout << "Dato #" << posicion << ": ";
      a[posicion - 1].imprimir();
      cout << endl;
    } else {
      cout << "Posicion es invalida";
    }
  } else {
    cout << "lista esta vacia";
  }
}

void lista::buscar_ele() {
  string ele;
  cin >> ele;
  bool dis = false;
  for (int i = 0; i < n; i++) {
    if (a[i].get_nombre() == ele) {
      dis = true;
      a[i].imprimir();
    }
  }
  if (!dis) {
    cout << "Se encontro el nombre ->";
  } else {
    cout << "No se encontro";
  }
}

void lista::insertar_ele()
{
  if (n<MAX)
  {
    int posicion;
    cout << "posicion: ";
    cin >> posicion;
    if ( posicion > 0 && posicion <= n+1)
    {
      for (int i = n; i >= posicion; i--)
      {
        a[i] = a[i-1];
      }
      cout << "introduce dato: ";
      a[posicion-1].leer();
      n++;
    }
    else{
      cout << "posicion no valida";
    }
  }
  else{
    cout << "No hay espacio" << endl;
  }
  
}

void lista::eliminar_ele()
{
  if (n > 0) {
    int posicion;
    cout << "Introduce la posicion";
    cin >> posicion;
    if (posicion > 0 && posicion <= n) {
      for (int i = posicion-1; i < n-1; i++)
      {
        a[i] = a[i+1];
      }
      n--;
    } else {
      cout << "Posicion es invalida";
    }
  } else {
    cout << "lista esta vacia";
  }
}

void lista::eliminar_lista()
{
  n=0;
}

void lista::anadir_ele()
{
  cout << "elemento: ";
  if (n < MAX) {
    a[n].leer();
    n++;
  } else {
    cout << "lista esta llena";
  }
  
}

lista::~lista() {
  
}


void lista::ordenacion()
{
    for(int i = 0; i < n -1 ; i++)
    {
        for(int j = i +1; j < n; j++)
        {
            if(a[i]>a[j])
            {
                persona aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}
