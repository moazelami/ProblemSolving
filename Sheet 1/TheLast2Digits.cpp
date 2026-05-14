#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long aa = a % 100,
              bb = b % 100,
              cc = c % 100,
              dd = d % 100;

    long long m = aa * bb * cc * dd;

    if(m%100 <=9)
    {
        cout << "0" << m % 100;
    }
    else
    {
        cout << m % 100;
    }
    return 0;
}