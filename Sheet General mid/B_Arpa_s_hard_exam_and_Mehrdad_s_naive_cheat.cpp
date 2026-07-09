#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    
    if(n == 0)
    {
        cout << 1;
    }
    else
    {
        int rem = n % 4;

        if(rem ==  1)
            cout << 8;
        else if (rem == 2)
            cout << 4;
        else if (rem == 3)
            cout << 2;
        else
            cout << 6;
    }

    return 0;
}