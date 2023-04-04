
#ifndef ORDENACION_H
#define ORDENACION_H

#include <iostream>
using namespace std;

class ordenacion
{
    private:
        int *a;
        int n;

    public:
        ordenacion(int);
        void intercambio();
        void reduccion();
        void insercion();
        void burbuja();
        void mostrar();
        void iteracion(int);
};

#endif
