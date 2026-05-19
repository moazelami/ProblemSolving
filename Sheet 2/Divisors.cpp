#include <iostream>
using namespace std;

void Divisors(int number)
{
    for (int i = 1; i <= number;i++)
    {
        if (number % i == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    Divisors(n);

    return 0;
}