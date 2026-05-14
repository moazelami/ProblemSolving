#include <iostream>
using namespace std;

bool isRight(int a, char s, int b)
{
    if (s == '=')
        if (a == b)
            return true;
    else if (s == '>')
        if (a > b)
            return true;
    else if (s == '<')
        if (a < b)
            return true;
    
    return false;
}

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    if (isRight(a, s, b))
        cout << "Right";
    else
        cout << "Wrong";

    return 0;
}