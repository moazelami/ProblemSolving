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
    int pos = 0 ;
    for (int i = 0; i < t.size();i++)
    {
        if(s[pos] == t[i])
        {
            pos++;
        }
    }
    cout << pos + 1;

    return 0;
}