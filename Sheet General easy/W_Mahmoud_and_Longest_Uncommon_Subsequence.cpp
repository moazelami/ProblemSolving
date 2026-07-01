#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;
    if(s == t)
        cout << -1;
    else
        cout << max(s.size(), t.size());

    return 0;
}