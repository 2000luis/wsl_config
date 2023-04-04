#include <iostream>
using namespace std;
#include <stack>
#include <queue>

int main(){

    string frase = "Bond, James Bond";
    stack<char> p;
    queue<char> q;
    string x;
    string y = "";
    string z = "";

    cout << "introduce la frase: ";
    cin >> x;
    int l = x.lenght();

    for(int i = 0; i < l; i++)
    {
        if (is_vowel())
        {
            while(!p.empty())
            {
                y += p.top();
                p.pop();
            }
            y += x[i];
        }
        else
        {
            p.push(x[i]);
        }
    }
    while(!empty())
    {
        y += p.top();
        p.pop();
    }
cout << y << endl;

int n = y.length();

for(int i = 0; i < l; i++)
{
    if(isAlfa(y[i]))
    {
        p.push(y[i]);
        q.push(y[i]);
    }

}

for(int i = 0; i < l/2; i++)
{
        z += p.top();
        p.pop();
        z+= q.front();
        q.pop(); 
}


cout << z << endl;


}
