#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll child, icequantity;
    cin >> child >> icequantity;
    ll sad = 0;
    while(child--)
    {
        char s;
        ll d;
        cin >> s >> d;
        
        if(s == '+')
        {
            icequantity += d;
        }
        else if(s == '-' && icequantity < d)
        {
            sad++;
        }
        else if (s == '-' && icequantity >= d)
        {
            icequantity -= d;
        }
    }

    cout << icequantity << " " << sad;

    return 0;
}