#include <iostream>
using namespace std;

class Autor {
private:
    string nombre;
    string apellido_paterno;
    string apellido_materno;

public:
    void leer_datos() {
        cout << "Ingresa el nombre del autor: ";
        cin >> nombre;
        cout << "Ingresa el apellido paterno del autor: ";
        cin >> apellido_paterno;
        cout << "Ingresa el apellido materno del autor: ";
        cin >> apellido_materno;
    }

    void imprimir_datos() {
        cout << "Nombre del autor: " << nombre << endl;
        cout << "Apellido paterno del autor: " << apellido_paterno << endl;
        cout << "Apellido materno del autor: " << apellido_materno << endl;
    }
};

class Libro {
private:
    string nombre;
    Autor autor;
    string editorial;
    string anio_publicacion;

public:
    string get_anio_publicacion() {
        return anio_publicacion;
    }

    void leer_datos() {
        cout << "Ingresa el nombre del libro: ";
        cin >> nombre;
        cout << endl;
        cout << "Ingresa los datos del autor:" << endl;
        autor.leer_datos();
        cout << endl;
        cout << "Ingresa la editorial del libro: ";
        cin >> editorial;
        cout << endl;
        cout << "Ingresa el año de publicación del libro: ";
        cin >> anio_publicacion;
        cout << endl;
    }

    void imprimir_datos() {
        cout << "Nombre del libro: " << nombre << endl;
        cout << "Autor del libro: ";
        autor.imprimir_datos();
        cout << "Editorial del libro: " << editorial << endl;
        cout << "Año de publicación del libro: " << anio_publicacion << endl;
    }
};

int main(){

    int n;
    cout << "Ingrese el numero de libros a almacenar: ";
    cin >> n;
    cin.ignore();


    Libro* libros = new Libro[n];

    for (int i = 0; i < n; i++) {
        cout << endl;
        cout << "Libro #" << i + 1 << endl;

        libros[i].leer_datos();
    }

    cout << endl;
    cout << "Informacion de los libros: ";
    cout << endl;
    for (int i = 0; i < n; i++) {
        libros[i].imprimir_datos();
        cout << endl;
    }

    string anio_busqueda;
    cout << endl;
    cout << "buscar anio: ";
    cin >> anio_busqueda;

    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        if (libros[i].get_anio_publicacion() == anio_busqueda) {
            libros[i].imprimir_datos();
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No existen registros de libros publicados en el anio " << anio_busqueda << endl;
    }

    delete[] libros;

    return 0;

}
