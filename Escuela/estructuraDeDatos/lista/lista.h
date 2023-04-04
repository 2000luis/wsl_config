#ifndef LISTA_H
#define LISTA_H
#include "persona.h"

class lista {
public:
  lista(int);
  ~lista();
  void mostrar();
  void mostrar_ele();
  void buscar_ele();
  void eliminar_lista();
  void eliminar_ele();
  void anadir_ele();
  void insertar_ele();
  void ordenacion();

protected:
private:
  persona *a;
  int MAX;
  int n;
};


#endif // LISTA_H

