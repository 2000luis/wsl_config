#include <iostream>
using namespace std;

int main(){

    int *apunt;

    apunt = new int;
    *apunt = 5;

    cout << "Direccion: " << apunt << endl;
    cout << "Valor: " << *apunt << endl;

}
