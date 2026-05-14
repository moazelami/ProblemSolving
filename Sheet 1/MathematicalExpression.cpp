#include <iostream>
using namespace std;

int isRight(int a , char s , int b , char q , int c)
    {
        if(s == '+')
        {
            if(a + b == c)
                return true;
            else
                return a + b;
        }
        else if (s == '-')
        {
            if (a - b == c)
                return true;
            else
                return a - b;
        }
        else if (s == '*')
        {
            if (a * b == c)
                return true;
            else
                return a * b;
        }
    }

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if (isRight(a, s, b, q, c)==true)
        cout << "Yes";
    else
        cout << isRight(a, s, b, q, c);

    
    return 0;
}