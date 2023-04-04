#include <iostream>
#include <list>
using namespace std;

int main(){
    list<string> x;
    list<string>::iterator it;

    x.push_front("luis");
    x.push_front("hector");
    x.push_front("raul");

    cout << "Tamaño: " << x.size() << endl;

    for(it = x.begin(); it != x.end(); it++)
        cout << *it << endl;

    list<int> y;
    list<int>::iterator it2;

    y.push_front(2);
    y.push_front(3);
    y.push_front(4);

    cout << "Tamaño: " << y.size() << endl;
    
    for(it2 = y.begin(); it2 != y.end(); it2++)
        cout << *it2 << endl;
}
