#include <iostream>
using namespace std;
#include <stack>

int pre(char c)
{
    if (c == '#')
        return 0;
    else if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (isalpha(c))
        return 3;
    return 0;
}

int main(){

    stack <char> x;
    string str;
    cout << "string: ";
    cin >> str;
    str += "#";
    int L = str.length();
    string pos = " ";

    for(int i = 0; i < L; i++)
    {
        while(!x.empty() && pre(x.top()) >= pre(str[i]))
        {
            pos += x.top();
            x.pop();
        }
        x.push(str[i]);
    }
    cout << "Resultado: " << pos;
}
