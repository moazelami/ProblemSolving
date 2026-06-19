#include <iostream>
#include <cmath>
using namespace std;

long long Equation(int x ,int n)
{
    long long sum = 0;
    for (int i = 0; i <= n;i += 2)
    {
        if(i == 0)
            continue;
        sum += pow(x, i);
    }
    return sum;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << Equation(x, n);

    return 0;
}