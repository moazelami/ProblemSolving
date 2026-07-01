#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool isPrime(int m)
{
    if(m < 2)
        return false;

    for (int i = 2; i*i <= m;i++)
    {
        if(m % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    bool flag = false;
    for (int i = n + 1; i <= 50; i++)
    {
        if(isPrime(i))
        {
            if(i == m)
                flag = true;

            break;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}