#include <iostream>
using namespace std;
#include <stack>

int main(){

    stack <char> x;
    string ora;
    cout << "Agrupaciones: ";
    cin >> ora;
    int L = ora.length();
    bool val = false;

    for(int i = 0; i < L; i++)
    {
        val = false;
        switch(ora[i]){
            case ']':
                if (!x.empty() && x.top() == '[' ){
                    x.pop();
                    cout << "La agrupacion [] #"<< i+1 << " si esta colocada correctamente" << endl;
                }else {
                    val = true;
                }
                break;
            case ')':
                if (!x.empty() && x.top() == '('){
                    x.pop();
                    cout << "La agrupacion () #"<< i+1 << " si esta colocada correctamente" << endl;
                }else {
                    val = true;
                }
                break;
            case '}':
                if (!x.empty() && x.top() == '{'){
                    x.pop();
                    cout << "La agrupacion {} #"<< i+1 << " si esta colocada correctamente" << endl;
                } else {
                    val = true;
                }
                break;
            default:
                x.push(ora[i]);
                break;
        }
        if(val){
            cout << "La agrupacion " << ora[i] << " no se cerro correctamente" << endl;
        }
    }

}
