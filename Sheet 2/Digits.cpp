#include <iostream>
using namespace std;

void Digits(long long number)
{
    if (number == 0)
    {
        cout << 0 << endl;
        return;
    }

    while (number != 0)
    {
        long long moded = number % 10;
        cout << moded << " ";       
        number /= 10;
    }
    cout << endl;
}

int main()
{
    int repeats;
    long long n;
    cin >> repeats;

    for (int i = 1; i <= repeats; i++)
    {
        cin >> n;
        Digits(n);
    }
        return 0;
}