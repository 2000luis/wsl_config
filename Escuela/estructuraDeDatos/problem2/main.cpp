#include <iostream>
using namespace std;

struct dir
{
    string calle;
    int numero;
    string colonia;
};

struct alumno
{
    string nombre;
    dir x;
    float cali[3];
};

double promedios(alumno [], float, int);

int main(){

    alumno nom[4];
    int n = 4;

    for(int i = 0; i < n; i++)
    {

        cout << "Alumno #" << i+1 << endl;
        cout << "Nombre: ";
        cin >> nom[i].nombre;
        cout << endl << "Direccion" << endl;
        cout << "Calle: ";
        cin >> nom[i].x.calle;
        cout << "Numero: ";
        cin >> nom[i].x.numero;
        cout << "Colonia: ";
        cin >> nom[i].x.colonia;

        cout << endl << "Datos de escuela" << endl;

        for(int j = 0; j < 3; j++){

        cout << "Promedio de la materia #" << j+1 << ": ";
        cin >> nom[i].cali[j];

        }
        cout << endl;
    }
        promedios(nom, 4, 3);

}

double promedios(alumno al[], float a, int m)
{
    for(int i = 0; i < a; i++){
    float suma =0;
        cout << endl << "Alumno #" << i+1 << endl;
        cout << "Nombre: " << al[i].nombre;
        cout << endl << "Direccion" << endl;
        cout << "Calle: " << al[i].x.calle << endl;
        cout << "Numero: " << al[i].x.numero << endl;
        cout << "Colonia: " << al[i].x.colonia << endl;
        cout << endl << "Datos de escuela" << endl;
        for(int j = 0; j < m; j++){
            suma = suma + al[i].cali[j];
            cout << suma;
        }
        cout << "Promedio: " << suma/3;
    }

    return 0;
        
}
