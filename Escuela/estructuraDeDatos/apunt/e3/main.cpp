#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "n arreglos: ";
    cin >> n;

    int *a;
    a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Elemento"<< i+1 <<": ";
        cin >> a[i];
        cout << "Elemento del arreglo: ";
        cout << a[i] << endl << endl;
    }
    
    delete []a;

    return 0;

}
