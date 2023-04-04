#ifndef LISTAE_H
#define LISTAE_H

#include <iostream>

class nodo
{
    public:
        int dato;
        nodo *enlace;

};

class lista_enlazada
{
    private:
        nodo *cabecera;

    public:
        lista_enlazada();
        void mostrar_lista();
        void insertar_inicio();
        void insertar_final();
        void eliminar_inicio();
        void eliminar_final();
        void eliminar_lista();

};

#endif

