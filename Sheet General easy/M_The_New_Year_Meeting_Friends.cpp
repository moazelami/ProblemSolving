#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int p = (x+y+z)-(max(x, max(y, z)) + min(x, min(y, z)));
    int distance = (max(x, max(y, z)) - p) + (p - min(x, min(y, z)));
    cout << distance;

    return 0;
}