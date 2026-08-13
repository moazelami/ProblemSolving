#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int team1 = 0, team2 = 0;
    string steam1, steam2;
    int size;
    cin >> size;
    for (int i = 0; i < size;i++)
    {
        string s;
        cin >> s;
        if(s == steam1 || team1 == 0)
        {
            steam1 = s;
            team1++;
        }
        else
        {
            steam2 = s;
            team2++;
        }
    }

    if(team1 > team2)
        cout << steam1;
    else
        cout << steam2;

        return 0;
}