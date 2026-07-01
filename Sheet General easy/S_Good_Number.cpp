#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    ll counter = 0;
    while(n--)
    {
        string s;
        cin >> s;

        bool arr[10] = {false};
        bool flag = true;
        for (ll i = 0; i < s.size();i++)
        {
            arr[s[i] - '0'] = true;
        }
        for (ll i = 0; i <= k; i++)
        {
            if(!arr[i])
            {
                flag = false;
                break;
            }
        }
        
        if(flag)
            counter++;
    }
    cout << counter;

    return 0;
}