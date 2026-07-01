#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll s;
    cin >> s;
    int last = s % 10;
    if(s >= 0)
    {
        cout << s;
        return 0;
    }
    else if(s < 0)
    {
        if ((s / 10) > ((s / 100)*10 + last))
            cout << s / 10;
        else
            cout << ((s / 100) * 10 + last);
    }

    return 0;
}