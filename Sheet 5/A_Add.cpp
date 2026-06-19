#include <iostream>
using namespace std;

int summition(int x, int y)
{
    return x + y;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << summition(x, y);
    return 0;
}