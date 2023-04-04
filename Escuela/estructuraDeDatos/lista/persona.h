#ifndef PERSONA_H
#define PERSONA_H
#include "iostream"
using namespace std;


class persona
{
private:
  string nombre;
  string ma;
  string pa;
  int edad;

public:
void leer();
void imprimir();
bool operator >(persona); 
string get_nombre(); 
};

#endif
