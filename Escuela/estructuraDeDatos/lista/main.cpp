#include <iostream>
#include "lista.h"

using namespace std;

int main()
{
    lista x(5);
    char opc;

  do
    {
      cout << endl;
      cout << "1|Mostrar lista" << endl;
      cout << "2|Mostrar elemento" << endl;
      cout << "3|Buscar elemento" << endl;
      cout << "4|Anadir elemento" << endl;
      cout << "5|Insertar ele" << endl;
      cout << "6|eliminar ele" << endl;
      cout << "7|Eliminar lista" << endl;
      cout << "8|Ordenacion" << endl;
      cout << "9|Salir" << endl;
      cout << "opciones: ";
      cin >> opc;
      switch (opc)
      {
        case '1':
          x.mostrar();
        break;
        case '2':
          x.mostrar_ele();
        break;
        case '3':
          x.buscar_ele();
        break;
        case '4':
          x.anadir_ele();
        break;
        case '5':
          x.insertar_ele();
        break;
        case '6':
          x.eliminar_ele();
        break;
        case '7':
          x.eliminar_lista();
        break;
        case '8':
          x.ordenacion();
        break;
        case '9':
          opc=9;
        break;
      }
    }
    while(opc != '9');

  return 0;

}
