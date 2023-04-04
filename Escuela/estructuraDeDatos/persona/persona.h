#ifndef PERSONA_H
#define PERSONA_H
using namespace std;
#include "iostream"

class persona
{
    private:
        string nombre;
        string apellidoMa;
        string apellidoPa;
        int n;

    public:
        void leer();
        void mostrarNombre();

};

class lista
{
    private:
        persona *p;
        int n;
        

    public:
        lista(int);
        void mostrarLista(int);
        void ordenar();

};
#endif


