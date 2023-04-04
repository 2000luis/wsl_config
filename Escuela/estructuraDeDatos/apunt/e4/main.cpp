#include <iostream>
using namespace std;

struct alumno
{
    string nombre;
    int num;
};


int main(){

    alumno *a;
    a = new alumno;
    cout << "Nombre: ";
    cin >> a -> nombre;
    cout << "num: ";
    cin >> a -> num;

    cout << a -> nombre << endl;
    cout << a -> num;
    
    delete a;
    return 0;

}
