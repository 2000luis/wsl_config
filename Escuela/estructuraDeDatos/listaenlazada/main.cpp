#include <iostream>
using namespace std;
#include "listaE.h"

int main(){

    lista_enlazada lista;
    lista.insertar_inicio();
    lista.insertar_inicio();
    lista.insertar_inicio();
    lista.mostrar_lista();
    lista.eliminar_final();
    lista.mostrar_lista();
    lista.eliminar_lista();
    lista.mostrar_lista();

}
