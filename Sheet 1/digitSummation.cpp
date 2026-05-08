#include <iostream>
using namespace std;

long long sum(long long x , long long y)
{
    return (x % 10) + (y % 10);
}

int main()
{
    long long x, y;
    cin >> x >> y;
    cout << sum(x ,y);
    return 0;
}