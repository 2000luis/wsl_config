#include <iostream>
using namespace std;

int menor(int [], int);

int main(){

    int num;
    cout << "Tamaño de arreglo: ";
    cin >> num;
    int arr[num];

    for(int i = 0; i < num; i++)
    {
        int number;
        cout << "Inserta #" << i+1 << ": ";
        cin >> number;
        arr[i] = number;
    }

    cout << "El menor es: " << menor(arr, num);

}

int menor(int arr[], int num)
{
    int menor ;
    for(int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            menor = arr[i];
        }else{
            if (menor >= arr[i])
            {
                menor = arr[i];
            }
        }
    }

    return menor;
}
