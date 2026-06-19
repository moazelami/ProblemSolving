#include <iostream>
using namespace std;

void Swapping(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << " " << y;
}

int main()
{
    int x, y;
    cin >> x >> y;
    Swapping(x, y);

    return 0;
}