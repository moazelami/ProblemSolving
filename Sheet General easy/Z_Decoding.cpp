#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size;
    cin >> size;

    string s;
    cin >> s;

    string decoded = "";

    for (int i = size - 1; i >= 0;i--)
    {
        decoded.insert(decoded.begin() + decoded.size() / 2, s[i]);
    }

    cout << decoded;

    return 0;
}