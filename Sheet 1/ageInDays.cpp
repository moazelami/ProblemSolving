#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int y = x / 365;
    int m = (x - (y * 365)) / 30;
    int d = (x - (y * 365) - (m * 30));

    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;
    return 0;
}