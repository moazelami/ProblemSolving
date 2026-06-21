#include <iostream>
using namespace std;

void SumOfRange(long long x ,long long y)
{
    long long sum = 0, sumEven = 0, sumOdd = 0;
    long long l = min(x, y);
    long long r = max(x, y);

    for (long long i = l; i <= r; i++)
    {
        sum += i;
        if(i % 2 == 0)
            sumEven += i;
        else
            sumOdd += i;
    }
    cout << sum << endl
         << sumEven << endl
         << sumOdd << endl;
}

int main()
{
    long long x, y;
    cin >> x >> y;

    SumOfRange(x, y);

    return 0;
}