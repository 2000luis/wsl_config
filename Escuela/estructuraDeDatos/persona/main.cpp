#include <iostream>
using namespace std;
#include "persona.h"

int main(){
    int tam;
    cout << "Cuantas personas deseas agregar?: ";
    cin >> tam;
    lista x(tam);
    x.mostrarLista(tam);

}
