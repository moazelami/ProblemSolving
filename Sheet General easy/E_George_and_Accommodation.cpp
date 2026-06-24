#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test , counter = 0;
    cin >> test;
    while(test--)
    {
        int a, b;
        cin >> a >> b;

        if(b - a >= 2)
            counter++;
    }

    cout << counter;

    return 0;
}