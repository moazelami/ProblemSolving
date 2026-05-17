#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number)
{
    if(number < 2)
        return false;

    for (int i = 2; i <= sqrt(number) ;i++)
    {
        if(number % i == 0)
        {
            return false;
            break;
        }
    }

    return true;
}

int main()
{
    int number;
    cin >> number;

    if(isPrime(number))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}