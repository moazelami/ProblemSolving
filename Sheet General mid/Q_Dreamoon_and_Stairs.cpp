#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int minMoves = ceil((double)n / 2);
    int maxMoves = n;

    int mn = INT_MAX;
    bool flag = false;
    for (int i = minMoves; i <= maxMoves;i++)
    {
        if(i % m == 0)
        {
            mn = min(mn, i);
            flag = true;
        }
    }


    if(flag)
        cout << mn;
    else
        cout << -1;

    return 0;
}