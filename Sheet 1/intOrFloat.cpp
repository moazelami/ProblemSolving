#include <iostream>
using namespace std;

int main()
{
    double a;
    cin >> a;
    if (a == int(a))
    {
        cout << "int " << a << endl;
    }
    else
    {
        cout << "float " << int(a) << " " << a - int(a) << endl;
    }
    return 0;
}