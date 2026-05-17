#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number)
{
    if (number < 2)
        return false;

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
            break;
        }
    }

    return true;
}

void Primes(int number)
{
    for (int i = 2; i <= number;i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int number;
    cin >> number;
    Primes(number);

    return 0;
}