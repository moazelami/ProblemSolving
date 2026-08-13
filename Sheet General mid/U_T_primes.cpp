#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool isPrime(ll number)
{
    if(number <2)
        return false;

    for (ll i = 2; i * i <= number;i++)
    {
        if(number % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size;
    cin >> size;
    
    while(size--)
    {
        ll number;
        cin >> number;
        ll root = sqrt(number);
        if (isPrime(root) && root * root == number)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}