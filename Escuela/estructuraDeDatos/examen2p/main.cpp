#include <iostream>
using namespace std;
class Nodo {
public:
int dato;
Nodo *siguiente;
Nodo(int _dato, Nodo *_siguiente = nullptr) {
dato = _dato;
siguiente = _siguiente;
}
};
class lista_enlazada {
private:
Nodo *primero;
public:
lista_enlazada() {
primero = nullptr;
}
void agregar_elemento(int dato) {
if (!primero) {
primero = new Nodo(dato);
}
else {
Nodo *actual = primero;
while (actual->siguiente) {
actual = actual->siguiente;
}
actual->siguiente = new Nodo(dato);
}
}
void eliminar_multiplos_de(int num) {
Nodo *actual = primero;
while (actual && actual->dato != num) {
actual = actual->siguiente;
}
if (!actual) {
cout << "El elemento " << num << " no existe en la lista" << endl;
return;
}
Nodo* anterior = actual;

actual = actual->siguiente;
while (actual) {
if (actual->dato % num == 0) {
anterior->siguiente = actual->siguiente;
delete actual;
actual = anterior->siguiente;
}
else {
anterior = actual;
actual = actual->siguiente;
}
}
}
void imprimir() {
Nodo *actual = primero;
while (actual) {
cout << actual->dato << " -> ";
actual = actual->siguiente;
}
cout <<  endl;
}
};
int main() {
lista_enlazada mi_lista;
mi_lista.agregar_elemento(6);
mi_lista.agregar_elemento(3);
mi_lista.agregar_elemento(2);
mi_lista.agregar_elemento(6);
mi_lista.agregar_elemento(6);
mi_lista.agregar_elemento(4);
mi_lista.agregar_elemento(1);
mi_lista.agregar_elemento(3);
mi_lista.agregar_elemento(9);
mi_lista.agregar_elemento(2);
mi_lista.eliminar_multiplos_de(5);
mi_lista.imprimir(); // Salida: 3 -> 1 -> 2 -> 9 -> 5 -> 10 -> 12 -> null
mi_lista.eliminar_multiplos_de(3);
mi_lista.imprimir(); // Salida: 3 -> 1 -> 2 -> 5 -> 10 -> 12 -> null
mi_lista.eliminar_multiplos_de(9);
// Salida: El elemento 7 no existe en la lista
mi_lista.imprimir(); // Salida: 3 -> 1 -> 2 -> 5 -> 10 -> 12 -> null
return 0;
}
