#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int power , dragons;
    cin >> power >> dragons;

    int x[dragons];
    int y[dragons];

    for (int i = 0; i < dragons;i++)
    {
        cin >> x[i];
        cin >> y[i];
    }

    for (int i = 0; i < dragons - 1;i++)
    {
        for (int j = 0; j < dragons - i - 1;j++)
        {
            if(x[j]> x[j+1])
            {
                swap(x[j], x[j + 1]);
                swap(y[j], y[j + 1]);
            }
        }
    }

    for (int i = 0; i < dragons;i++)
    {
        if(power > x[i])
        {
            power += y[i];
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}