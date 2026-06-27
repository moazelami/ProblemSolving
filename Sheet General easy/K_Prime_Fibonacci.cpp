#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool isPrime(long long num)
{
    if(num < 2)
        return false;

    for (long long i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            return false;
        }    
    }

    return true;
}

long long fibo(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    long long a = 0, b = 1;

    for (int i = 3; i <= n; i++)
    {
        long long c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        long long num;
        cin >> num;
        if (isPrime(fibo(num)))
            cout << "prime";
        else
            cout << "not prime";

        cout << endl;
    }
    

    return 0;
}