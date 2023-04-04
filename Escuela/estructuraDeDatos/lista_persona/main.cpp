#include <iostream>
using namespace std;
#include "lista.h"

int main(){

    int opc;
    do
    {
        cout << "Menu" << endl;
        cout << "1 insertar" << endl;
        cout << "2 mostrar" << endl;
        cout << "3 sortar" << endl;
        cout << "4 Salir" << endl;
        cout << "Introduce un valor: ";
        cin >> opc;
        
            switch(opc)
            {
                case 1:
                    cout << "sirve" << endl;
                    break;
            }
            cout << endl << "Alguna otra operacion" << endl;
    }
    while(opc<4);
    return 0;

}
