#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    char current = 'a';
    int ans = 0;
    for (char c : s)
    {
        int x = abs(int(c - current));
        ans += min(x, 26 - x);
        current = c;
    }
    cout << ans;

    return 0;
}